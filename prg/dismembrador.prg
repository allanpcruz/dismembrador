#include "Fivewin.Ch"

********************************************************************************
Function dismembrador()
********************************************************************************
Define Window oWnd title "Desbravadores" Menu MontarMenu()

Activate Window oWnd Maximized

Return(.T.)

********************************************************************************
Function MontarMenu()
********************************************************************************
Local oMenu, oItem

Menu oMenu
     MenuItem "Manuten��o" 
					Menu
						MenuItem "Cadastro"
						MenuItem "Lan�amentos"
					EndMenu

     MenuItem "Relat�rios" 

     MenuItem "Sobre" 
     
     MenuItem "Sair"

EndMenu


Return oMenu