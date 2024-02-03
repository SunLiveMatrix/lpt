
Extern "windows"

'' Windows DLL template code

'' Add two numbers together and return the result
Public Function Add2 alias "Add2"( ByVal x As Integer, ByVal y As Integer ) As Integer Export
  Return( x + y )
End Function

End Extern
