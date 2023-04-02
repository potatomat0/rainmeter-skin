////////////////////////////////////////Measures

[MeasureCPU1]
Measure=CPU
Processor=1
AverageSize=30
MaxValue=99

[MeasureCPU2]
Measure=CPU
Processor=2
AverageSize=30
MaxValue=99

[MeasureCPU3]
Measure=CPU
Processor=3
AverageSize=30
MaxValue=99

[MeasureCPU4]
Measure=CPU
Processor=4
AverageSize=30
MaxValue=99

[MeasureTemp1]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=0

[MeasureTemp2]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=1

[MeasureTemp3]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=2

[MeasureTemp4]
Measure=Plugin
Plugin=CoreTemp
CoreTempType=Temperature
CoreTempIndex=3

[MeasureRAM]
Measure=PhysicalMemory

[MeasureRAMTotal]
Measure=PhysicalMemory
Total=1

[MeasureSwap]
Measure=SwapMemory

[MeasureSwapTotal]
Measure=SwapMemory
Total=1

[MeasureUpTime]
Measure=UpTime
Format="%4!i! Days, %3!02i!:%2!02i!:%1!02i!"

[MeasureIP]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=http://ip.changeip.com/ip.asp
StringIndex=1
RegExp="(?)(.*)"

[MeasurePing]
Measure=Plugin
Plugin=PingPlugin
DestAddress=www.google.com

////////////////////////////////////////Meters

[MeterTitleCPU]
Meter=String
Text="CPU"
MeterStyle=StyleText1 | StyleSystemPosition

[MeterTitleRAM]
Meter=String
Text="RAM"
MeterStyle=StyleText1
X=0r
Y=40r

[MeterTitleSwap]
Meter=String
Text="Swap"
MeterStyle=StyleText1
X=0r
Y=20r

[MeterTitleUpTime]
Meter=String
Text="Up Time"
MeterStyle=StyleText1
X=0r
Y=20r

[MeterTitleIP]
Meter=String
Text="IP"
MeterStyle=StyleText1
X=0r
Y=20r

[MeterTitlePing]
Meter=String
Text="Ping"
MeterStyle=StyleText1
X=0r
Y=20r

[MeterSerperatorSystem]
Meter=Bar
MeasureName=Measure1
W=1
H=140
X=60r
Y=-120r
BarColor=#Color2#

[MeterCPU1]
Meter=String
MeasureName=MeasureCPU1
MeterStyle=StyleText2
Text="%1%"
X=10r
Y=0r

[MeterCPU2]
Meter=String
MeasureName=MeasureCPU2
MeterStyle=StyleText2
Text="%1%"
X=25r
Y=0r

[MeterCPU3]
Meter=String
MeasureName=MeasureCPU3
MeterStyle=StyleText2
Text="%1%"
X=25r
Y=0r

[MeterCPU4]
Meter=String
MeasureName=MeasureCPU4
MeterStyle=StyleText2
Text="%1%"
X=25r
Y=0r

[MeterTemp1]
Meter=String
MeasureName=MeasureTemp1
MeterStyle=StyleText2
Text="%1°"
X=-75r
Y=20r

[MeterTemp2]
Meter=String
MeasureName=MeasureTemp2
MeterStyle=StyleText2
Text="%1°"
X=25r
Y=0r

[MeterTemp3]
Meter=String
MeasureName=MeasureTemp3
MeterStyle=StyleText2
Text="%1°"
X=25r
Y=0r

[MeterTemp4]
Meter=String
MeasureName=MeasureTemp4
MeterStyle=StyleText2
Text="%1°"
X=25r
Y=0r

[MeterRAM]
Meter=String
MeasureName=MeasureRAM
MeasureName2=MeasureRAMTotal
MeterStyle=StyleText2
X=-75r
Y=20r
AutoScale=1
Text="%1b / %2b"

[MeterSwap]
Meter=String
MeasureName=MeasureSwap
MeasureName2=MeasureSwapTotal
MeterStyle=StyleText2
X=0r
Y=20r
AutoScale=1
Text="%1b / %2b"

[MeterUpTime]
Meter=String
MeasureName=MeasureUpTime
MeterStyle=StyleText2
X=0r
Y=20r

[MeterIP]
Meter=String
MeasureName=MeasureIP
MeterStyle=StyleText2
X=0r
Y=20r

[MeterPing]
Meter=String
MeasureName=MeasurePing
MeterStyle=StyleText2
X=0r
Y=20r
Text="%1 ms"