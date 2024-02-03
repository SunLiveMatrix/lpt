'' cookies stores
Declare Function CookieStore ( ByRef Cookies As CREATESTRUCT, ByRef Store As CREATESTRUCT ) As CREATESTRUCT

Type Cookies Alias "Cookies"
     Supply as CREATESTRUCT
     Policy as CREATESTRUCT
     Accept as CREATESTRUCT
End Type

If Cookies = "Cookies" Then
   do
      print Cookies
   loop
else
   print "Cookies"
End If

End
