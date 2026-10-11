#!/usr/bin/env python3
"""Execute pinned historical S22 loader ARM code offline, with explicit I/O boundaries.

Flash controller operations and hardware setup are models, not a board simulation.
Transport parsing, AES, erase/write loops, descriptor decisions and main control
flow execute the original bytes. Synthetic inputs here are not installable firmware.
"""
import hashlib, json, struct, binascii
from pathlib import Path
from unicorn import Uc, UC_ARCH_ARM, UC_MODE_THUMB, UC_MODE_MCLASS, UC_HOOK_CODE
from unicorn.arm_const import *
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes
HERE=Path(__file__).resolve().parent
B=(HERE/'S22-boot-area-20220406.bin').read_bytes()
BASE=0x08000000; APP=BASE+0x8000; MARK=BASE+0x3d000; AUXMARK=BASE+0x3d800
SHA='53d73b57cdedcb46f99c97e81d071e422810d9ab1d0dc0139b38e7499e0c2326'
assert hashlib.sha256(B).hexdigest()==SHA
P=lambda x:struct.pack('<I',x)

class Machine:
    def __init__(self, flash=None, stage=0):
        self.u=Uc(UC_ARCH_ARM,UC_MODE_THUMB|UC_MODE_MCLASS)
        self.u.mem_map(BASE,0x80000)
        self.u.mem_write(BASE,flash if flash is not None else B+b'\xff'*(0x80000-len(B)))
        self.u.mem_map(0x20000000,0x20000)
        self.u.mem_map(0x1ffff000,0x1000)
        self.u.mem_map(0x40000000,0x30000)
        self.u.mem_map(0xe000e000,0x2000)
        # CRT initialized data, zero-filled BSS supplied by fresh mapped RAM.
        source,length=(0x3198,0xcc) if stage==0 else (0x6080,0x84)
        self.u.mem_write(0x20000000,B[source:source+length])
        # Controlled synthetic capacity-register value, NOT detected MCU capacity.
        self.u.mem_write(0x1ffff7e0,struct.pack('<H',256))
        self.ops=[];self.tx=[];self.hw=[];self.frames=[];self.stops=set()
        self.hall=0; self.drop_program=False;self.drop_addresses=set();self.erase_fail=False;self.jump=None
        self.u.hook_add(UC_HOOK_CODE,self.hook)
    def read32(self,a):return struct.unpack('<I',self.u.mem_read(a,4))[0]
    def write32(self,a,v):self.u.mem_write(a,P(v))
    def byte(self,a):return self.u.mem_read(a,1)[0]
    def ret(self,value=0):
        self.u.reg_write(UC_ARM_REG_R0,value)
        self.u.reg_write(UC_ARM_REG_PC,self.u.reg_read(UC_ARM_REG_LR))
    def hook(self,u,a,size,data):
        if a in self.stops and (a!=0x08002c0e or u.reg_read(UC_ARM_REG_R5)==2):
            u.emu_stop();return
        if a in (0x08070000,0x0800820c):
            self.jump=hex(a);u.emu_stop();return
        r0=u.reg_read(UC_ARM_REG_R0);r1=u.reg_read(UC_ARM_REG_R1)
        if a in (0x080007b0,0x080056b0,0x0800b588):
            self.ops.append({'op':'erase','address':hex(r0),'status':2 if self.erase_fail else 4})
            if not self.erase_fail:u.mem_write(r0,b'\xff'*0x800)
            self.ret(2 if self.erase_fail else 4)
        elif a in (0x0800091c,0x0800572c):
            failed=self.drop_program or r0 in self.drop_addresses
            self.ops.append({'op':'program','address':hex(r0),'value':hex(r1),'status':2 if failed else 4})
            if not failed:self.write32(r0,self.read32(r0)&r1)
            self.ret(2 if failed else 4)
        elif a in (0x08000988,0x08000830,0x080007a4,0x08005814,0x08005704,0x080056a4,
                   0x0800b658,0x0800b5c8):self.ret()
        elif a==0x0800156c:
            self.tx.append(bytes(u.mem_read(r0,80)).split(b'\0')[0].hex());self.ret()
        elif a==0x08000b88:self.ret(self.hall)
        elif a in (0x0800116c,0x08002904,0x08002eb8,0x08000f98,0x08002f80,
                   0x08001dac,0x08002dec,0x0800225c,0x08001d8c,0x08002db0,0x08000bf4,
                   0x0800c144,0x0801f16c,0x080225b8,0x0801f674,0x0800ca0e):
            self.hw.append(hex(a));self.ret()
        elif a==0x080030f8:
            if not self.frames:u.emu_stop()
            elif not self.frames[0]:self.frames.pop(0);self.ret(0)
            else:self.ret(len(self.frames[0]))
        elif a==0x08002f48:
            frame=self.frames.pop(0)
            if frame:u.mem_write(r0,frame)
            self.ret()
        elif a==0x080041ec:
            self.jump=hex(a);u.emu_stop()
        elif a==0x080052b8:
            # UART TX DMA kick; replies remain in original queue memory.
            self.ret()
    def call(self,a,*args,count=2000000):
        for i,v in enumerate(args):self.u.reg_write([UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2,UC_ARM_REG_R3][i],v)
        self.u.reg_write(UC_ARM_REG_SP,0x20010000)
        self.u.reg_write(UC_ARM_REG_LR,0x08070001)
        self.u.emu_start(a|1,0x08070000,count=count)
        assert self.u.reg_read(UC_ARM_REG_PC)==0x08070000,hex(self.u.reg_read(UC_ARM_REG_PC))
        return self.u.reg_read(UC_ARM_REG_R0)
    def parser(self,frame=b''):
        self.u.mem_write(0x20009000,frame or b'\0'*20)
        return self.call(0x08002334,0x20009000,len(frame))
    def main(self,frames=(),hall=0,stop=None):
        self.frames=list(frames);self.hall=hall
        if stop:self.stops.add(stop)
        self.u.reg_write(UC_ARM_REG_SP,0x20010000)
        self.u.reg_write(UC_ARM_REG_LR,0x08070001)
        self.u.emu_start(0x08002b2d,0x08070000,count=2000000)
        pc=self.u.reg_read(UC_ARM_REG_PC)
        assert pc in (0x080030f8,0x080041ec,0x0800820c,stop),hex(pc)
        return {'PC':hex(pc),'target':self.jump,'active':self.read32(0x20000044),
                'temporary':self.byte(0x200000a0),'receiver_initialized':hex(0x08002eb8) in self.hw,
                'marker':hex(self.read32(MARK)),'hardware_boundaries':self.hw}
    def flash(self):return bytes(self.u.mem_read(BASE,0x80000))

def descriptor(m,good=True,sentinel=False):
    m.u.mem_write(APP,struct.pack('<2I',0x200076f0,0x0800820d))
    size=0 if sentinel else 8;code=0x12345678 if sentinel else 3
    relation=(size+code+0x14502367)&0xffffffff
    m.u.mem_write(APP+0x308,struct.pack('<6I',0x20211027,0xffffffff,relation if sentinel else 0xffffffff,size,code,relation))
    m.u.mem_write(APP+0x320,struct.pack('<2I',1,2 if good else 4))

def frame(seq,payload):
    assert len(payload)==16
    return bytes([1,seq&255])+payload+struct.pack('>H',binascii.crc_hqx(payload,0))

def header(size=2048):return frame(0,(b't\0'+str(size).encode()+b' ').ljust(16,b'\0'))

def main():
    ev={'input_sha256':SHA,'scope':'Historical 20220406 image, offline; no physical UART, BLE, FMC, power-loss or watchdog simulation',
        'boundaries':'Flash controller helpers, hardware setup, UART RX/TX only. Primary main, descriptor, parser, AES, higher-level flash loops execute original ARM bytes.',
        'startup':{},'protocol':{},'power_cut':{},'second_updater':{}}
    for name,marker,hall,good,aux in [
        ('normal_valid',False,0,True,False),('marker_valid',True,0,True,False),
        ('marker_bad_body',True,0,False,False),('bad_body_no_marker',False,0,False,False),
        ('hardware_entry',False,7,True,False),('aux_valid',False,0,True,True),
        ('aux_bad_body',False,0,False,True)]:
        m=Machine();descriptor(m,good)
        if marker:m.write32(MARK,0x55aaaa55)
        if aux:m.write32(AUXMARK,0x28635690)
        r=m.main(hall=hall);ev['startup'][name]=r
        assert r['active']==int(marker or not good)
        assert r['receiver_initialized']==bool(marker or hall==7)
    m=Machine();ev['startup']['erased_app_no_marker']=m.main()
    assert ev['startup']['erased_app_no_marker']['active']==1
    assert not ev['startup']['erased_app_no_marker']['receiver_initialized']
    # AES inverse uses original key expansion/decryption and original CBC chaining.
    key=B[0x3198:0x31b8]
    plain=bytes(range(64)); enc=Cipher(algorithms.AES(key),modes.CBC(bytes(16))).encryptor()
    cipher=enc.update(plain)+enc.finalize()
    m=Machine();m.call(0x080026ec);m.u.mem_write(0x20009000,cipher)
    for off in range(0,64,16):m.call(0x08002758,0x20009000+off,0x200007fc)
    assert bytes(m.u.mem_read(0x20009000,64))==plain
    ev['protocol']['AES']='PASS: 4 chained original AES-256-CBC blocks vs cryptography; IV zero'
    m=Machine();m.parser();r=m.parser(header());assert r==2
    assert m.ops==[{'op':'erase','address':hex(APP),'status':4}]
    m.parser();assert m.byte(0x20000080)==3
    p=frame(1,cipher[:16]);assert m.parser(p)==1
    assert bytes(m.u.mem_read(APP,16))==plain[:16]
    before=len(m.ops);assert m.parser(p)==0;assert len(m.ops)==before
    assert m.tx[-1]=='06'
    bad=bytearray(frame(2,cipher[16:32]));bad[-1]^=1
    assert m.parser(bytes(bad))==0 and len(m.ops)==before and m.tx[-1]=='15'
    assert m.parser(frame(2,cipher[16:32]))==1
    assert bytes(m.u.mem_read(APP,32))==plain[:32]
    # EOT checksum=0 is an explicitly accepted protocol value.
    eot=b'\4'+bytes(19)
    assert m.parser(eot)==0 and m.tx[-1]=='15'
    assert m.parser(eot)==0 and m.tx[-1]=='06'
    assert m.parser(frame(0,bytes(16)))==4
    ev['protocol']['sequence']={'header_result':2,'data_result':1,'duplicate':'ACK, no second write',
        'CRC_error':'NAK, no write','retry':'original CBC state preserved','EOT':'NAK then ACK','empty_header_result':4,
        'operations':m.ops,'tx':m.tx}
    # Original writer detects mismatch; original parser still advances/ACKs.
    f=Machine();f.parser();f.parser(header());f.parser();f.drop_program=True
    assert f.parser(frame(1,cipher[:16]))==1 and f.tx[-1]=='06'
    assert f.read32(0x20000074)==APP+16 and f.read32(APP)==0xffffffff
    ev['protocol']['program_failure']={'parser_result':1,'reply':f.tx[-1],'next_address':hex(f.read32(0x20000074)), 'ops':f.ops}
    f=Machine();f.erase_fail=True;f.parser();assert f.parser(header())==2
    ev['protocol']['erase_failure']={'parser_result':2,'next_address':hex(f.read32(0x20000074)),'ops':f.ops}
    # Full receive -> decrypt -> program -> final check -> jump, original main.
    # Synthetic metadata/vector target is intercepted; no installable app is built.
    ev['protocol']['full_main']={}
    for name,good,sentinel,relation_bad,drop_word in [
        ('ordinary_good',True,False,False,False),('ordinary_bad_sum',False,False,False,False),
        ('sentinel_bad_body',False,True,False,False),('bad_relation_bad_body',False,False,True,False),
        ('ordinary_flash_error',True,False,False,True),('sentinel_flash_error',True,True,False,True)]:
        t=Machine();descriptor(t,good,sentinel)
        if relation_bad:t.write32(APP+0x31c,0)
        payload=bytes(t.u.mem_read(APP,1024))
        enc=Cipher(algorithms.AES(key),modes.CBC(bytes(16))).encryptor()
        encrypted=enc.update(payload)+enc.finalize()
        fs=[b'',header(1024),b'']+[frame(i+1,encrypted[i*16:(i+1)*16]) for i in range(64)]
        fs+=[b'\4'+bytes(19),b'\4'+bytes(19),frame(0,bytes(16))]
        t=Machine();t.write32(MARK,0x55aaaa55)
        if drop_word:t.drop_addresses.add(APP+0x320)
        rr=t.main(fs)
        accepted=name not in ('ordinary_bad_sum','ordinary_flash_error')
        assert bool(rr['target'])==accepted
        assert t.flash()[:0x8000]==B
        assert t.read32(MARK)==0x55aaaa55
        ev['protocol']['full_main'][name]={'outcome':rr,'flash_operations':len(t.ops),
            'programmed_application_matches_payload':bytes(t.u.mem_read(APP,1024))==payload,
            'boot_area_unchanged':True,'watchdog_configured':hex(0x08000bf4) in t.hw}
    f=Machine();f.parser();f.parser(header(16));f.parser()
    f.parser(frame(1,cipher[:16]));f.parser(frame(2,cipher[16:32]))
    assert f.read32(0x20000070)==32
    ev['protocol']['declared_size']={'advertised_bytes':16,'accepted_bytes':32,
        'next_address':hex(f.read32(0x20000074)), 'scope':'bounded 32-byte synthetic input; no large overrun exercised'}
    # Full main confirms destructive header/marker ordering and restart choice.
    m=Machine();descriptor(m);r=m.main([b'',header()],hall=7,stop=0x08002c0e)
    assert m.read32(APP)==0xffffffff and m.read32(MARK)==0xffffffff
    restart=Machine(m.flash());ev['power_cut']['after_erase_before_marker']={'before_cut':r,'ops':m.ops,'restart':restart.main(),
        'restart_with_hardware_condition_7':Machine(m.flash()).main(hall=7)}
    m=Machine();descriptor(m);r=m.main([b'',header()],hall=7)
    assert m.read32(MARK)==0x55aaaa55
    restart=Machine(m.flash());rr=restart.main();assert rr['receiver_initialized'] and rr['active']==1
    ev['power_cut']['after_marker']={'before_cut':r,'ops':m.ops,'restart':rr}
    m.parser();m.parser(frame(1,cipher[:16]));restart=Machine(m.flash());rr=restart.main()
    assert rr['receiver_initialized'] and rr['active']==1
    # New header restarts from base, freshly erases rather than resumes.
    restart.parser();assert restart.parser(header())==2
    assert restart.ops[0]['address']==hex(APP) and restart.read32(0x20000074)==APP
    assert restart.read32(APP)==0xffffffff
    ev['power_cut']['mid_data']={'restart':rr,'restart_header_ops':restart.ops,'next_address':hex(restart.read32(0x20000074))}
    # Intentionally synthetic weak descriptor test, no transport/authentication claim.
    m=Machine();descriptor(m,sentinel=True);m.write32(MARK,0x55aaaa55)
    rr=Machine(m.flash()).main();assert rr['active']==1
    m.write32(MARK,0xffffffff);rr2=Machine(m.flash()).main();assert rr2['target']=='0x800820c'
    ev['power_cut']['valid_app_marker_persists']={'before_app_clears_marker':rr,'after_marker_cleared':rr2}
    apppath=HERE.parent.parent/'s22-developer-pack/firmware/decrypted/S22-v241-decrypted.bin'
    app=apppath.read_bytes()
    expected='99491754f5478caf5d97a5fa31c0a17bc7be55f0c14ee3f87058b55916fe9509'
    assert hashlib.sha256(app).hexdigest()==expected
    m=Machine();m.u.mem_write(APP,app);m.write32(MARK,0x55aaaa55)
    m.call(0x08019dd8)
    assert m.read32(MARK)==0xffffffff and m.ops[0]['address']==hex(MARK)
    ev['power_cut']['v241_application_clear']={'input_sha256':expected,'routine':'0x08019dd8 -> 0x0801ff5c',
        'operations':m.ops,'hardware_boundaries':m.hw,'marker_after':hex(m.read32(MARK))}
    # Auxiliary updater: initialize original receive/transmit ring descriptors.
    m=Machine(stage=1)
    auxstate=struct.unpack_from('<I',B,0x501c)[0]
    rxqueue=struct.unpack_from('<I',B,0x537c)[0]-12
    rxout=struct.unpack_from('<I',B,0x5380)[0]
    txqueue=struct.unpack_from('<I',B,0x5024)[0]
    for q,back in [(rxqueue,0x20003000),(txqueue,0x20004000)]:
        m.u.mem_write(q,bytes([0,0,8,0])+bytes(4)+P(back))
    def auxpacket(payload):
        packet=bytearray(45);packet[0]=len(payload)+2;packet[1:1+len(payload)]=payload
        m.u.mem_write(0x20009000,bytes(packet));m.call(0x080049b4,0x20009000)
        packet=bytes(m.u.mem_read(0x20009000,45))
        # Stream framing includes header, declared body and calculated CRC.
        wire=b'\x55\xaa'+packet[:packet[0]-1]+packet[43:45]
        for x in wire:m.call(0x08004a12,x)
        m.call(0x08005326)
        return wire.hex()
    start=auxpacket(bytes([0xd0,0,0])+bytes(6))
    data=bytes(range(32));wire=auxpacket(bytes([0xd1,0,0,32])+data)
    assert not m.ops,'partial page must be buffered only'
    assert bytes(m.u.mem_read(0x200000c0,32))==data
    assert m.read32(APP)==0xffffffff
    finish=auxpacket(bytes([0xd0,0,1])+bytes(6))
    assert bytes(m.u.mem_read(APP,32))==data
    assert len(m.ops)==9 and m.ops[0]['op']=='erase'
    ev['second_updater']={'entry':'0x080043d6','dispatcher':'0x08005326', 'state_address':hex(auxstate),
        'start_frame':start,'data_frame':wire,'finish_frame':finish,
        'partial_page':'32 plaintext bytes buffered in RAM, no flash op until D0/1', 'ops':list(m.ops),
        'rx_output_address':hex(rxout),'rx_queue_address':hex(rxqueue)}
    # Auxiliary first-start pairing writes its own header. This is NOT a recovery copy.
    a=Machine(stage=1);a.call(0x08004804)
    paired=Machine(a.flash(),stage=1);paired.call(0x08004804)
    missing=paired.call(0x08004872);paired.write32(APP+0x304,0)
    matching=paired.call(0x08004872);assert (missing,matching)==(0,1)
    different=Machine(a.flash(),stage=1)
    different.u.mem_write(0x1ffff7e8,bytes(range(1,13)))
    try:different.call(0x08004804,count=5000)
    except AssertionError:pass
    else:raise AssertionError('different synthetic UID must not pass')
    assert different.u.reg_read(UC_ARM_REG_PC)==0x0800484a
    ev['second_updater']['first_start_initialization']={'synthetic_UID':'all zero; not board identification',
        'routine':'0x08004804 -> callback 0x080047c8','ops':a.ops,
        'same_UID_restart':'returned normally','different_UID_PC':'0x0800484a infinite loop',
        'application_UID_gate':{'all_FF_field_R0':missing,'matching_synthetic_field_R0':matching},
        'scope':'Original binding/gate code tested with synthetic UID registers; actual user MCU/UID unknown'}
    # Original marker helpers (separate from transfer handler) select/unselect auxiliary image.
    m.call(0x08004962);assert m.read32(AUXMARK)==0x28635690
    m.call(0x08004978);assert m.read32(AUXMARK)==0xffffffff
    ev['second_updater']['selection_helpers']={'set':'0x08004962','clear':'0x08004978','marker_address':hex(AUXMARK)}
    (HERE/'recovery-evidence.json').write_text(json.dumps(ev,indent=2)+'\n')
    print('PASS: original primary startup, AES, CRC/retry, flash-error handling, power-cut snapshots and auxiliary framed plaintext update')

if __name__=='__main__':main()
