////////////////////////////////////////Measures

[MeasureBinFiles]
Measure=Plugin
Plugin=RecycleManager.dll
RecycleType=COUNT
Drives=ALL

[MeasureBinSize]
Measure=Plugin
Plugin=RecycleManager.dll
RecycleType=SIZE
Drives=ALL


////////////////////////////////////////Meters

[MeterTitleTrash]
Meter=String
Text="Trash"
MeterStyle=StyleText1 | StyleTrashPosition

[MeterBinFiles]
Meter= String
MeasureName=MeasureBinFiles
Text="Files: %1"
MeterStyle=StyleText2
X=10r
Y=20r

[MeterBinSize]
Meter=String
MeasureName=MeasureBinSize
AutoScale=1
Text="Size: %1b"
MeterStyle=StyleText2
X=0r
Y=20r

[MeterOpenBin]
Meter=Button
ButtonImage=#@#Folder.png
W=18
H=18
X=120r
Y=-40r
LeftMouseUpAction=[!PluginBang "MeasureBinSize OpenBin"]
ToolTipText="Open Recycle Bin"

[MeterEmptyBin]
Meter=Button
ButtonImage=#@#Bin.png
W=18
H=18
X=20r
Y=0r
LeftMouseUpAction=[!PluginBang "MeasureBinSize EmptyBin"]
ToolTipText="Empty Recycle Bin"