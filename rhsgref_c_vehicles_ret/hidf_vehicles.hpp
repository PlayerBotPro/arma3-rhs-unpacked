#define driverMacroHIDF crew="rhsgref_hidf_rifleman";\
						side=1;\
						dlc = "RHS_GREF";\
						faction="rhsgref_faction_hidf";
#define boatDriverMacroHIDF crew="rhsgref_hidf_boat_driver";\
						side=1;\
						dlc = "RHS_GREF";\
						faction="rhsgref_faction_hidf";
#define crewMacroHIDF crew="rhsgref_hidf_crewman";\
						side=1;\
						dlc = "RHS_GREF";\
						faction="rhsgref_faction_hidf";
#define Macro_scope scope = 2;\
					scopeCurator = 2;\
					author=$STR_RHS_AUTHOR_FULL;
#define M998_equipmentMacro class TransportBackpacks\
						{\
							bag_xx(rhsgref_hidf_alicepack,2);\
						};\
						class TransportMagazines\
						{\
							mag_xx(rhs_mag_20Rnd_762x51_m80_fnfal,12);\
							mag_xx(rhs_mag_M441_HE,8);\
							mag_xx(rhs_mag_m67,4);\
							mag_xx(rhs_mag_m18_green,2);\
							mag_xx(rhs_mag_m18_red,2);\
							mag_xx(rhs_mag_an_m8hc,4);\
						};
#define M1025_equipmentMacro class TransportBackpacks\
						{\
							bag_xx(rhsgref_hidf_alicepack,2);\
						};\
						class TransportMagazines {\
							mag_xx(rhs_m72a7_mag,2);\
							mag_xx(rhs_mag_20Rnd_762x51_m80_fnfal,20);\
							mag_xx(rhsusf_200rnd_556x45_M855_mixed_box,4);\
							mag_xx(rhs_mag_M441_HE,16);\
							mag_xx(rhs_mag_M714_white,4);\
							mag_xx(rhs_mag_M662_red,2);\
							mag_xx(rhs_mag_m67,4);\
							mag_xx(rhs_mag_m18_green,2);\
							mag_xx(rhs_mag_m18_red,2);\
							mag_xx(rhs_mag_an_m8hc,4);\
						};\
						class TransportWeapons\
						{\
							weap_xx(rhs_weap_l1a1,2);\
							weap_xx(rhs_weap_m72a7,2);\
						};
#define M113_equipmentMacro class TransportBackpacks\
						{\
							bag_xx(rhsgref_hidf_alicepack,4);\
						};\
						class TransportMagazines {\
							mag_xx(rhs_mag_20Rnd_762x51_m80_fnfal,50);\
							mag_xx(rhsusf_200rnd_556x45_M855_mixed_box,5);\
							mag_xx(rhsgref_30rnd_1143x23_M1911B_SMG,10);\
							mag_xx(rhs_mag_M433_HEDP,20);\
							mag_xx(rhs_mag_M441_HE,20);\
							mag_xx(rhs_mag_M714_white,8);\
							mag_xx(rhs_mag_M662_red,4);\
							mag_xx(rhs_mag_m67,10);\
							mag_xx(rhs_mag_m18_green,4);\
							mag_xx(rhs_mag_m18_red,4);\
							mag_xx(rhs_mag_an_m8hc,10);\
						};\
						class TransportWeapons {\
							weap_xx(rhs_weap_l1a1,4);\
						};

class rhsgref_hidf_M998_2dr: rhsusf_m998_w_2dr
{
	EdPrev(rhsgref_hidf_M998_2dr)
	Macro_scope
	driverMacroHIDF

	displayname = "M998A1 (2D/Open)";

	HiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_exterior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_interior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\A2_parts_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\wheel_wranglermt_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_mainbody_lg_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_interior_wood_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_2drcargo_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\tile_exmetal_lg_co.paa",
		"",
		""
	};

	animationList[] =
	{
		"hide_CIP", 1,
		"hide_A2_Parts", 1,
		"Hide_A2Bumper", 1,
		"Hide_Brushguard", .5
	};

	M998_equipmentMacro
	RHS_TOWPOS_TWEAK(0.00,-2.12,-1.15)
};

class rhsgref_hidf_M998_2dr_halftop: rhsusf_m998_w_2dr_halftop
{
	EdPrev(rhsgref_hidf_M998_2dr_halftop)
	Macro_scope
	driverMacroHIDF

	displayname = "M998A1 (2D/Half)";

	HiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_exterior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_interior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\A2_parts_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\wheel_wranglermt_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_mainbody_lg_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_interior_wood_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_2drcargo_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\tile_exmetal_lg_co.paa",
		"",
		""
	};

	animationList[] =
	{
		"hide_CIP", 1,
		"hide_A2_Parts", 1,
		"Hide_A2Bumper", 1,
		"Hide_Brushguard", .5
	};

	M998_equipmentMacro
	RHS_TOWPOS_TWEAK(0.00,-2.12,-1.15)
};

class rhsgref_hidf_M998_2dr_fulltop: rhsusf_m998_w_2dr_fulltop
{
	EdPrev(rhsgref_hidf_M998_2dr_fulltop)
	Macro_scope
	driverMacroHIDF

	displayname = "M998A1 (2D/Covered)";

	HiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_exterior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_interior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\A2_parts_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\wheel_wranglermt_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_mainbody_lg_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_interior_wood_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_2drcargo_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\tile_exmetal_lg_co.paa",
		"",
		""
	};

	animationList[] =
	{
		"hide_CIP", 1,
		"hide_A2_Parts", 1,
		"Hide_A2Bumper", 1,
		"Hide_Brushguard", .5
	};

	M998_equipmentMacro
	RHS_TOWPOS_TWEAK(0.00,-2.12,-1.15)
};

class rhsgref_hidf_m998_4dr: rhsusf_m998_w_4dr
{
	EdPrev(rhsgref_hidf_M998_4dr)
	Macro_scope
	driverMacroHIDF

	displayname = "M998A1 (4D/Open)";

	HiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_exterior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_interior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\A2_parts_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\wheel_wranglermt_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_mainbody_lg_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_interior_wood_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_4drcargo_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\tile_exmetal_lg_co.paa",
		"",
		""
	};

	animationList[] =
	{
		"hide_CIP", 1,
		"hide_A2_Parts", 1,
		"Hide_A2Bumper", 1,
		"Hide_Brushguard", .5
	};

	M998_equipmentMacro
	RHS_TOWPOS_TWEAK(0.00,-2.12,-1.15)
};

class rhsgref_hidf_M998_4dr_halftop: rhsusf_m998_w_4dr_halftop
{
	EdPrev(rhsgref_hidf_M998_4dr_halftop)
	Macro_scope
	driverMacroHIDF

	displayname = "M998A1 (4D/Half)";

	HiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_exterior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_interior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\A2_parts_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\wheel_wranglermt_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_mainbody_lg_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_interior_wood_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_4drcargo_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\tile_exmetal_lg_co.paa",
		"",
		""
	};

	animationList[] =
	{
		"hide_CIP", 1,
		"hide_A2_Parts", 1,
		"Hide_A2Bumper", 1,
		"Hide_Brushguard", .5
	};

	M998_equipmentMacro
	RHS_TOWPOS_TWEAK(0.00,-2.12,-1.15)
};

class rhsgref_hidf_M998_4dr_fulltop: rhsusf_m998_w_4dr_fulltop
{
	EdPrev(rhsgref_hidf_M998_4dr_fulltop)
	Macro_scope
	driverMacroHIDF

	displayname = "M998A1 (4D/Covered)";

	HiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_exterior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_interior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\A2_parts_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\wheel_wranglermt_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_mainbody_lg_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_interior_wood_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_4drcargo_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\tile_exmetal_lg_co.paa",
		"",
		""
	};

	animationList[] =
	{
		"hide_CIP", 1,
		"hide_A2_Parts", 1,
		"Hide_A2Bumper", 1,
		"Hide_Brushguard", .5
	};

	M998_equipmentMacro
	RHS_TOWPOS_TWEAK(0.00,-2.12,-1.15)
};

class rhsgref_hidf_m1025: rhsusf_m1025_w
{
	EdPrev(rhsgref_hidf_m1025)
	Macro_scope
	driverMacroHIDF

	displayname = "M1025A1 (Unarmed)";

	HiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_exterior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_interior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\A2_parts_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\wheel_wranglermt_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_mainbody_lg_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\tile_exmetal_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m1025_lg_co.paa",
		"",
		""
	};

	animationList[] =
	{
		"hide_CIP", 1,
		"hide_A2_Parts", 1,
		"Hide_A2Bumper", 1,
		"Hide_Brushguard", .5
	};

	M1025_equipmentMacro
	RHS_TOWPOS_TWEAK(-0.06,-2.22,-1.15)
};

class rhsgref_hidf_m1025_m2: rhsusf_m1025_w_m2
{
	EdPrev(rhsgref_hidf_m1025_m2)
	Macro_scope
	driverMacroHIDF

	displayname = "M1025A1 (M2)";

	HiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_exterior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_interior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\A2_parts_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\wheel_wranglermt_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_mainbody_lg_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\tile_exmetal_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m1025_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\mk64mount_lg_co.paa",
		"",
		""
	};

	animationList[] =
	{
		"hide_CIP", 1,
		"hide_A2_Parts", 1,
		"Hide_A2Bumper", 1,
		"Hide_Brushguard", .5
	};

	M1025_equipmentMacro
	RHS_TOWPOS_TWEAK(-0.06,-2.22,-1.40)
};

class rhsgref_hidf_m1025_mk19: rhsusf_m1025_w_mk19
{
	EdPrev(rhsgref_hidf_m1025_mk19)
	Macro_scope
	driverMacroHIDF

	displayname = "M1025A1 (Mk19)";

	HiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_exterior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_interior_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\A2_parts_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\wheel_wranglermt_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m998_mainbody_lg_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\gratting_w_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\tile_exmetal_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\m1025_lg_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\hmmwv\mk64mount_lg_co.paa",
		"",
		""
	};

	animationList[] =
	{
		"hide_CIP", 1,
		"hide_A2_Parts", 1,
		"Hide_A2Bumper", 1,
		"Hide_Brushguard", .5
	};

	M1025_equipmentMacro
	RHS_TOWPOS_TWEAK(-0.06,-2.22,-1.25)
};

class rhsgref_hidf_m113a3_unarmed: rhsusf_m113_usarmy_unarmed
{
	EdPrev(rhsgref_hidf_m113a3_unarmed)
	Macro_scope
	crewMacroHIDF

	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"camo3",
		"camo4"
	};
	HiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_01_lg_l_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_02_lg_l_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_03_lg_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa"
	};

	class AnimationSources: AnimationSources
	{
		class IFF_Panels_Hide: IFF_Panels_Hide
		{
			initPhase = 1;
		};
	};

	M113_equipmentMacro
};

class rhsgref_hidf_m113a3_m2: rhsusf_m113_usarmy_M2_90
{
	EdPrev(rhsgref_hidf_m113a3_m2)
	Macro_scope
	crewMacroHIDF

	displayName = "$STR_M113A3WD_Name";

	memoryPointSupply = "doplnovani";
	transportAmmo = 0;
	supplyRadius = -1;

	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"camo3",
		"camo4",
		"camo5",
		"camo6"
	};
	HiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_01_tv_h_90s_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_02_tv_h_90s_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_03_lg_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
	};

	class textureSources
	{
		class LightGreen
		{
			displayName="Light Green (HIDF)";
			AUTHOR_MACRO
			textures[]=
			{
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_01_lg_h_90s_co.paa",
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_02_lg_h_90s_co.paa",
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_03_lg_co.paa",
				"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
				"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
			};
			factions[]=
			{
				rhsgref_faction_hidf
			};
		};
		class MERDC_TV
		{
			displayName="MERDC (Tropical Verdant/HIDF)";
			AUTHOR_MACRO
			textures[]=
			{
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_01_tv_h_90s_co.paa",
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_02_tv_h_90s_co.paa",
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_03_lg_co.paa",
				"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
				"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
			};
			factions[]=
			{
				rhsgref_faction_hidf
			};
		};
		class MERDC_SV
		{
			displayName="MERDC (Summer Verdant/HIDF)";
			AUTHOR_MACRO
			textures[]=
			{
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_01_sv_h_90s_co.paa",
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_02_sv_h_90s_co.paa",
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_03_lg_co.paa",
				"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
				"rhsusf\addons\rhsusf_m113\data_new\m23_pintle_wd_co.paa"
			};
			factions[]=
			{
				rhsgref_faction_hidf
			};
		};
	};
	textureList[]=
	{
		"MERDC_TV", 0.7,
		"LightGreen", 0.2,
		"MERDC_SV", 0.1
	};


	class AnimationSources: AnimationSources
	{
		class IFF_Panels_Hide: IFF_Panels_Hide
		{
			initPhase = 1;
		};
	};

	M113_equipmentMacro
};

class rhsgref_hidf_m113a3_mk19: rhsusf_m113_usarmy_MK19_90
{
	EdPrev(rhsgref_hidf_m113a3_mk19)
	Macro_scope
	crewMacroHIDF

	hiddenSelections[] =
	{
		"camo1",
		"camo2",
		"camo3",
		"camo4",
		"camo5",
		"camo6"
	};
	HiddenSelectionsTextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_01_tv_h_90s_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_02_tv_h_90s_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_03_lg_co.paa",
		"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
		"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
	};

	class textureSources
	{
		class LightGreen
		{
			displayName="Light Green (HIDF)";
			AUTHOR_MACRO
			textures[]=
			{
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_01_lg_h_90s_co.paa",
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_02_lg_h_90s_co.paa",
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_03_lg_co.paa",
				"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
				"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
			};
			factions[]=
			{
				rhsgref_faction_hidf
			};
		};
		class MERDC_TV
		{
			displayName="MERDC (Tropical Verdant/HIDF)";
			AUTHOR_MACRO
			textures[]=
			{
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_01_tv_h_90s_co.paa",
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_02_tv_h_90s_co.paa",
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_03_lg_co.paa",
				"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
				"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
			};
			factions[]=
			{
				rhsgref_faction_hidf
			};
		};
		class MERDC_SV
		{
			displayName="MERDC (Summer Verdant/HIDF)";
			AUTHOR_MACRO
			textures[]=
			{
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_01_sv_h_90s_co.paa",
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_02_sv_h_90s_co.paa",
				"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\m113a3_03_lg_co.paa",
				"rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_wd_co.paa",
				"rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_w_co.paa"
			};
			factions[]=
			{
				rhsgref_faction_hidf
			};
		};
	};
	textureList[]=
	{
		"MERDC_TV", 0.7,
		"LightGreen", 0.2,
		"MERDC_SV", 0.1
	};

	class AnimationSources: AnimationSources
	{
		class IFF_Panels_Hide: IFF_Panels_Hide
		{
			initPhase = 1;
		};
	};

	M113_equipmentMacro
};

// Planes

class rhsgred_hidf_cessna_o3a: C_Plane_Civil_01_F
{

	AUTHOR_MACRO
	scope = 2;
	scopeCurator = 2;
	side = 1;
	faction= "rhsgref_faction_hidf";

	displayName="O-3A";
	vehicleClass="Air";
	crew = "rhsgref_hidf_helipilot";
	typicalCargo[]={"rhsgref_hidf_helipilot"};

	hiddenSelectionsMaterials[]=
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\cessna\rhs_cessna_ttx_ext_01.rvmat",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\cessna\rhs_cessna_ttx_ext_02.rvmat",
		"a3\air_f_exp\plane_civil_01\data\btt_int_01.rvmat",
		"a3\air_f_exp\plane_civil_01\data\btt_int_02.rvmat"
	};

	hiddenSelectionsTextures[]=
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\cessna\rhs_cessna_ttx_ext_01_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\hidf\cessna\rhs_cessna_ttx_ext_02_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
		"A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
	};

	class EventHandlers: EventHandlers
	{
		init="this setVariable ['BIS_enableRandomization',false];";
	};

	textureList[]={};
};


//Boats
class rhsgref_hidf_rhib: B_G_Boat_Transport_02_F
{
	boatDriverMacroHIDF
	Macro_scope
	EdPrev(rhsgref_hidf_rhib)

	typicalCargo[] = {};

	textureList[] = {"Black", 1};
	hiddenSelectionsTextures[] = {"\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa", "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_interior_2_CO.paa"};
};

class rhsgref_hidf_assault_boat: B_Boat_Transport_01_F
{
	boatDriverMacroHIDF
	Macro_scope
	EdPrev(rhsgref_hidf_assault_boat)

	typicalCargo[] = {};

	hiddenSelectionsTextures[] = {"\A3\boat_F\Boat_Transport_01\data\boat_transport_01_co.paa"};
	textureList[] = {"Black", 1};
};

//Static Weapons
class rhsgref_hidf_m2_static: rhs_m2staticmg_base
{
	driverMacroHIDF
	Macro_scope
	//EdPrev(rhsgref_hidf_m2_static)
	editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_M2StaticMG_D.paa";
};
class rhsgref_hidf_m2_static_minitripod: RHS_M2StaticMG_MiniTripod_base
{
	driverMacroHIDF
	Macro_scope
	//EdPrev(rhsgref_hidf_m2_static_minitripod)
	editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_M2StaticMG_MiniTripod_D.paa";
};
class rhsgref_hidf_mk19_static: RHS_MK19_TriPod_base
{
	driverMacroHIDF
	Macro_scope
	//EdPrev(rhsgref_hidf_mk19_static)
	editorPreview = "rhsusf\addons\rhsusf_editorPreviews\data\rhs_MK19_TriPod_D.paa";
};