#define ADDON_PATH rhsusf\addons\rhsusf_c_m11xx\scripts

class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions 
		{
			class m11xx_init { file = ADDON_PATH\rhs_m11xx_init.sqf; };
			class m11xx_handleWeaponVG { file = ADDON_PATH\rhs_m11xx_handleWeaponVG.sqf; };
			class m1165_init { file = ADDON_PATH\rhs_m1165_init.sqf; };
			class m1165_turret { file = ADDON_PATH\rhs_m1165_turret.sqf; };
		};
	};
};