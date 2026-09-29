"""Offline bounded execution of original v236 0x7a/0x31 BMS chunk parser.

Flash writing and the response queue are intercepted at their entry points. This
is neither a bootloader nor a transport/hardware test.
"""
import json
import struct
import sys
from pathlib import Path
ROOT=Path(__file__).resolve().parents[2]
sys.path.insert(0,str(ROOT/'s22-code-audit'))
from emulation import Machine
from unicorn.arm_const import UC_ARM_REG_R0,UC_ARM_REG_R1,UC_ARM_REG_R2

OUT=Path(__file__).with_name('bms-chunk-emulation.json')

def crc(data):
    m=Machine(236)
    m.u.mem_write(0x20010000,bytes(data))
    m.run(0x08015ce4,regs={UC_ARM_REG_R0:0x20010000,UC_ARM_REG_R1:len(data)})
    return m.u.reg_read(UC_ARM_REG_R0)&0xffff

def frame(count=1,index=0,data=None,correct_header=True,correct_data=True):
    if data is None:data=bytes(i&255 for i in range(count*12))
    f=bytearray(20)+data
    f[:2]=b'\xaaU'
    struct.pack_into('<H',f,4,count)
    struct.pack_into('<H',f,14,index)
    f[16]=0x7a;f[17]=0x31
    v=crc(data)
    f[2:4]=v.to_bytes(2,'big')
    if not correct_data:f[2]^=1
    f[18:20]=crc(f[2:18]).to_bytes(2,'big')
    if not correct_header:f[18]^=1
    return bytes(f)

def execute(label,packet,total=10,cursor=0):
    m=Machine(236)
    m.put(0x200009c4,total,'<H');m.put(0x200009ca,cursor,'<H')
    m.u.mem_write(0x20010000,packet)
    calls=[]
    def intercept(mm,a):
        u=mm.u
        calls.append({'function':hex(a),'r0':u.reg_read(UC_ARM_REG_R0),'r1':u.reg_read(UC_ARM_REG_R1),'r2':u.reg_read(UC_ARM_REG_R2)})
    m.stub([0x08017764,0x0800f638],intercept)
    m.run(0x080169cc,regs={UC_ARM_REG_R0:0x20010000,UC_ARM_REG_R1:len(packet)},count=200000)
    return {'case':label,'length':len(packet),'return':m.u.reg_read(UC_ARM_REG_R0),'cursor':m.get(0x200009ca,'<H'),'calls':calls}

def main():
    cases=[execute('one_valid',frame()),execute('bad_header_crc',frame(correct_header=False)),execute('bad_payload_crc',frame(correct_data=False)),execute('wrong_index',frame(index=1)),execute('zero_count',frame(count=0)),execute('count_37',frame(count=37)),execute('max_36',frame(count=36),total=40)]
    assert cases[0]['cursor']==1 and any(x['function']=='0x8017764' for x in cases[0]['calls'])
    for c in cases[1:4]+cases[5:6]:
        assert c['cursor']==0 and not any(x['function']=='0x8017764' for x in c['calls']),c
    assert cases[4]['cursor']==0 and any(x['function']=='0x8017764' and x['r2']==0 for x in cases[4]['calls'])
    assert cases[6]['cursor']==36 and any(x['function']=='0x8017764' and x['r2']==36 for x in cases[6]['calls'])
    OUT.write_text(json.dumps({'original_image':'S22-v236-decrypted.bin','entry':'0x080169cc','flash_writer_stub':'0x08017764','response_queue_stub':'0x0800f638','cases':cases},indent=2)+'\n')
    print(OUT)
if __name__=='__main__':main()
