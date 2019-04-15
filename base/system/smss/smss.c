/*
 * PROJECT:         ReactOS Windows-Compatible Session Manager
 * LICENSE:         BSD 2-Clause License
 * FILE:            base/system/smss/smss.c
 * PURPOSE:         Main SMSS Code
 * PROGRAMMERS:     Alex Ionescu
 */

/* INCLUDES *******************************************************************/

#include "smss.h"

#include <pseh/pseh2.h>

#define NDEBUG
#include <debug.h>

/* FUNCTIONS ******************************************************************/

static INT
PrintString(char* fmt,...)
{
    INT Len;
    char buffer[512];
    va_list ap;
    UNICODE_STRING UnicodeString;
    ANSI_STRING AnsiString;

    va_start(ap, fmt);
    Len = vsprintf(buffer, fmt, ap);
    va_end(ap);

    RtlInitAnsiString(&AnsiString, buffer);
    RtlAnsiStringToUnicodeString(&UnicodeString,
                                 &AnsiString,
                                 TRUE);
    NtDisplayString(&UnicodeString);
    RtlFreeUnicodeString(&UnicodeString);

    return Len;
}

INT
__cdecl
_main(IN INT argc,
      IN PCHAR argv[],
      IN PCHAR envp[],
      IN ULONG DebugFlag)
{
    PrintString("TinyROS Started");
	while(TRUE) { }
    return 0;
}

/* EOF */
