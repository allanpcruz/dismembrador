/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20130117)
 * Generated C source code from <D:\\dismembrador\\prg\\dismembrador.prg>
 * Command: D:\dismembrador\prg\dismembrador.prg /q /oD:\dismembrador\obj\dismembrador.c /M /N 
 * Created: 2016.01.04 13:03:45 (Borland C++ 5.8.2 (32 bit))
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "D:\\dismembrador\\prg\\dismembrador.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( DISMEMBRADOR );

/* Forward declarations of all externally defined Functions. */
/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( GETPROCADD );
HB_FUNC_EXTERN( TACTIVEX );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_EXTERN( TWINDOW );
HB_FUNC_EXTERN( TRIBBONBAR );
HB_FUNC_EXTERN( CONFIRME );
HB_FUNC_EXTERN( __QUIT );
HB_FUNC_EXTERN( TMSGBAR );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_DISMEMBRADOR )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "GETPROCADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETPROCADD )}, NULL },
{ "TACTIVEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TACTIVEX )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "DISMEMBRADOR", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( DISMEMBRADOR )}, &ModuleFakeDyn },
{ "NEW", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( TWINDOW )}, NULL },
{ "OWND", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TRIBBONBAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRIBBONBAR )}, NULL },
{ "ORIBBON", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDGROUP", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OGR1", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OGR2", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OGR3", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ADDBUTTON", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OBTN11", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OBTN12", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "CONFIRME", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONFIRME )}, NULL },
{ "__QUIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __QUIT )}, NULL },
{ "OBTN31", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "OBTN32", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "_OMSGBAR", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "TMSGBAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( TMSGBAR )}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BLCLICKED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BRCLICKED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BMOVED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BRESIZED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BPAINTED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BKEYDOWN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BINIT", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BLBUTTONUP", {HB_FS_PUBLIC}, {NULL}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_DISMEMBRADOR )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_DISMEMBRADOR
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_DISMEMBRADOR )
   #include "hbiniseg.h"
#endif

HB_FUNC( DISMEMBRADOR )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_MESSAGE, 5, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 6,	/* TWINDOW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'e', 's', 'b', 'r', 'a', 'v', 'a', 'd', 'o', 'r', 'e', 's', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_TRUE,
	HB_P_TRUE,
	HB_P_TRUE,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'W', 'n', 'd', 0, 
	HB_P_SENDSHORT, 23,
	HB_P_POPVARIABLE, 7, 0,	/* OWND */
/* 00060 */ HB_P_LINEOFFSET, 2,	/* 8 */
	HB_P_MESSAGE, 5, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 8,	/* TRIBBONBAR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 7, 0,	/* OWND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'M', 'a', 'n', 'u', 't', 'e', 'n', 231, 227, 'o', 0, 
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'R', 'e', 'l', 'a', 't', 243, 'r', 'i', 'o', 's', 0, 
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHINT, 133, 0,	/* 133 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 18,
	HB_P_POPVARIABLE, 9, 0,	/* ORIBBON */
/* 00126 */ HB_P_LINEOFFSET, 4,	/* 10 */
	HB_P_MESSAGE, 10, 0,	/* ADDGROUP */
	HB_P_PUSHVARIABLE, 9, 0,	/* ORIBBON */
	HB_P_PUSHINT, 150, 0,	/* 150 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'a', 'd', 'a', 's', 't', 'r', 'o', 's', 0, 
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 6,
	HB_P_POPVARIABLE, 11, 0,	/* OGR1 */
/* 00158 */ HB_P_LINEOFFSET, 6,	/* 12 */
	HB_P_MESSAGE, 10, 0,	/* ADDGROUP */
	HB_P_PUSHVARIABLE, 9, 0,	/* ORIBBON */
	HB_P_PUSHINT, 150, 0,	/* 150 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'L', 'a', 'n', 231, 'a', 'm', 'e', 'n', 't', 'o', 's', 0, 
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 6,
	HB_P_POPVARIABLE, 12, 0,	/* OGR2 */
/* 00192 */ HB_P_LINEOFFSET, 8,	/* 14 */
	HB_P_MESSAGE, 10, 0,	/* ADDGROUP */
	HB_P_PUSHVARIABLE, 9, 0,	/* ORIBBON */
	HB_P_PUSHINT, 130, 0,	/* 130 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'U', 't', 'i', 'l', 'i', 't', 225, 'r', 'i', 'o', 's', 0, 
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 6,
	HB_P_POPVARIABLE, 13, 0,	/* OGR3 */
/* 00226 */ HB_P_LINEOFFSET, 14,	/* 20 */
	HB_P_MESSAGE, 14, 0,	/* ADDBUTTON */
	HB_P_PUSHVARIABLE, 11, 0,	/* OGR1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'U', 'n', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHBLOCK, 9, 0,	/* 9 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'b', 'i', 't', 'm', 'a', 'p', 's', 92, 'P', 'A', 'S', 'T', 'E', '3', '2', '.', 'B', 'M', 'P', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPVARIABLE, 15, 0,	/* OBTN11 */
/* 00303 */ HB_P_LINEOFFSET, 21,	/* 27 */
	HB_P_MESSAGE, 14, 0,	/* ADDBUTTON */
	HB_P_PUSHVARIABLE, 11, 0,	/* OGR1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'D', 'e', 's', 'b', 'r', 'a', 'v', 'a', 'd', 'o', 'r', 0, 
	HB_P_PUSHBLOCK, 9, 0,	/* 9 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'b', 'i', 't', 'm', 'a', 'p', 's', 92, 'c', 'u', 't', '1', '6', '.', 'B', 'M', 'P', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPVARIABLE, 16, 0,	/* OBTN12 */
/* 00382 */ HB_P_LINEOFFSET, 28,	/* 34 */
	HB_P_MESSAGE, 14, 0,	/* ADDBUTTON */
	HB_P_PUSHVARIABLE, 13, 0,	/* OGR3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'U', 's', 'u', 225, 'r', 'i', 'o', 's', 0, 
	HB_P_PUSHBLOCK, 42, 0,	/* 42 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 17,	/* CONFIRME */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'a', 'i', 'r', ' ', 'd', 'o', ' ', 's', 'i', 's', 't', 'e', 'm', 'a', '?', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00449) */
	HB_P_PUSHSYMNEAR, 18,	/* __QUIT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00450) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'b', 'i', 't', 'm', 'a', 'p', 's', 92, '3', '2', 'x', '3', '2', 92, 'u', 's', 'e', 'r', 's', '.', 'b', 'm', 'p', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPVARIABLE, 19, 0,	/* OBTN31 */
/* 00497 */ HB_P_LINEOFFSET, 35,	/* 41 */
	HB_P_MESSAGE, 14, 0,	/* ADDBUTTON */
	HB_P_PUSHVARIABLE, 13, 0,	/* OGR3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'S', 'a', 'i', 'r', 0, 
	HB_P_PUSHBLOCK, 42, 0,	/* 42 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 17,	/* CONFIRME */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'a', 'i', 'r', ' ', 'd', 'o', ' ', 's', 'i', 's', 't', 'e', 'm', 'a', '?', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00560) */
	HB_P_PUSHSYMNEAR, 18,	/* __QUIT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00561) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'b', 'i', 't', 'm', 'a', 'p', 's', 92, '3', '2', 'x', '3', '2', 92, 'q', 'u', 'i', 't', '.', 'b', 'm', 'p', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 22,
	HB_P_POPVARIABLE, 20, 0,	/* OBTN32 */
/* 00607 */ HB_P_LINEOFFSET, 37,	/* 43 */
	HB_P_MESSAGE, 21, 0,	/* _OMSGBAR */
	HB_P_PUSHVARIABLE, 7, 0,	/* OWND */
	HB_P_MESSAGE, 5, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 22,	/* TMSGBAR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 7, 0,	/* OWND */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_TRUE,
	HB_P_TRUE,
	HB_P_FALSE,
	HB_P_TRUE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_FALSE,
	HB_P_SENDSHORT, 12,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00644 */ HB_P_LINEOFFSET, 39,	/* 45 */
	HB_P_MESSAGE, 23, 0,	/* ACTIVATE */
	HB_P_PUSHVARIABLE, 7, 0,	/* OWND */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'M', 'A', 'X', 'I', 'M', 'I', 'Z', 'E', 'D', 0, 
	HB_P_MESSAGE, 24, 0,	/* BLCLICKED */
	HB_P_PUSHVARIABLE, 7, 0,	/* OWND */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 25, 0,	/* BRCLICKED */
	HB_P_PUSHVARIABLE, 7, 0,	/* OWND */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 26, 0,	/* BMOVED */
	HB_P_PUSHVARIABLE, 7, 0,	/* OWND */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 27, 0,	/* BRESIZED */
	HB_P_PUSHVARIABLE, 7, 0,	/* OWND */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 28, 0,	/* BPAINTED */
	HB_P_PUSHVARIABLE, 7, 0,	/* OWND */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 29, 0,	/* BKEYDOWN */
	HB_P_PUSHVARIABLE, 7, 0,	/* OWND */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 30, 0,	/* BINIT */
	HB_P_PUSHVARIABLE, 7, 0,	/* OWND */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 31, 0,	/* BLBUTTONUP */
	HB_P_PUSHVARIABLE, 7, 0,	/* OWND */
	HB_P_SENDSHORT, 0,
	HB_P_SENDSHORT, 19,
	HB_P_POP,
/* 00741 */ HB_P_LINEOFFSET, 41,	/* 47 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00746 */
   };

   hb_vmExecute( pcode, symbols );
}

