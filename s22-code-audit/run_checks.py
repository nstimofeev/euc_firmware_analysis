"""Reproduce this report using only bundled original firmware and local emulation."""
import json,subprocess,sys
from pathlib import Path
HERE=Path(__file__).resolve().parent
for script in ['verify_sources.py','emulate_limiter.py','emulate_transition.py','emulate_mileage.py','emulate_battery_average.py','emulate_diagnostics.py','emulate_energy.py','emulate_light_memory.py','emulate_charge_recovery.py','emulate_diagnostic_path.py','emulate_config_storage.py','emulate_timer_setup.py','emulate_bms_frames.py','verify_extended_parameters.py','emulate_current_rescaling.py','extract_profile_map.py','emulate_profiles.py','emulate_current_gain_semantics.py','../research/warnings/emulate_warning_groups.py','../research/update-path/verify_update_delta.py','../research/update-path/emulate_bms_chunk.py','../research/units-timing/trace_timing_speed.py','../research/charge-early/emulate_charge_early.py']:
 p=subprocess.run([sys.executable,str(HERE/script)],text=True,capture_output=True)
 if p.returncode:
  print(p.stdout);print(p.stderr);raise SystemExit(p.returncode)
 print('PASS',script,flush=True)
lim=json.loads((HERE/'limiter-emulation.json').read_text())
expected={235:[852,810,642,642,642],236:[852,840,780,714,642]}
for r in lim:
 sign=1 if r['synthetic_request']>0 else -1
 assert [t['output_raw'] for t in r['trace']]==[sign*x for x in expected[r['version']]]
tr=json.loads((HERE/'transition-emulation.json').read_text())
for v,expected in [(239,[-200,-199,-150,-100,-100,0]),(241,[-200,-199,-100,0,0,0])]:
 actual=[r['correction_raw'] for r in tr if r['version']==v and r['g_averX10_iq_raw']==-32000 and r['commbospeed_raw']>=0]
 assert actual==expected
print('PASS: report regression values. These are isolated code tests, not a hardware validation.')
