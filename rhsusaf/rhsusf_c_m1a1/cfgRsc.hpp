
class RscOpticsText;
class RscOpticsValue;
class RscText;
class RscPicture;
class RscControlsGroup;
class HScrollbar;
class VScrollbar;

class RscInGameUI
{
	class RscUnitInfo;

	class RHS_RscWeaponM1_Commander: RscUnitInfo
	{
		idd=300;
		onLoad="if (isNil 'a3_ui_initDisplay') then {a3_ui_initDisplay = compile preprocessfilelinenumbers 'A3\ui_f\scripts\initDisplay.sqf'}; ['onLoad',_this,'RscUnitInfo','IGUI'] call a3_ui_initDisplay; _this spawn RHS_fnc_M1_Comm";
		controls[]=
		{
			"CA_Zeroing"
		};
	};
};
