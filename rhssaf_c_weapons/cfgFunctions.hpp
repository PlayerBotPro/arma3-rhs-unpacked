
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class acc_mtz
			{
				file = "\rhssaf\addons\rhssaf_c_weapons\scripts\rhs_mtz.sqf";
				description = "MTZ mounting handler";
			};
			class acc_mtz_handler
			{
				file = "\rhssaf\addons\rhssaf_c_weapons\scripts\rhs_mtz_dismount.sqf";
				description = "MTZ dismounting handler";
			};
			class rkg3_impact
			{
				file = "\rhssaf\addons\rhssaf_c_weapons\scripts\rhs_rkg3_impact.sqf";
			};
			class virtualAmmoBoxSAF
			{
				file = "\rhssaf\addons\rhssaf_c_weapons\scripts\virtualAmmoBox.sqf";
				description = "[nameOfObject,type (type number: 0 - all gear, 1 - ammo only)] call rhs_fnc_virtualAmmoBoxSAF, make a object virtual ammo box with SAF gear inside";
			};
			class mine_damage_handler
			{
				file = "\rhssaf\addons\rhssaf_c_weapons\scripts\rhs_apers_mine_dmg_handler.sqf";
				description = "AP mine damage handler";
			};
		};
	};
};
