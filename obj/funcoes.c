/*
 * xHarbour 1.2.3 Intl. (SimpLex) (Build 20130117)
 * Generated C source code from <D:\\dismembrador\\prg\\funcoes.prg>
 * Command: D:\dismembrador\prg\funcoes.prg /q /oD:\dismembrador\obj\funcoes.c /M /N 
 * Created: 2016.01.04 10:27:04 (Borland C++ 5.8.2 (32 bit))
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "D:\\dismembrador\\prg\\funcoes.prg"

/* Forward declarations of all PRG defined Functions. */
HB_FUNC( CONFIRME );

/* Forward declarations of all externally defined Functions. */
/* Skipped DEFERRED call to: 'DIVERTCONSTRUCTORCALL' */
HB_FUNC_EXTERN( GETPROCADD );
HB_FUNC_EXTERN( TACTIVEX );
HB_FUNC_EXTERN( ERRORSYS );
HB_FUNC_EXTERN( MSGYESNO );
HB_FUNC_EXTERN( MSGNOYES );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 10

#include "hbapi.h"

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_FUNCOES )
{ "DIVERTCONSTRUCTORCALL", {HB_FS_PUBLIC | HB_FS_DEFERRED}, {NULL}, NULL },
{ "GETPROCADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETPROCADD )}, NULL },
{ "TACTIVEX", {HB_FS_PUBLIC}, {HB_FUNCNAME( TACTIVEX )}, NULL },
{ "ERRORSYS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "CONFIRME", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CONFIRME )}, &ModuleFakeDyn },
{ "MSGYESNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGYESNO )}, NULL },
{ "MSGNOYES", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGNOYES )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_FUNCOES )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_FUNCOES
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_FUNCOES )
   #include "hbiniseg.h"
#endif

HB_FUNC( CONFIRME )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_PUSHLOCALNEAR, 2,	/* LFOCO */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00015) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00017) */
	HB_P_PUSHLOCALNEAR, 2,	/* LFOCO */
	HB_P_POPLOCALNEAR, 2,	/* LFOCO */
/* 00019 */ HB_P_LINEOFFSET, 1,	/* 8 */
	HB_P_PUSHLOCALNEAR, 1,	/* CTEXTO */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00041) */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', '?', 0, 
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 00043) */
	HB_P_PUSHLOCALNEAR, 1,	/* CTEXTO */
	HB_P_POPLOCALNEAR, 1,	/* CTEXTO */
/* 00045 */ HB_P_LINEOFFSET, 2,	/* 9 */
	HB_P_PUSHLOCALNEAR, 2,	/* LFOCO */
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 00080) */
/* 00051 */ HB_P_LINEOFFSET, 3,	/* 10 */
	HB_P_PUSHSYMNEAR, 5,	/* MSGYESNO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CTEXTO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'e', 's', 'b', 'r', 'a', 'v', 'a', 'd', 'o', 'r', 'e', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* LRETO */
	HB_P_JUMPNEAR, 29,	/* 29 (abs: 00107) */
/* 00080 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_PUSHSYMNEAR, 6,	/* MSGNOYES */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CTEXTO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'e', 's', 'b', 'r', 'a', 'v', 'a', 'd', 'o', 'r', 'e', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* LRETO */
/* 00107 */ HB_P_LINEOFFSET, 7,	/* 14 */
	HB_P_PUSHLOCALNEAR, 3,	/* LRETO */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00113 */
   };

   hb_vmExecute( pcode, symbols );
}

