@ECHO OFF
REM Gerado pela xDev Studio v0.70 as 03/01/2016 @ 15:07:51
REM Compilador .: xHB build 1.2.3 (SimpLex) & FW 13.04
REM Destino ....: D:\dismembrador\dismembrador.EXE
REM Perfil .....: Batch file (Relative Paths)

REM **************************************************************************
REM * Setamos abaixo os PATHs necessarios para o correto funcionamento deste *
REM * script. Se voce for executa-lo em  outra CPU, analise as proximas tres *
REM * linhas abaixo para refletirem as corretas configuracoes de sua maquina *
REM **************************************************************************
 SET PATH=D:\Programa\xharbour\bin;D:\Programa\bcc\Bin;C:\WINDOWS\system32;C:\WINDOWS;C:\WINDOWS\System32\Wbem;C:\WINDOWS\System32\WindowsPowerShell\v1.0\
 SET INCLUDE=D:\Programa\xharbour\include;D:\Programa\bcc\include;;
 SET LIB=D:\Programa\xharbour\lib;D:\Programa\bcc\lib;D:\Programa\bcc\lib\psdk;;

REM - FiveWin.xCompiler.prg(77) @ 15:07:51:268
ECHO .ÿ
ECHO * (1/3) Compilando dismembrador.prg
 harbour.exe ".\prg\dismembrador.prg" /q /o".\obj\dismembrador.c"   /M  /N 
 IF ERRORLEVEL 1 GOTO FIM

REM - FiveWin.xCompiler.prg(112) @ 15:07:51:420
 echo -I"D:\Programa\xharbour\include;D:\Programa\bcc\include;;" > "b32.bc"
 echo -L"D:\Programa\xharbour\lib;D:\Programa\bcc\lib;D:\Programa\bcc\lib\psdk;;;;;" >> "b32.bc"
 echo -o".\obj\dismembrador.obj" >> "b32.bc"
 echo ".\obj\dismembrador.c" >> "b32.bc"

REM - FiveWin.xCompiler.prg(113) @ 15:07:51:420
ECHO .ÿ
ECHO * (2/3) Compilando dismembrador.c
 BCC32 -M -c @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

REM - FiveWin.xCompiler.prg(245) @ 15:07:51:576
 echo -I"D:\Programa\xharbour\include;D:\Programa\bcc\include;;" + > "b32.bc"
 echo -L"D:\Programa\xharbour\lib;D:\Programa\bcc\lib;D:\Programa\bcc\lib\psdk;;;;;" + >> "b32.bc"
 echo -aa + >> "b32.bc"
 echo -Gn -Tpe -s + >> "b32.bc"
 echo c0w32.obj +     >> "b32.bc"
 echo ".\obj\dismembrador.obj", +  >> "b32.bc"
 echo ".\dismembrador.EXE", +    >> "b32.bc"
 echo ".\dismembrador.map", +    >> "b32.bc"
 echo FiveHx.lib FiveHC.lib + >> "b32.bc"
 echo rtl.lib +       >> "b32.bc"
 echo vm.lib +        >> "b32.bc"
 echo gtgui.lib +  >> "b32.bc"
 echo lang.lib +      >> "b32.bc"
 echo macro.lib +     >> "b32.bc"
 echo rdd.lib +       >> "b32.bc"
 echo codepage.lib +  >> "b32.bc"
 echo dbfntx.lib +    >> "b32.bc"
 echo dbffpt.lib +    >> "b32.bc"
 echo hbsix.lib +     >> "b32.bc"
 echo common.lib +    >> "b32.bc"
 echo pp.lib +        >> "b32.bc"
 echo "D:\Programa\xharbour\lib\pcrepos.lib" +   >> "b32.bc"
 echo "D:\Programa\xharbour\lib\ct.lib" +   >> "b32.bc"
 echo "D:\Programa\bcc\Lib\PSDK\psapi.lib" +   >> "b32.bc"
 echo "D:\Programa\xharbour\lib\png.lib" +   >> "b32.bc"
 echo "D:\Programa\xharbour\lib\hbzip.lib" +   >> "b32.bc"
 echo "D:\Programa\xharbour\lib\zlib.lib" +   >> "b32.bc"
 echo cw32.lib +      >> "b32.bc"
 echo import32.lib +  >> "b32.bc"
 echo nddeapi.lib + >> "b32.bc"
 echo iphlpapi.lib + >> "b32.bc"
 echo rasapi32.lib + >> "b32.bc"
 echo , >> "b32.bc"

REM - FiveWin.xCompiler.prg(246) @ 15:07:51:585
ECHO .ÿ
ECHO * (3/3) Linkando dismembrador.EXE
 ILINK32 @B32.BC
 IF ERRORLEVEL 1 GOTO FIM

:FIM
 ECHO Fim do script de compilacao!
