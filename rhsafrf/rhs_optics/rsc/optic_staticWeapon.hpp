
	class RHS_RscInfoStaticWeapon: RscUnitInfo
	{
		idd = 300;
		controls[] = {"CA_Zeroing"};

		onLoad="['onLoad',_this,'RscUnitInfo','IGUI'] call (uinamespace getvariable 'BIS_fnc_initDisplay');_this call rhs_fnc_ui_staticWeapon"; 	
	};