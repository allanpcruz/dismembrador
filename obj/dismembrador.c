/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20130117)
 * Generated C source code from <D:\\dismembrador\\prg\\dismembrador.000>
 * Command: D:\dismembrador\prg\dismembrador.000 /q /oD:\dismembrador\obj\dismembrador.c /M /N 
 * Created: 2016.01.03 15:13:02 (Borland C++ 5.8.2 (32 bit))
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "D:\\dismembrador\\prg\\dismembrador.000"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( DISMEMBRADOR );

/* Forward declarations of all externally defined Functions. */
/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( GETPROCADD );
HB_FUNC_EXTERN( TACTIVEX );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_EXTERN( TDIALOG );

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
{ "TDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDIALOG )}, NULL },
{ "ODLG", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BLCLICKED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BMOVED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BPAINTED", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "BRCLICKED", {HB_FS_PUBLIC}, {NULL}, NULL }
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
	HB_P_PUSHSYMNEAR, 6,	/* TDIALOG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 21,
	HB_P_POPVARIABLE, 7, 0,	/* ODLG */
/* 00037 */ HB_P_LINEOFFSET, 2,	/* 8 */
	HB_P_MESSAGE, 8, 0,	/* ACTIVATE */
	HB_P_PUSHVARIABLE, 7, 0,	/* ODLG */
	HB_P_MESSAGE, 9, 0,	/* BLCLICKED */
	HB_P_PUSHVARIABLE, 7, 0,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 10, 0,	/* BMOVED */
	HB_P_PUSHVARIABLE, 7, 0,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_MESSAGE, 11, 0,	/* BPAINTED */
	HB_P_PUSHVARIABLE, 7, 0,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_FALSE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 12, 0,	/* BRCLICKED */
	HB_P_PUSHVARIABLE, 7, 0,	/* ODLG */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_SENDSHORT, 11,
	HB_P_POP,
/* 00087 */ HB_P_LINEOFFSET, 5,	/* 11 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00092 */
   };

   hb_vmExecute( pcode, symbols );
}

