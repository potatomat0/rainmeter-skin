////////////////////////////////////////Measures

[MeasureToDo]
Measure=Plugin
Plugin=Plugins\QuotePlugin.dll
PathName=#@#ToDo.txt
Separator=¶


////////////////////////////////////////Meters

[MeterTitleToDo]
Meter=String
Text="To Do"
MeterStyle=StyleText1 | StyleToDoPosition

[MeterToDoIcon]
Meter=Button
ButtonImage=#@#EditNotes.png
X=150r
Y=0r
W=18
H=18
LeftMouseUpAction=["#@#ToDo.txt"]
ToolTipText="Edit To Do"

[MeterToDo]
Meter=STRING
MeasureName=MeasureToDo
MeterStyle=StyleText2
X=-140r
Y=20r
W=165
H=200
ClipString=1
SolidColor=255,255,255,0