[mDateFormat]
Measure=String
String=#dateformat#
IfMatch=short
IfMatchAction=[!WriteKeyValue Variables Format "%a, %b %d" "#@#variables.ini" ]
IfMatch2=short day
IfMatchAction2=[!WriteKeyValue Variables Format "%a, %B %d" "#@#variables.ini" ]
IfMatch3=short month
IfMatchAction3=[!WriteKeyValue Variables Format "%A, %b %d" "#@#variables.ini" ]
IfMatch4=large
IfMatchAction4=[!WriteKeyValue Variables Format "%A, %B %d" "#@#variables.ini" ]
IfMatch5=ES_large
IfMatchAction5=[!WriteKeyValue Variables Format "%A, %d #pre# %B" "#@#variables.ini" ]
DynamicVariables=1
UpdateDivider=-1

[mCaseText]
Measure=String
String=#upperdate#
IfMatch=0
IfMatchAction=[!WriteKeyValue Variables datecase "Lower" "#@#variables.ini" ]
IfMatch2=1
IfMatchAction2=[!WriteKeyValue Variables datecase "Upper" "#@#variables.ini" ]
DynamicVariables=1
UpdateDivider=-1