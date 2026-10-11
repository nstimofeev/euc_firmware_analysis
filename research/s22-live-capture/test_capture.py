"""Meaningful malformed-capture and archive handling checks; no Bluetooth/ADB."""
import importlib.util
from pathlib import Path
import struct
import tempfile
import unittest
import zipfile

spec = importlib.util.spec_from_file_location("capture", Path(__file__).with_name("inspect_capture.py"))
capture = importlib.util.module_from_spec(spec)
spec.loader.exec_module(capture)


def trace(payload=b"\x02\x00", original=None, drops=0):
    header = capture.MAGIC + struct.pack(">II", 1, 1002)
    record = struct.pack(">IIIIq", len(payload) if original is None else original,
                         len(payload), 0, drops, 0x00dcddb30f2f8000)
    return header + record + payload


class CaptureTests(unittest.TestCase):
    def test_truncation_is_rejected(self):
        data = trace()
        for size in (0, 8, 15, 17, 39, len(data) - 1):
            with self.subTest(size=size), self.assertRaises(ValueError):
                capture.inspect(data[:size])

    def test_clipped_records_and_drops_are_visible(self):
        result = capture.inspect(trace(original=20, drops=4))
        self.assertEqual(result["clipped_records"], 1)
        self.assertEqual(result["max_reported_cumulative_drops"], 4)

    def test_bad_length_and_version_are_rejected(self):
        with self.assertRaises(ValueError):
            capture.inspect(trace(original=1))
        with self.assertRaises(ValueError):
            capture.inspect(capture.MAGIC + struct.pack(">II", 2, 1002))

    def test_empty_log_does_not_claim_session_coverage(self):
        result = capture.inspect(capture.MAGIC + struct.pack(">II", 1, 1002))
        self.assertEqual(result["records"], 0)
        self.assertIn("unverified", result["scope"])

    def test_zip_paths_cannot_escape_output_and_other_phone_files_are_omitted(self):
        with tempfile.TemporaryDirectory() as folder:
            root = Path(folder)
            archive = root / "bugreport.zip"
            with zipfile.ZipFile(archive, "w") as target:
                target.writestr("../../btsnoop_hci.log", trace())
                target.writestr("FS/private-phone-data.txt", "omit me")
                target.writestr("FS/btsnoop_hci.log.last", trace()[:-1])
            result = capture.run(archive, root / "out")
            self.assertEqual(len(result["traces"]), 2)
            self.assertIn("error", result["traces"][1])
            self.assertEqual(sorted(p.name for p in (root / "out").iterdir()),
                             ["inspection.json", "trace-000.btsnoop"])
            self.assertFalse((root / "btsnoop_hci.log").exists())

    def test_missing_raw_log_and_existing_output(self):
        with tempfile.TemporaryDirectory() as folder:
            root = Path(folder)
            archive = root / "bugreport.zip"
            with zipfile.ZipFile(archive, "w") as target:
                target.writestr("bugreport.txt", "btsnooz is not a raw trace")
            result = capture.run(archive, root / "out")
            self.assertEqual(result["traces"], [])
            self.assertTrue(any("btsnooz" in w for w in result["warnings"]))
            with self.assertRaises(FileExistsError):
                capture.run(archive, root / "out")


if __name__ == "__main__":
    unittest.main()
