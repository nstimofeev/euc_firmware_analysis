#!/usr/bin/env python3
"""Rebuild the S22 release-claim coverage register and function inventory.

Run from repository root: python research/change-coverage/build_coverage.py
This script deliberately does not run semantic/fuzzy matching across releases.
"""
from __future__ import annotations
import hashlib, json, os
from pathlib import Path

ROOT = Path(__file__).resolve().parents[2]
OUT = ROOT / "research" / "change-coverage"
VERSIONS = [219,221,222,223,224,227,229,231,232,233,235,236,237,239,241]

# This is an editorially curated mapping from the manufacturer's release notes
# to the existing address-level investigations; status never means a whole
# release or function has been semantically understood.
CLAIMS = [
 (219,"tail lamp effects optimized","unverified",[],"No pre-2.19 image is present; no before/after comparison."),
 (219,"mainboard logging optimized","unverified",[],"No pre-2.19 image is present; behavior not traced."),
 (219,"BMS warnings displayed and pedal-lift response","unverified",[],"No pre-2.19 baseline; later warning analysis does not establish this claim."),
 (219,"motor drive optimized for greater output","unverified",[],"No pre-2.19 image or addressed comparative control-path analysis."),
 (219,"known bugs fixed","unverified",[],"Unbounded generic manufacturer claim."),
 (221,"APP charge-full ratio configurable from 50% to 100%","unverified",[],"No semantic tracing of setting, persistence, or charge termination."),
 (221,"energy-consumption calculation added","unverified",[],"The 2.33→2.35 energy change is investigated; this earlier claim is not."),
 (221,"upgrade clears total mileage","partially_verified",["s22-developer-pack/release_history.json"],"Manufacturer explicitly warns of reset; reset path/cause not verified in firmware."),
 (221,"logs, battery parameters, and output power optimized","unverified",[],"Several separate broad claims; no matching path established."),
 (221,"prevent power-on after switched-off wheel is laid down","unverified",[],"No relevant transition path traced."),
 (221,"other known bugs fixed","unverified",[],"Unbounded generic manufacturer claim."),
 (222,"charging BMS high-temperature alert code 225","unverified",["research/warnings/REPORT_RU.md"],"Warning bits were traced for 2.29/2.31; mapping code 225 to a status bit is open."),
 (222,"single-cell overcharge warning code 233 while charging","unverified",["research/warnings/REPORT_RU.md"],"Warning bits were traced for 2.29/2.31; mapping code 233 to a status bit is open."),
 (222,"BMS voltage calibration interface","unverified",[],"No command/UI path identified."),
 (223,"enable charging after charging-current zero acquisition; keep main power on","partially_verified",["research/charge-early/REPORT_RU.md","research/charge-early/charge-early-emulation.json"],"v222→v223 state-1 path changes post-zero bit-band clearing at 0x08014344–0x08014352; physical GPIO/rail identity and other states remain open."),
 (224,"km-to-inch setting/change","unverified",[],"Release note is a short tag; exact behavior and code path not established."),
 (224,"1728 Wh battery variant","unverified",[],"Tag does not identify code branch or supported hardware."),
 (224,"headlight-off while stand is static","unverified",[],"Tag does not establish condition, behavior, or address."),
 (224,"BMS update tips","unverified",[],"No specific behavior identified from this note."),
 (227,"tiltback made same as other KingSong wheels","unverified",[],"No quantified target/comparator and no comparative control-path trace."),
 (227,"BMS runtime and reset interface supported","unverified",[],"No dedicated command/UI path traced."),
 (229,"dynamic parameters adjusted; test-only release","partially_verified",["PROFILES_AND_CONTROL_RU.md","research/current-gain-semantics.json"],"New profiles, speed correction, and current-gain direction traced; complete behavioral intent is not established."),
 (231,"BMS warning severity separated and warning test added","partially_verified",["research/warnings/REPORT_RU.md","research/warnings/warning_groups.json","research/warnings/warning_reactions.json"],"Severity-bit regrouping and task helper calls verified at 0x0801e7a4 and 0x0800c622; mapping to named alarm codes, physical tiltback, and app test trigger remain open."),
 (231,"APP headlight brightness adjustment","unverified",[],"New command / output route not traced."),
 (231,"factory aging-mode entry conditions adjusted","unverified",[],"Production-mode branch not isolated."),
 (232,"supports new production fixture","unverified",[],"No production-fixture path identified; note does not establish riding incompatibility."),
 (233,"trip log added","unverified",["ANALYSIS_EXTENDED_RU.md"],"2.33→2.35 energy arithmetic is traced, but creation, layout, and lifecycle of the trip log are not."),
 (233,"manual headlight has two brightness levels","unverified",[],"Later persistence of manual/automatic mode is traced; brightness output levels are not."),
 (235,"trip-log energy accounting corrected","partially_verified",["ANALYSIS_EXTENDED_RU.md","research/energy-emulation.json"],"At 0x0802013e–0x080201c2 vs 0x0802027a–0x08020356 arithmetic and separate positive/negative counters verified; physical units/timebase open."),
 (235,"consumed and returned energy tracked separately","verified",["ANALYSIS_EXTENDED_RU.md","research/energy-emulation.json"],"Separate counters and synthetic execution verified in 2.35; meanings are code-path meanings, not calibrated physical units."),
 (235,"Pro+ Bluetooth name derived from serial number","partially_verified",["research/s22-configuration/REPORT_RU.md","research/s22-configuration/evidence.json"],"v235/v241 serial byte +5 selects S22Pro and plus suffix in name construction; full radio/name delivery and introduction versus v233 not checked."),
 (236,"total-current limit changed for off-road and hill performance","verified",["ANALYSIS_EXTENDED_RU.md","research/current-rescaling-emulation.json"],"2.35→2.36 limiter state/divisor changes executed and ADC caller chain located at 0x0800863c; no physical performance test."),
 (236,"BMS firmware retrieval uses larger/faster packets","partially_verified",["research/update-path/UPDATE_PATH_RU.md","research/update-path/update-delta-evidence.json"],"Receiver/DMA changes traced at 0x08011560 and 0x08016944→0x080169cc; full transport interoperability and BMS bootloader not established."),
 (236,"mainboard firmware update uses larger/faster packets","unverified",["research/update-path/UPDATE_PATH_RU.md"],"The mainboard updater/bootloader is not present in analyzed image; DMA buffer growth alone cannot establish updater acceptance."),
 (237,"charging management optimized","partially_verified",["ANALYSIS_EXTENDED_RU.md","research/v236-charge.json","research/v237-charge.json"],"State-table expansion and state 20 path at 0x0801b51a executed; other states and physical charging effects remain open."),
 (237,"APP manual/automatic lighting choice remembered","verified",["ANALYSIS_EXTENDED_RU.md","research/light-memory-emulation.json","research/config-storage-emulation.json"],"Mode bit persistence and restore path verified around 0x08021510; brightness meaning of low bits remains open."),
 (239,"initial speed unlimit after 1 km","partially_verified",["research/speed-units/REPORT_RU.md","ANALYSIS_EXTENDED_RU.md"],"Threshold >2000→>1000 verified in settings handler; exact manufacturer phrase and all unlock conditions are not established."),
 (241,"balance algorithm change addresses near-stop braking jerk","partially_verified",["ANALYSIS_EXTENDED_RU.md"],"Current correction fades at prior speed boundary and averaging rejects 0/65535; broader ride/physical claim not testable offline."),
 (241,"compatible with new battery architecture","partially_verified",["ANALYSIS_EXTENDED_RU.md","research/v241-bms-parser.json","research/v241-bms-frame-validator.json"],"Expected 0x42 replies of 93/104 bytes are accepted; the full new BMS protocol and hardware matrix are open."),
]

PRIORITIES = [
 ("P1","2.22 warning codes 225/233 → BMS bits → reaction","unverified","", "Named-code mapping and path to motor reaction are safety-relevant; existing warning analysis explicitly leaves these links open."),
 ("P2","2.21 charge ratio 50–100% and termination behavior","unverified","", "User-visible battery/charging behavior; locate setting storage and charge-state consumers."),
 ("P3","2.21 total-mileage reset on upgrade","partially_verified","", "Release warning is established; determine exact migration/reset path and which mileage field resets."),
 ("P4","2.23 charge enable vs main-power rail mapping","partially_verified","0x08014344–0x08014352; 0x422101b0; 0x40011010/0x40011014", "Instruction sequence verified but board net/GPIO identity is unknown."),
 ("P5","2.27 tiltback equivalence and threshold/actuator path","unverified","", "Translate phrase 'same as other wheels' into explicit comparisons and follow control output."),
 ("P6","2.33 trip-log creation/layout/lifecycle","unverified","", "Energy accumulator delta is known but log record structure, persistence, and exposure are not."),
 ("P7","2.33 two manual-light levels and 2.31 APP brightness control","unverified","", "A persisted mode bit is known; command, level mapping, and lamp output path remain unverified."),
 ("P8","2.35 Pro+ Bluetooth name delivery and introduction","partially_verified","v235 0x0801b8c4; v241 0x0801c1f0", "Serial gate and name construction traced; compare v233 and trace BLE transmission of constructed name."),
 ("P9","2.36 mainboard update large-packet flow and acceptance","unverified","", "Updater absent; determine bootloader source and packet limits before inferring compatibility."),
 ("P10","2.24 unit switch, 1728 Wh variant, stand/headlight, BMS tips","unverified","", "Four short tags lack exact behaviors and code locations; split into individually testable claims during follow-up."),
]

def sha(path: Path) -> str:
    h=hashlib.sha256()
    with path.open('rb') as f:
        for b in iter(lambda:f.read(1<<20),b''): h.update(b)
    return h.hexdigest()

def rel(p: Path) -> str: return p.relative_to(ROOT).as_posix()

def main():
    history=json.loads((ROOT/'s22-developer-pack/release_history.json').read_text())
    history_versions={int(x['versionNumber']) for x in history}
    assert history_versions == set(VERSIONS), (history_versions, VERSIONS)
    claims=[]
    for i,(v,claim,status,evidence,note) in enumerate(CLAIMS,1):
        claims.append({"claim_id":f"S22-{v}-{i:02d}","release_version":v,"manufacturer_claim_summary_en":claim,"coverage_status":status,
                       "evidence_paths":[Path(os.path.relpath(ROOT/x,OUT)).as_posix() for x in evidence],"note":note})
    inventory=[]
    inputs=[ROOT/'CHANGELOG_EVIDENCE_RU.md', ROOT/'s22-developer-pack/release_history.json']
    for v in VERSIONS:
        p=ROOT/f'decompiled/v{v}/functions.json'; inputs.append(p)
        x=json.loads(p.read_text()); fs=x['functions']
        entries=[int(f['entry'],16) for f in fs]
        inventory.append({"version":v,"program":x['program'],"functions_json":rel(p),"sha256":sha(p),
          "functions_exported":len(fs),"functions_decompiled":x['functions_decompiled'],"functions_failed":x['functions_failed'],
          "first_entry":f"0x{min(entries):08x}","last_entry":f"0x{max(entries):08x}",
          "entry_span_bytes_inclusive":max(entries)-min(entries)+1,"sum_reported_body_bytes":sum(int(f.get('body_bytes',0)) for f in fs),
          "direct_call_edges_listed":sum(len(f.get('called_functions',[])) for f in fs),
          "unique_direct_call_targets":len({t for f in fs for t in f.get('called_functions',[])}),
          "functions_with_decompile_flag_false":sum(not bool(f.get('decompiled')) for f in fs)})
    inputs += [ROOT/'ANALYSIS_EXTENDED_RU.md', ROOT/'PROFILES_AND_CONTROL_RU.md']
    for _v,_claim,_status,_evidence,_note in CLAIMS:
        for evidence_path in _evidence:
            p=ROOT/evidence_path
            if p.exists() and p not in inputs: inputs.append(p)
    pair_rows=[]
    for i in range(len(VERSIONS)-1):
        old,new=VERSIONS[i],VERSIONS[i+1]
        pair_rows.append({"from_version":old,"to_version":new,"release_claim_ids":[c['claim_id'] for c in claims if c['release_version']==new],
          "structural_function_delta":inventory[i+1]['functions_exported']-inventory[i]['functions_exported'],
          "semantic_delta_estimate":None})
    evidence_json={"method":"Curated claim-to-existing-report mapping; reproducible inventory of Ghidra function exports. No fuzzy function matcher run.",
      "coverage_status_definitions":{"verified":"Specific stated behavior supported by addressed comparative machine-code analysis and/or bounded execution; scope in note applies.","partially_verified":"Some material part of claim is supported; note states unresolved portion.","unverified":"Available evidence does not establish the claim; not evidence that the code lacks it."},
      "adjacent_pairs":pair_rows,"claim_count":len(claims),"claims":claims,
      "function_inventory":inventory,"function_inventory_caveat":"Exported function entries, Ghidra body_bytes, and direct call relationships are structural inventory only. Entry span is not executable extent; function count deltas are not added/removed behavior. Ghidra decompilation success is not semantic coverage.",
      "input_sha256":{rel(p):sha(p) for p in inputs},"tool":"Python 3 standard library; no external packages"}
    (OUT/'coverage_evidence.json').write_text(json.dumps(evidence_json,ensure_ascii=False,indent=2)+'\n')
    (OUT/'priority_gaps.json').write_text(json.dumps({"prioritized_unverified_changes":[{"priority":p,"question":q,"coverage_status":s,"known_addresses":a or None,"why_prioritized":why} for p,q,s,a,why in PRIORITIES]},ensure_ascii=False,indent=2)+'\n')

if __name__=='__main__': main()
