
class CfgFunctions
{
	class RHS
	{
		tag = "RHS";
		class Functions
		{
			class fired_IglaAA
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_igla_aa_fired.sqf";
				description = "AINET smart fuse for HE-FRAG rounds";
			};
			class fired_D30
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_d30_fired.sqf";
				description = "AINET smart fuse for HE-FRAG rounds";
			};
			class firedFCS
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_firedFCS.sqf";
				description = "LRF marking & ammo changing";
			};
			class firedFCS_mi24
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_firedFCS_mi24.sqf";
			};
			class firedPylon { file = "\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_firedPylon.sqf";};
			class d30_pack
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_d30_pack.sqf";
				description = "Prepare D30 for towing or air lifting";
			};
			class zu23_pack
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_zu23_pack.sqf";
			};
			class bm21_fired
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_bm21_fired.sqf";
			};
			class burstLimiter
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_burstLimiter.sqf";
				description = "Burst limiter for air cannons";
			};
			class eden_defineLoadout
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_defineLoadout.sqf";
				description = "3den";
			};
		};
		class WeaponsEH
		{
			class saclosGuide
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_saclosGuide.sqf";
				description = "SACLOS guidance";
			};
			class mclosGuide
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_mclosGuide.sqf";
				description = "MCLOS guidance";
			};
			class klenPSGuide
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\functions\rhs_klenPSGuide.sqf";
				description = "Klen-PS laser guidance";
			};
			class 9m14_fired
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_9m14_fired.sqf";
				description = "Maljutka Hide";
			};
			class 9m14_reload
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_9m14_reload.sqf";
				description = "Maljutka Reload";
			};
			class at14_fired
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_at14coverejection.sqf";
				description = "Cover Ejection for At14";
			};
			class atgm_spentTube
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_atgm_spentTube.sqf";
				description = "Spent tubes for atgm";
			};
			class effectFiredSmokeLauncher
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_effectFiredSmokeLauncher.sqf";
				description = "Effects for smoke launcher";
			};
			class effectFiredSmokeGenerator
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_effectFiredSmokeGenerator.sqf";
				description = "Effects for smoke generator";
			};
			class scriptedRecoil
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_scriptedRecoil.sqf";
			};
			class scriptedArtilleryCharge
			{
				file = "\rhsafrf\addons\rhs_c_heavyweapons\effects\rhs_scriptedArtilleryCharge.sqf";
			};
		};
	};
};

class CfgRemoteExec
{
	class Functions
	{
		mode = 2;
		jip = 1;
		class RHS_fnc_effectFiredSmokeGenerator
		{
			allowedTargets = 0;
		};
		class RHS_fnc_effectFiredSmokeLauncher
		{
			allowedTargets = 0;
		};
	};
};