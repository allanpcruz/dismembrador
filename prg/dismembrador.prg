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
     MenuItem "Manutenção" 
					Menu
						MenuItem "Cadastro"
						MenuItem "Lançamentos"
					EndMenu

     MenuItem "Relatórios" 

     MenuItem "Sobre" 
     
     MenuItem "Sair"

EndMenu


Return oMenu