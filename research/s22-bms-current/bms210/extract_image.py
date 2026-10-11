#!/usr/bin/env python3
"""Extract the CRC-verified staged BMS update from an unmodified public flash capture."""
from pathlib import Path
import argparse,hashlib,struct,binascii,urllib.request,json
SOURCE_COMMIT='9258eac039304991a815b8880c4dddca7a4e983c'
URL=f'https://raw.githubusercontent.com/jeremy-prater/ks-s22-mods/{SOURCE_COMMIT}/firmware/capture.bin'
CAPTURE_SHA='e1ad38200189fd445cf9cf805206ed853398124b2ffa2f5326040269d7fc3552'
BODY_SHA='2003d5236b08f7a8dc51585ef34fb60eb7ad796f0716a6c1530c61cfcd09f843'
def main():
 p=argparse.ArgumentParser();p.add_argument('--capture',type=Path);args=p.parse_args()
 raw=args.capture.read_bytes() if args.capture else urllib.request.urlopen(URL,timeout=60).read()
 assert len(raw)==524288 and hashlib.sha256(raw).hexdigest()==CAPTURE_SHA
 count,reserved0,crc,reserved1=struct.unpack_from('<HHHH',raw,0x29000)
 assert (count,reserved0,crc,reserved1)==(5115,65535,0xe81a,65535)
 body=raw[0x29008:0x29008+count*12]
 assert binascii.crc_hqx(body,0)==crc and hashlib.sha256(body).hexdigest()==BODY_SHA
 root=Path(__file__).resolve().parent;(root/'KSS22BA-2202-2.10-staged.bin').write_bytes(body)
 manifest={'source_url':URL,'source_commit':SOURCE_COMMIT,'source_kind':'public mainboard flash capture containing staged BMS update, not an official catalog download','capture_size':len(raw),'capture_sha256':CAPTURE_SHA,'header_offset':'0x29000','body_offset':'0x29008','record_count':count,'record_size':12,'body_size':len(body),'crc_algorithm':'CRC-16/CCITT poly 0x1021 init 0 xorout 0 (binascii.crc_hqx)','crc16':'e81a','body_sha256':BODY_SHA,'inferred_load_address':'0x8b00','reset_vector':'0x17846','model_string_address':'0x90c2','model_string':'KSS22BA-2202-2.10','serial_placeholder':'KSC02A30222408***','architecture':'STM8','exact_MCU_and_sensor':'not established'}
 (root/'image_manifest.json').write_text(json.dumps(manifest,indent=2)+'\n');print('PASS: extracted 61380 bytes; source SHA-256, staging CRC and image SHA-256 match')
if __name__=='__main__':main()
