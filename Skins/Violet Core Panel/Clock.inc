////////////////////////////////////////Measures

[MeasureTime]
Measure=Time
Format=%I:%M:%S

[MeasureAMPM]
Measure=Time
Format=%p

[ClockFace]
Measure=Calc
Formula=1

[MeasureDate]
Measure=Time
Format=%d %B %Y

[MeasureDay]
Measure=Time
Format=%A

[MeasureTimeH]
Measure=Time
Format=%I
MaxValue=12
MinValue=0

[MeasureTimeM]
Measure=Time
Format=%M
MaxValue=60
MinValue=0

[MeasureTimeS]
Measure=Time
Format=%S
MaxValue=60
MinValue=0


////////////////////////////////////////Meters

[MeterDigitalTime]
Meter=String
MeasureName=MeasureTime
MeterStyle=StyleText1 | StyleClockPosition

[MeterAMPM]
Meter=String
MeasureName=MeasureAMPM
MeterStyle=StyleText1
X=50r
Y=0r

[MeterClockFaceImg]
Meter=Image
ImageName=ClockFace.png
Path=#@#
X=-170r
Y=-25r

[MeterClockHandHour]
Meter=Roundline
MeasureName=MeasureTimeH
X=54r
Y=54r
AntiAlias=1
LineLength=30
LineColor=180,180,180,255
StartAngle=4.712
RotationAngle=6.283
LineStart=0
LineWidth=3

[MeterClockHandMin]
Meter=Roundline
MeasureName=MeasureTimeM
X=0r
Y=0r
AntiAlias=1
LineLength=40
LineColor=220,220,220,255
StartAngle=4.712
RotationAngle=6.283
LineStart=0
LineWidth=2

[MeterClockHandSec]
Meter=Roundline
MeasureName=MeasureTimeS
X=0r
Y=0r
AntiAlias=1
LineLength=45
LineColor=#Color2#
StartAngle=4.712
RotationAngle=6.283
LineStart=0
LineWidth=1

[MeterClockFaceDot]
Meter=Roundline
MeasureName=ClockFace
LineLength=3
LineColor=60,60,60,255
StartAngle=4.712
RotationAngle=6.283
LineStart=0
Solid=1
X=0r
Y=0r
AntiAlias=1

[MeterDay]
Meter=String
MeasureName=MeasureDay
MeterStyle=StyleText1
X=67r
Y=-10r

[MeterDate]
Meter=String
MeasureName=MeasureDate
MeterStyle=StyleText1
X=0r
Y=18r