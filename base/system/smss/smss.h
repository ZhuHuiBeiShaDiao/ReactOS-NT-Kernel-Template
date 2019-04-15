/*
 * PROJECT:         ReactOS Windows-Compatible Session Manager
 * LICENSE:         BSD 2-Clause License
 * FILE:            base/system/smss/smss.h
 * PURPOSE:         Main SMSS Header
 * PROGRAMMERS:     Alex Ionescu
 */

/* DEPENDENCIES ***************************************************************/
#ifndef _SM_
#define _SM_

#include <stdio.h>

/* Native Headers */
#define WIN32_NO_STATUS
#include <windef.h>
#include <winbase.h>
#include <winreg.h>

#define NTOS_MODE_USER
#include <ndk/iofuncs.h>
#include <ndk/obfuncs.h>
#include <ndk/rtlfuncs.h>
#include <ndk/cmfuncs.h>
#include <ndk/exfuncs.h>
#include <ndk/mmfuncs.h>
#include <ndk/psfuncs.h>
#include <ndk/lpcfuncs.h>
#include <ndk/setypes.h>
#include <ndk/umfuncs.h>
#include <ndk/kefuncs.h>

/* SM Protocol Header */
#include <sm/smmsg.h>

/* DEFINES ********************************************************************/

#define SMP_DEBUG_FLAG      0x01
#define SMP_ASYNC_FLAG      0x02
#define SMP_AUTOCHK_FLAG    0x04
#define SMP_SUBSYSTEM_FLAG  0x08
#define SMP_INVALID_PATH    0x10
#define SMP_DEFERRED_FLAG   0x20
#define SMP_POSIX_FLAG      0x100
#define SMP_OS2_FLAG        0x200

#endif /* _SM_ */
