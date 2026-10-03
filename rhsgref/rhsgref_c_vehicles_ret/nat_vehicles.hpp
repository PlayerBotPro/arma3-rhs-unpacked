#define crewMacroNat 	crew="rhsgref_nat_crew";\
			author="RHS (A2 port)";\
			side=2;\
			dlc = "RHS_GREF";\
			faction="rhsgref_faction_nationalist";
#define crewMacroNatInf 	crew="rhsgref_nat_rifleman";\
			author="RHS (A2 port)";\
			side=2;\
			dlc = "RHS_GREF";\
			faction="rhsgref_faction_nationalist";

class rhsgref_nat_2b14 : rhs_2b14_82mm_base
{
	EdPrev(rhsgref_nat_2b14)
		scope = 2;
		crewMacroNat
};


class rhsgref_nat_d30 : rhs_d30_base
{
	EdPrev(rhsgref_nat_d30)
	crewMacroNatInf
	scope = 2;
};
class rhsgref_nat_d30_at : rhs_d30_at_base
{
	EdPrev(rhsgref_nat_d30_at)
	crewMacroNatInf
	scope = 2;
};
class rhsgref_nat_AGS30_TriPod: RHS_AGS30_TriPod_base
{
	EdPrev(rhsgref_nat_AGS30_TriPod)
	crewMacroNatInf
	scope = 2;
};
class rhsgref_nat_NSV_TriPod: rhs_nsv_tripod_base
{
	EdPrev(rhsgref_nat_NSV_TriPod)
	crewMacroNatInf
	scope = 2;
};
class rhsgref_nat_DSHKM_Mini_TriPod: rhs_DSHkM_Mini_TriPod_base
{
	EdPrev(rhsgref_nat_DSHKM_Mini_TriPod)
	crewMacroNatInf
	scope = 2;
};
class rhsgref_nat_DSHKM: rhs_DSHKM_base
{
	EdPrev(rhsgref_nat_DSHKM)
	crewMacroNatInf
	scope = 2;
};
class rhsgref_nat_ZU23: RHS_ZU23_base
{
	EdPrev(rhsgref_nat_ZU23)
	crewMacroNatInf
	scope = 2;
};
class rhsgref_nat_Igla_AA_pod : rhs_Igla_AA_pod_Base
{
	EdPrev(rhsgref_nat_Igla_AA_pod)
	crewMacroNatInf
	scope = 2;
};
class rhsgref_nat_SPG9: rhs_SPG9_base
{
	EdPrev(rhsgref_nat_SPG9)
	scope = 2;
	crewMacroNatInf
};

class rhsgref_nat_van : B_G_Van_01_transport_F
{
	EdPrev(rhsgref_nat_van)
	scope = 2;
	crewMacroNat
};

class rhsgref_nat_van_fuel : B_G_Van_01_fuel_F
{
	EdPrev(rhsgref_nat_van_fuel)
	scope = 2;
	crewMacroNat
};
// Uaz
class rhsgref_nat_uaz : RHS_UAZ_Base
{
	EdPrev(rhsgref_nat_uaz)
	scope =2;
	crewMacroNatInf
	HideLightCover
	accuracy = 0.5;
	rhs_decalParameters[]={"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']"};
};

class rhsgref_nat_uaz_open : rhs_uaz_open_Base
{
	EdPrev(rhsgref_nat_uaz_open)
	scope =2;
	crewMacroNatInf
	HideLightCover
	accuracy = 0.5;
	rhs_decalParameters[]={"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']"};
};

class rhsgref_nat_uaz_dshkm: RHS_UAZ_DShKM_Base
{
	EdPrev(rhsgref_nat_uaz_dshkm)
	scope =2;
	crewMacroNatInf
	HideLightCover
	accuracy = 0.5;
	rhs_decalParameters[]={"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']"};
};

class rhsgref_nat_uaz_ags : RHS_UAZ_AGS30_Base
{
	EdPrev(rhsgref_nat_uaz_ags)
	scope =2;
	crewMacroNatInf
	HideLightCover
	accuracy = 0.5;
	rhs_decalParameters[]={"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']"};
};

class rhsgref_nat_uaz_spg9 : RHS_UAZ_SPG9_Base
{
	EdPrev(rhsgref_nat_uaz_spg9)
	scope =2;
	crewMacroNatInf
	HideLightCover
	accuracy = 0.5;
	rhs_decalParameters[]={"['Number', cDecals4CarsNumberPlaces, 'LicensePlate']"};
};
// Ural

class rhsgref_nat_ural : RHS_Ural_Civ_Base
{
	EdPrev(rhsgref_nat_ural)
	scope=2;
	displayName="$STR_RHS_URAL4320_NAME";
	crewMacroNatInf
	HideLightCover

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa"
	};
};

class rhsgref_nat_ural_open : RHS_Ural_Civ_Base
{
	EdPrev(rhsgref_nat_ural_open)
	scope=2;
	displayName="$STR_RHS_URAL4320OPEN_NAME";
	crewMacroNatInf
	HideLightCover

	model="\rhsafrf\addons\rhs_a2port_car\Ural\Ural_open.p3d";
	picture = "\rhsafrf\addons\rhs_a2port_car\data\ico\ural_open_ca.paa";

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_plachta_co.paa"
	};
};

class rhsgref_nat_ural_work : RHS_Ural_Civ_Base
{
	EdPrev(rhsgref_nat_ural_work)
	scope=2;
	displayName="$STR_RHS_URAL4320WORKER_NAME";
	crewMacroNatInf
	HideLightCover

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_kabina_civ2_co.paa",
		"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_plachta_civil_co.paa"
	};
};

class rhsgref_nat_ural_work_open : RHS_Ural_Civ_Base
{
	EdPrev(rhsgref_nat_ural_work_open)
	scope=2;
	displayName="$STR_RHS_URAL4320WORKEROPEN_NAME";
	crewMacroNatInf
	HideLightCover
	model="\rhsafrf\addons\rhs_a2port_car\Ural\Ural_open.p3d";

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_kabina_civ2_co.paa",
		"rhsafrf\addons\rhs_a2port_car\Ural\Data\Ural_plachta_civil_co.paa"
	};
};

// Ural (ZU23)

class rhsgref_nat_ural_Zu23: RHS_Ural_Zu23_Base
{
	EdPrev(rhsgref_nat_ural_Zu23)
	scope=2;

	crewMacroNatInf

	accuracy = 0.5;
	rhs_decalParameters[]={
		"['Number', cDecals4CarsNumberPlaces, 'Default']"
	};

	hiddenSelectionsTextures[] =
	{
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_kabina_khk_co.paa",
		"rhsafrf\addons\rhs_a2port_car\ural\data\ural_open_co.paa"
	};

	class Turrets: Turrets
	{
		class MainTurret: MainTurret {
			gunnerType="rhsgref_nat_rifleman_aks74";
		};
		class CargoTurret_01: CargoTurret_01
		{
			gunnerType="rhsgref_nat_commander";
		};
		class CargoTurret_02: CargoTurret_02 {};
		class CargoTurret_03: CargoTurret_03 {};
	};
};

// BTR-70
class rhsgref_nat_btr70 : rhs_btr70_vmf
{
	EdPrev(rhsgref_nat_btr70)
	scope=2;

	crewMacroNat

	rhs_decalParameters[]=
	{
		"['Number', cBTR3NumberPlaces, 'CDF']"  // Set number (random)
	};

	hiddenSelectionsTextures[]=
	{
		"rhsgref\addons\rhsgref_vehicles_ret\data\nat\btr70_napa_1_co.paa",
		"rhsgref\addons\rhsgref_vehicles_ret\data\nat\btr70_napa_2_co.paa",
		"",
		"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa",
		"rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"
	};
	
	BTR_equipmentMacro
};