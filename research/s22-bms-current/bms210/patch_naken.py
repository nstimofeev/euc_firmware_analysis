from pathlib import Path
import sys
s=Path(sys.argv[1]).read_text().replace('printf("Running... Press Ctl-C to break.\\n");','/* quiet single stepping */')
for bits in [8,16]:
 marker='    if ((flag_bits & BV(CC_V_FLAG)) != 0)'
 pos=s.index(marker,s.index('if (bit_size == SIZE_8BITS)' if bits==8 else 'else if (bit_size == SIZE_16BITS)'))
 end=s.index('    // half-carry - H',pos) if bits==8 else s.index('    // negative - N',pos)
 if bits==16:
  # retain H block, if present
  half=s.find('    // half-carry - H',pos,end)
  if half>=0:end=half
 mask='0x80' if bits==8 else '0x8000'
 s=s[:pos]+f'''    if ((flag_bits & BV(CC_V_FLAG)) != 0)
    {{
      bool sub = (flag_bits & BV(OP_TYPE_BIT)) != OP_ADD_TYPE;
      bool overflow = ((sub ? (op1 ^ op2) : ~(op1 ^ op2)) & (op1 ^ rslt) & {mask}) != 0;
      if (overflow) {{ SET_V(); }} else {{ CLR_V(); }}
    }}

'''+s[end:]
Path(sys.argv[2]).write_text(s)
