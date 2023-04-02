////////////////////////////////////////Measures

[MeasureNotes]
Measure=Plugin
Plugin=Plugins\QuotePlugin.dll
PathName=#@#Notes.txt
Separator=¶


////////////////////////////////////////Meters

[MeterTitleNote]
Meter=String
Text="Notes"
MeterStyle=StyleText1 | StyleNotesPosition

[MeterNotesIcon]
Meter=Button
ButtonImage=#@#EditNotes.png
X=150r
Y=0r
W=18
H=18
LeftMouseUpAction=["#@#Notes.txt"]
ToolTipText="Edit Notes"

[MeterNotes]
Meter=STRING
MeasureName=MeasureNotes
MeterStyle=StyleText2
X=-140r
Y=20r
W=165
H=200
ClipString=1
SolidColor=255,255,255,0