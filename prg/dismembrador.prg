#Include "Dismembrador.ch"

********************************************************************************
Function dismembrador()
********************************************************************************
Define Window oWnd title "Desbravadores" // Menu MontarMenu()

	Define RibbonBar oRibbon Window oWnd Prompt "Manutenção", "Relatórios" Height 133 TopMargin 25

	Add Group oGr1 Ribbon oRibbon to Option 1 Prompt "Cadastros" Width 150
	
	Add Group oGr2 Ribbon oRibbon to Option 1 Prompt "Lançamentos" Width 150
	
	Add Group oGr3 Ribbon oRibbon to Option 1 Prompt "Utilitários" Width 130

   @ 02, 05 ADD BUTTON oBtn11 Prompt "Unidade" ;
	    Bitmap "bitmaps\PASTE32.BMP";
		 Group oGr1 Action ( .t. ) ;
		 Size 60, 80 ;
		 Round

   @ 02, 65 ADD BUTTON oBtn12 Prompt "Desbravador" ;
		 Bitmap "bitmaps\cut16.BMP" ;
		 Group oGr1 ;
		 Action ( .t. ) ;
		 Size 80, 80 ;
		 Round

	@ 02, 05 ADD BUTTON oBtn31 Prompt "Usuários" ;
	    Bitmap "bitmaps\32x32\users.bmp" ;
		 Group oGr3 ;
		 Action ( iif(Confirme("Sair do sistema?"),__Quit(),.T.) ) ;
		 Size 60, 80 ;
		 Round

	@ 02, 65 ADD BUTTON oBtn32 Prompt "Sair" ;
	    Bitmap "bitmaps\32x32\quit.bmp" ;
		 Group oGr3 ;
		 Action ( iif(Confirme("Sair do sistema?"),__Quit(),.T.) ) ;
		 Size 60, 80 ;
		 Round

	Set Message of oWnd to "" Centered Clock Keyboard 2007

Activate Window oWnd Maximized

Return(.T.)
