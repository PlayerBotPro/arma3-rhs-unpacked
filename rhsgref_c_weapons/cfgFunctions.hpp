
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class functions
		{
			class acc_mtz
			{
				file = "\rhsgref\addons\rhsgref_c_weapons\scripts\rhs_mtz.sqf";
				description = "MTZ mounting handler";
			};
			class acc_mtz_handler
			{
				file = "\rhsgref\addons\rhsgref_c_weapons\scripts\rhs_mtz_dismount.sqf";
				description = "MTZ dismounting handler";
			};
			class rkg3_impact
			{
				file = "\rhsgref\addons\rhsgref_c_weapons\scripts\rhs_rkg3_impact.sqf";
			};
			class sight_l2a2
			{
				file = "\rhsgref\addons\rhsgref_c_weapons\scripts\rhs_sight_l2a2.sqf";
			};
			class virtualAmmoBoxGREF
			{
				file = "\rhsgref\addons\rhsgref_c_weapons\scripts\virtualAmmoBox.sqf";
				description = "[nameOfObject,type (type number: 0 - all gear, 1 - ammo only)] call rhs_fnc_virtualAmmoBoxGREF, make a object virtual ammo box with GREF gear inside";
			};
			class m1Handler {
				file = "RHSGREF\addons\rhsgref_c_weapons\scripts\rhs_m1Handler.sqf";
				description = "Handles the Ping Sound.";
			};
			class m1garand_ads  {file = "RHSGREF\addons\rhsgref_c_weapons\scripts\rhs_m1garand_ads.sqf";};
		};
	};
};
class CfgSounds {
	sounds[] = {};
	class rhs_kar98k_bolt {
		name = "rhs_m2010_bolt";
		sound[] = {"rhsgref\addons\rhsgref_weapons\kar98k\data\sounds\kar98k_bolt", 0.42, 1, 20};
		titles[] = {};
	};
};