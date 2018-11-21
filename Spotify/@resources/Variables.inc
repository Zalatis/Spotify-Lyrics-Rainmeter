[Variables]
Alpha=0.8
Color=255,255,255
FST=1
PActive=0
MCActive=0
xSL=1
VMT=0
ON=255,255,255
OFF=160,160,160
ONOFF=160,160,160
U=[!UpdateMeasure MeasureSlideBetween][!UpdateMeter *][!Redraw]
PicOffSet=0
WPOffSet=170
LAYOUTS=#PROGRAMPATH#Layouts\
GM=1
IconAlpha=170
EFFECTOFF=[!SetOption "#CURRENTSECTION#" ImageTint "200,200,200"][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
EFFECTON=[!SetOption "#CURRENTSECTION#" ImageAlpha 255][!UpdateMeter "#CURRENTSECTION#"][!Redraw]
;FST = 0.01 a skin esta no modo auto-hide. FST = 1 a skin esta no modo normal.
