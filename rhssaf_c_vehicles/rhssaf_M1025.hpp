class rhssaf_m1025_olive: rhsusf_m1025_w
{
	SCOPE_PUBLIC;
	ARMY_CAR_GREEN;
	EDPREV(rhssaf_m1025_olive)
	side = 2;

	hiddenSelections[] =
	{
		"exterior",
		"interior",
		"A2",
		"wheels",
		"mainbody",
		"hood gratting",
		"camo1",
		"camo2",
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
		"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\m1025_g_co.paa",
		"",
		""
	};
	class AnimationSources: AnimationSources
	{

		class  hide_BFT: trunk
		{
			animPeriod = 0.000001;
			initPhase=1;
		};
		class  hide_Antenna: hide_BFT
		{
			initPhase=1;
		};
		class  hide_A2_Parts: hide_BFT
		{
			initPhase=1;
		};
		class  Hide_A2Bumper: hide_BFT
		{
			initPhase=0;
		};
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
};
class rhssaf_m1025_olive_m2: rhsusf_m1025_w_m2
{
	SCOPE_PUBLIC;
	ARMY_CAR_GREEN;
	EDPREV(rhssaf_m1025_olive_m2)
	side = 2;

	hiddenSelections[] =
	{
		"exterior",
		"interior",
		"A2",
		"wheels",
		"mainbody",
		"hood gratting",
		"camo1",
		"camo2",
		"camo3",
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
		"rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\m1025_g_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa",
		"",
		""
	};
	class AnimationSources: AnimationSources
	{
		class hide_BFT: ReloadAnim
		{
			source = "user";
			animPeriod = 0.000001;
			initPhase=1;
			weapon = "";
		};
		class  hide_Antenna: hide_BFT
		{
			initPhase=1;
		};
		class  hide_A2_Parts: hide_BFT
		{
			initPhase=1;
		};
		class  Hide_A2Bumper: hide_BFT
		{
			initPhase=0;
		};
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
};
