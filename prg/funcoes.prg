#Include "Dismembrador.ch"

********************************************************************************
Function Confirme(cTexto, lFoco)
********************************************************************************
Local lReto
lFoco  := iif(lFoco =NIL,.T.,lFoco)
cTexto := iif(cTexto=NIL, "Confirma?", cTexto)
if lFoco
	lReto := MsgYesNo(cTexto, APP_NAME)
else
   lReto := MsgnOYes(cTexto, APP_NAME)
endif               
Return(lReto)
