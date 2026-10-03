//M998, 1-1/14 ton, cargo carrier, olive, open
class rhssaf_m998_olive_2dr_halftop: rhsusf_m998_w_2dr
{
	SCOPE_PUBLIC;
	ARMY_CAR_GREEN;
	EDPREV(rhssaf_m998_olive_2dr_halftop)
	side = 2;
	typicalCargo[] = {"rhssaf_army_m10_digital_crew"};

	hiddenSelections[] =
	{
		"exterior",
		"interior",
		"A2",
		"wheels",
		"mainbody",
		"hood gratting",
		"interior_wood",
		"2drcargocomplete",
		"camo1",
		"unitdecals_1",
		"unitdecals_2",
		//hide rest of stuff
		"ind_wait",
		"ind_brake",
		"ind_highbeam"
	};
	HiddenSelectionsTextures[] =
	{
		"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_g_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_w_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_g_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_b_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_g_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_w_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_g_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
		"",
		""
	};
	class TransportBackpacks
	{
		class _xx_rhssaf_kitbag_smb
		{
			backpack="rhssaf_kitbag_smb";
			count=1;
		};
	};
	class TransportMagazines
	{
		class _xx_rhsgref_30rnd_556x45_m21
		{
			count = 20;
			magazine = "rhsgref_30rnd_556x45_m21";
		};
		class _xx_rhssaf_30Rnd_762x39mm_M67
		{
			count = 20;
			magazine = "rhssaf_30Rnd_762x39mm_M67";
		};
		class _xx_rhsgref_10Rnd_792x57_m76
		{
			count = 10;
			magazine = "rhsgref_10Rnd_792x57_m76";
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			count = 5;
			magazine = "rhs_100Rnd_762x54mmR";
		};
		class _xx_rhs_mag_smaw_HEAA
		{
			count = 5;
			magazine = "rhs_mag_smaw_HEAA";
		};
		class _xx_rhssaf_mag_brd_m83_green
		{
			count = 2;
			magazine = "rhssaf_mag_brd_m83_green";
		};
		class _xx_rhssaf_mag_brd_m83_red
		{
			count = 2;
			magazine = "rhssaf_mag_brd_m83_red";
		};
		class _xx_rhssaf_mag_brd_m83_white
		{
			count = 4;
			magazine = "rhssaf_mag_brd_m83_white";
		};
	};
	class TransportItems
	{
		class _xx_FirstAidKit
		{
			name = "FirstAidKit";
			count = 10;
		};
		class _xx_ToolKit
		{
			name = "ToolKit";
			count = 1;
		};
		class _xx_Medikit
		{
			name = "Medikit";
			count = 1;
		};
	};
	class TransportWeapons
	{
		class _xx_rhs_weap_m80
		{
			weapon = "rhs_weap_m80";
			count = 2;
		};

	};
	class AnimationSources: AnimationSources
	{
		class  hide_backTop: hide_backTop
		{
			initPhase=1;
		};
		class  hide_frontTop: hide_frontTop
		{
			initPhase=0;
		};
		class  hide_snorkel: hide_snorkel
		{
			initPhase=1;
		};
		class  hide_middleTop: hide_middleTop
		{
			displayName="unhide middle top";
		};
		class  hide_CIP: hide_CIP
		{
			initPhase=1;
		};
		class  hide_BFT: hide_BFT
		{
			initPhase=1;
		};
		class  hide_Antenna: hide_Antenna
		{
			initPhase=1;
		};
		class  hide_A2_Parts: hide_A2_Parts
		{
			initPhase=1;
		};
		class  Hide_A2Bumper: Hide_A2Bumper
		{
			initPhase=0;
		};
	};
};
//FULL SOFT TOPS
class rhssaf_m998_olive_2dr_fulltop: rhssaf_m998_olive_2dr_halftop
{
	SCOPE_PUBLIC;
	ARMY_CAR_GREEN;
	EDPREV(rhssaf_m998_olive_2dr_fulltop)
	Icon = "\rhsusf\addons\rhsusf_hmmwv\icons\ico_m998_2dr.paa";
	attenuationEffectType = "RHS_CarAttenuation";
	soundAttenuationCargo[]={1};
	insideSoundCoef = 0.6;
	class AnimationSources: AnimationSources
	{
		class  hide_backTop: hide_backTop
		{
			initPhase=0;
		};

	};
	class Sounds: Sounds
	{
		class RainIn
		{
			sound[] = {"rhsusf\addons\rhsusf_sounds\misc\rain.wss", db+3,1 };
			frequency	=	1;
			volume = rain*(1-camPos);
		};
		class RainExt
		{
			sound[] = {"rhsusf\addons\rhsusf_sounds\misc\rain.wss", db+3,1 };
			frequency	=	1;
			volume = rain*camPos;
		};
	};
	class Turrets: Turrets
	{
		class CargoTurret_01: CargoTurret_01
		{
			maxElev = 15;
		};
		class CargoTurret_02: CargoTurret_02
		{
			maxElev = 15;
		};
	};
};
