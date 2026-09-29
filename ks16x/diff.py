#!/usr/bin/env python3
"""Compare downloaded 16X images and recovered parameter descriptors offline."""
from collections import Counter
import hashlib
import json
import re
from pathlib import Path

ROOT = Path(__file__).resolve().parent
VERSIONS = (212, 220, 223)


def inspect_pair(a, b):
    data_a = (ROOT/'firmware'/f'KS-16X-v{a}-decrypted.bin').read_bytes()
    data_b = (ROOT/'firmware'/f'KS-16X-v{b}-decrypted.bin').read_bytes()
    x = json.loads((ROOT/'evidence'/f'diagnostics-v{a}.json').read_text())
    y = json.loads((ROOT/'evidence'/f'diagnostics-v{b}.json').read_text())
    overlap = min(len(data_a), len(data_b))
    same = sum(aa == bb for aa, bb in zip(data_a, data_b))
    first = next((i for i, (aa, bb) in enumerate(zip(data_a, data_b)) if aa != bb), overlap)
    xa, ya = Counter(r['name'] for r in x), Counter(r['name'] for r in y)
    def name_variant(data):
        return sorted(set(m.group().decode() for m in re.finditer(rb'KS16X[0-9]+', data)))
    return {'from': a, 'to': b, 'from_bytes': len(data_a), 'to_bytes': len(data_b),
            'same_offset_equal_bytes': same, 'overlap_bytes': overlap,
            'same_offset_equal_fraction': round(same/overlap, 6),
            'first_changed_offset': hex(first),
            'descriptor_count_from': len(x), 'descriptor_count_to': len(y),
            'descriptor_names_added': list((ya-xa).elements()),
            'descriptor_names_removed': list((xa-ya).elements()),
            'candidate_variant_strings_from': name_variant(data_a),
            'candidate_variant_strings_to': name_variant(data_b),
            'note': 'Same-offset byte comparison is not a function-level diff: insertion and linker layout shifts change downstream offsets.'}


def main():
    report = [inspect_pair(a, b) for a, b in zip(VERSIONS, VERSIONS[1:])]
    (ROOT/'evidence'/'diff.json').write_text(json.dumps(report, indent=2)+'\n')
    print(json.dumps(report, indent=2))


if __name__ == '__main__':
    main()
