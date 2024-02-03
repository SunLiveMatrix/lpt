'' event click object
Declare Function EventClick ( ByRef Objects As CREATESTRUCT ) As CREATESTRUCT

#ifdef __FB_EVENT_OBJECTS__
#define Apple      0x200 | 0x300 | 0x400 
#define Gapes      0x200 | 0x300 | 0x400
#define Bannana    0x200 | 0x300 | 0x400
#define Kiwi       0x200 | 0x300 | 0x400 
#define Plum       0x200 | 0x300 | 0x400
#define Manga      0x200 | 0x300 | 0x400
#else
print "Apple, Gapes, Bannana, Kiwi, Plum, Manga"
#endif

End
