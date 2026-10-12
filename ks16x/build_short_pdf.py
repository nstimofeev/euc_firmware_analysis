#!/usr/bin/env python3
"""Render the brief shareable Russian changelog. Requires reportlab + DejaVu Sans."""
from pathlib import Path
from xml.sax.saxutils import escape

from reportlab.lib import colors
from reportlab.lib.enums import TA_LEFT
from reportlab.lib.pagesizes import A5
from reportlab.lib.styles import ParagraphStyle
from reportlab.pdfbase import pdfmetrics
from reportlab.pdfbase.ttfonts import TTFont
from reportlab.platypus import SimpleDocTemplate, Paragraph, Spacer, HRFlowable

ROOT = Path(__file__).resolve().parents[1]
FONT_DIR = Path('/usr/share/fonts/truetype/dejavu')
pdfmetrics.registerFont(TTFont('DV', str(FONT_DIR / 'DejaVuSans.ttf')))
pdfmetrics.registerFont(TTFont('DV-Bold', str(FONT_DIR / 'DejaVuSans-Bold.ttf')))
pdfmetrics.registerFontFamily('DV', normal='DV', bold='DV-Bold')

styles = {
    'title': ParagraphStyle('title', fontName='DV-Bold', fontSize=21, leading=27,
                            textColor=colors.HexColor('#15314a'), spaceAfter=4),
    'subtitle': ParagraphStyle('subtitle', fontName='DV', fontSize=13, leading=19,
                               textColor=colors.HexColor('#4b6175'), spaceAfter=17),
    'section': ParagraphStyle('section', fontName='DV-Bold', fontSize=13, leading=19,
                              textColor=colors.HexColor('#15314a'), spaceBefore=13, spaceAfter=5),
    'body': ParagraphStyle('body', fontName='DV', fontSize=11.5, leading=17,
                           textColor=colors.HexColor('#202c36'), spaceAfter=6),
    'footer': ParagraphStyle('footer', fontName='DV', fontSize=8.5, leading=12,
                             textColor=colors.HexColor('#62717f'), spaceBefore=9),
}


def main():
    source = ROOT / 'ks16x/CHANGELOG_SHORT_RU.md'
    target = ROOT / 'output/pdf/KS16X-changelog.pdf'
    target.parent.mkdir(parents=True, exist_ok=True)
    flow = []
    footer = False
    for line in source.read_text().splitlines():
        if not line:
            continue
        if line.startswith('# '):
            title, subtitle = line[2:].split(': ', 1)
            flow.extend([Paragraph(escape(title), styles['title']),
                         Paragraph(escape(subtitle.capitalize()), styles['subtitle']),
                         HRFlowable(width='100%', thickness=1, color=colors.HexColor('#d2dfe9'))])
        elif line.startswith('## '):
            flow.append(Paragraph(escape(line[3:]), styles['section']))
        elif line == '---':
            footer = True
            flow.extend([Spacer(1, 10), HRFlowable(width='100%', thickness=0.6, color=colors.HexColor('#d2dfe9'))])
        elif line.startswith('- '):
            flow.append(Paragraph(escape(line[2:]), styles['body'], bulletText='•'))
        else:
            flow.append(Paragraph(escape(line), styles['footer' if footer else 'body']))
    doc = SimpleDocTemplate(str(target), pagesize=A5, leftMargin=38, rightMargin=38,
                            topMargin=32, bottomMargin=30, title='KingSong 16X: краткий чейнджлог',
                            author='euc_firmware_analysis', pageCompression=1)
    doc.build(flow)
    print(target)


if __name__ == '__main__':
    main()
