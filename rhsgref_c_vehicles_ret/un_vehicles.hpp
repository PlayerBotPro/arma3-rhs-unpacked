#define crewMacroUNCDF 	crew="rhsgref_cdf_un_crew";\
			author="RHS (A2 port)";\
			side=2;\
			dlc = "RHS_GREF";\
			faction="rhsgref_faction_un";

#define crewMacroUNCDFInf 	crew="rhsgref_cdf_un_rifleman_lite";\
			author="RHS (A2 port)";\
			side=2;\
			dlc = "RHS_GREF";\
			faction="rhsgref_faction_un";

#define crewMacroUNCDFAir 	crew="rhsgref_cdf_un_pilot";\
			author="RHS (A2 port)";\
			side=2;\
			dlc = "RHS_GREF";\
			faction="rhsgref_faction_un";

//- Wheeled vehicles

// UAZ

class rhsgref_un_uaz : rhsgref_cdf_reg_uaz
{
	EdPrev(rhsgref_un_uaz)
	scope=2;

	crewMacroUNCDFInf

	accuracy = 0.5;

	rhs_decalParameters[]=
	{
        	"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']",  // Set number (random)
        	"['Label', cDecalsCarsRightArmyPlaces, 'Army', 16]"
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_un_co.paa"
	};
};

// Ural

class rhsgref_un_ural : rhsgref_cdf_ural
{
	EdPrev(rhsgref_un_ural)
	scope=2;

	crewMacroUNCDFInf

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_un_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_un_co.paa",
		"rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"
	};
};

#define UN_ZIL131_TEXTURES \
hiddenselectionstextures[] = \
{\
	"\rhsgref\addons\rhsgref_vehicles_ret\data\un\rhs_zil131_cargo_UN_co.paa",\
	"\rhsgref\addons\rhsgref_vehicles_ret\data\un\rhs_zil131_cabin_UN_co.paa",\
	"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_interior_co.paa",\
	"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_wheels_co.paa",\
	"\rhsafrf\addons\rhs_zil131\data\rhs_zil131_base_co.paa"\
};\
textureList[] = {UN,1};\
scope = 2; scopeCurator = 2

class rhsgref_un_zil131: rhs_zil131_base {UN_ZIL131_TEXTURES;EdPrev2(rhsgref_un_zil131);crewMacroUNCDFInf};
class rhsgref_un_zil131_open: rhs_zil131_open_base {UN_ZIL131_TEXTURES;EdPrev2(rhsgref_un_zil131_open);crewMacroUNCDFInf};
class rhsgref_un_zil131_flatbed: rhs_zil131_flatbed_base {UN_ZIL131_TEXTURES;EdPrev2(rhsgref_un_zil131_flatbed);crewMacroUNCDFInf};
class rhsgref_un_zil131_flatbed_cover: rhs_zil131_flatbed_cover_base {UN_ZIL131_TEXTURES;EdPrev2(rhsgref_un_zil131_flatbed_cover);crewMacroUNCDFInf};


// M1117 (UN)

class rhsgref_un_m1117 : rhsusf_M1117_D
{
	EdPrev(rhsgref_un_m1117)
	displayName = "M1117 ASV (UN)";

	crew="rhsgref_cdf_un_rifleman_lite";
	side=2;
	dlc = "RHS_GREF";
	faction="rhsgref_faction_un";

	// Mistyronin Note: Let the author be Cleggy
	author = "Cleggy";

	hiddenSelectionsTextures[] =
	{
		"\rhsusf\addons\rhsusf_m1117\data\m1117_tex1_UN_co.paa",
		"\rhsusf\addons\rhsusf_m1117\data\m1117_armour_UN_co.paa",
		"\rhsusf\addons\rhsusf_m1117\data\m1117_turret_UN_co.paa",
		"\rhsusf\addons\rhsusf_m1117\data\m1117_wheel_UN_co.paa",
		"\rhsusf\addons\rhsusf_m1a1\duke\data\duke_antennae_d_co.paa"
	};
};

// BTR-70
class rhsgref_un_btr70 : rhs_btr70_vmf
{
	EdPrev(rhsgref_un_btr70)
	scope=2;

	crewMacroUNCDF

	rhs_decalParameters[]={
		"['Label', cBTRBackArmSymPlaces, 'Army',16]"
	};

	hiddenSelectionsTextures[]=
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\un\btr70_un_1_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\un\btr70_un_2_co.paa",
		"",
		"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
		"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"
	};
	
	BTR_equipmentMacro
};

//- Rotary

// Mi 8

class rhsgref_un_Mi8amt: rhsgref_cdf_reg_Mi8amt
{
	EdPrev(rhsgref_un_Mi8amt)
	crewMacroUNCDFAir

	rhs_decalParameters[]={
			"['Label',cRHSAIRMI8NumberPlaces,'Misc']"
		};


	scope=2;

	hiddenselectionstextures[] =
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\un\mi17_body_UN_CO.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\un\mi17_det_UN_CO.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\un\mi17_decals2_UN_CA.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\un\mi17_decals_UN_CA.paa"
	};
	
	Air_equipmentMacro
};

// Mi 24

class rhsgref_un_Mi24V: RHS_Mi24V_VVS_Base
{
	EdPrev(rhsgref_un_Mi24V)
	crewMacroUNCDFAir

	rhs_decalParameters[]={};


	scope=2;
	hiddenselectionstextures[] =
	{
		"\rhsgref\addons\rhsgref_tohport_air\Mi24\data\26_unitednations_white_001_co.paa",
		"\rhsgref\addons\rhsgref_tohport_air\Mi24\data\26_unitednations_white_002_co.paa"
	};
	class AnimationSources: AnimationSources
	{
		class exhaust_hide
		{
			source="user";
			initPhase=1;
			animPeriod=0.00001;
		};
	};
	class Exhausts
	{
		class Exhaust01
		{
			direction="exhaust1_dir";
			position="exhaust1";
			effect="ExhaustEffectHeli";
		};
		class Exhaust02
		{
			direction="exhaust2_dir";
			position="exhaust2";
			effect="ExhaustEffectHeli";
		};
	};
	
	Air_equipmentMacro
};
class rhsgref_un_Mi24V_UPK : RHS_Mi24V_UPK23_VVS_Base
{
	EdPrev(rhsgref_un_Mi24V_UPK)
	crewMacroUNCDFAir
	Show_Zeus

	rhs_decalParameters[]={};

	hiddenselectionstextures[] =
	{
		"\rhsgref\addons\rhsgref_tohport_air\Mi24\data\26_unitednations_white_001_co.paa",
		"\rhsgref\addons\rhsgref_tohport_air\Mi24\data\26_unitednations_white_002_co.paa"
	};
	class AnimationSources: AnimationSources
	{
		class exhaust_hide
		{
			source="user";
			initPhase=1;
			animPeriod=0.00001;
		};
	};
	class Exhausts
	{
		class Exhaust01
		{
			direction="exhaust1_dir";
			position="exhaust1";
			effect="ExhaustEffectHeli";
		};
		class Exhaust02
		{
			direction="exhaust2_dir";
			position="exhaust2";
			effect="ExhaustEffectHeli";
		};
	};
	
	Air_equipmentMacro
};