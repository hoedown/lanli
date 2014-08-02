#!/usr/bin/python
"""
Reads the official HTML5 entities.json file from STDIN,
and prints GPERF code to generate a lookup function on STDOUT.

JSON file available at: http://www.w3.org/TR/html5/entities.json
"""

import json, sys

declaration = """
  struct html_entity {
    const char *name;
    uint8_t utf8 [%d];
    size_t size;
  };
"""

# 1. Read and load the JSON
src = sys.stdin.read()
entities = json.loads(src)

# 2. Generate keywords and their fields
max_utf8_size = 0
keywords = ''

for entity in entities:
  if entity[0] != '&':
    raise "Invalid entity was found."
  if entity[-1] != ';': continue
  name = entity[1:-1].encode("ascii")

  chars = entities[entity]["characters"]
  utf8 = chars.encode("utf-8")
  expr = "{ " + ", ".join("0x%02X" % ord(c) for c in utf8) + " }"

  max_utf8_size = max(len(utf8), max_utf8_size)
  keywords += ", ".join([name, expr, str(len(utf8))]) + "\n"

# 3. Output everything
declaration = declaration % max_utf8_size
sys.stdout.write("%%\n".join([declaration, keywords]))
