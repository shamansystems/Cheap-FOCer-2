#!/usr/bin/env python

import subprocess
import shutil
import glob
import sys
import os
import re

dpi=90
scale_inch = 0.001

re_exp = r'\$Sheet\nS\s+(\d+)\s+(\d+)\s+(\d+)\s+(\d+).*?\nF0\s+(\S+)\s+\d+.*?F1\s+(\S+)'

html_head = '<html><body>\n'
img_text = '  <img src="%s.svg" usemap="#%s_map" width="%d" height="%d"><p>\n'
map_head = '  <map name="%s_map">\n'
map_text = '    <area shape="rect" coords="%d, %d, %d, %d" href="#%s-%s_ref">\n'
map_foot = '  </map>\n'
html_foot = '</body></html>\n'

if len(sys.argv) < 4:
  print "Usage python %s <svg image path> <schematic top.sch> <out path>" % sys.argv[0]
  exit()

img_path = sys.argv[1]
fin = sys.argv[2]
out_path = sys.argv[3]

if not os.path.isdir(out_path):
  if os.path.exists(out_path):
    shutil.rmtree(out_path)
  os.mkdir(out_path)

img_files = glob.glob(os.path.join(img_path, '*.svg'))
images = map(lambda s: os.path.basename(s), img_files)
image_info = {}
for f in img_files:
  m = re.search(r'width="(\d+\.*\d*)cm" height="(\d+\.*\d*)cm"', open(f, 'rt').read())
  if m:
    image_info[os.path.basename(f)] = map(lambda x: int(dpi*(float(x)/2.54)), list(m.group(1, 2)))

top_sheet = os.path.basename(fin.replace('.sch', '.svg'))

if top_sheet in images:
  images.remove(top_sheet)
  images = [top_sheet] + images

html_out = os.path.join(out_path, 'index.html')
print "Creating %s" % html_out

rects = list
with open(html_out, 'wt') as out:
  out.write(html_head)
  for img_name in images:
    fname = img_name.replace('.svg', '')
    if img_name != top_sheet:
      out.write('  <a href="javascript:history.back()" id="%s_ref">Go Back</a><p>\n' % fname);
    out.write(img_text % (fname, fname, image_info[img_name][0], image_info[img_name][1]))
  with open(fin, 'rt') as top:
    fname = top_sheet.replace('.svg', '')
    out.write(map_head % fname)
    for m in re.findall(re_exp, top.read(), re.MULTILINE|re.DOTALL):
      ts_x, ts_y, ts_w, ts_h, name, sch = m
      s_x, s_y, s_w, s_h = map(lambda x: float(x)*dpi, [ts_x, ts_y, ts_w, ts_h])
      x1, y1, x2, y2 = map(lambda x: int(x*scale_inch), [s_x, s_y, s_x+s_w, s_y+s_h])
      sheet = name.replace('"', '')
      sheet_f = sch.replace('.sch', '').replace('"', '')
      map_out = map_text % (x1, y1, x2, y2, sheet_f, sheet)
      out.write(map_out)
    out.write(map_foot)
  out.write(html_foot)
print "Done!"
