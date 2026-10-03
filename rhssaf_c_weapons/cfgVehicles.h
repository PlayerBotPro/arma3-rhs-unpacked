class CfgVehicles
{

	/* Ammo boxes */

	#include "rhssaf_ammocrates.h"

	/* WEAPONS */
	// Weapons that can be spawned as an object both in the editor and in Zeus

	class Weapon_Base_F;

	// Macro that determines which weapon
	#define WEAPONMACRO(classname,strname) class TransportWeapons \
		{ \
			class ##classname## \
			{ \
				weapon = ##classname##; \
				count = 1; \
			}; \
		}; \
		displayName= ##strname##;

	// Macro that determines which magazine will appear in the weapon when spawn.
	#define MAGAZINEMACRO(magazineclass) class TransportMagazines \
		{ \
			class ##magazineclass## \
			{ \
				magazine = ##magazineclass##; \
				count = 1; \
			}; \
		};

	class rhssaf_weapon_base : Weapon_Base_F
	{
		SCOPE_PRIVATE;
		vehicleClass = "WeaponsPrimary";
		editorCategory = "EdCat_Weapons";
		editorSubcategory = "EdSubcat_AssaultRifles";
	};

	//CZ99 Pistol
	class rhssaf_weapon_cz99 : rhssaf_weapon_base
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_cz99,$STR_RHS_WEAP_CZ99_DISPLAYNAME)
		MAGAZINEMACRO(rhssaf_mag_15Rnd_9x19_FMJ)

		vehicleClass = "WeaponsHandguns";
		editorSubcategory = "EdSubcat_Pistols";
		model = "\A3\Weapons_F\DummyPistol_Single.p3d";
	};
	class rhssaf_weapon_cz99_etched : rhssaf_weapon_base
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_cz99_etched,$STR_RHS_WEAP_CZ99_ETCHED_DISPLAYNAME)
		MAGAZINEMACRO(rhssaf_mag_15Rnd_9x19_FMJ)

		vehicleClass = "WeaponsHandguns";
		editorSubcategory = "EdSubcat_Pistols";
		model = "\A3\Weapons_F\DummyPistol_Single.p3d";
	};

	//M92 SMG
	class rhssaf_weapon_m92 : rhssaf_weapon_base
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_m92,$STR_RHSSAF_WEAP_M92)
		MAGAZINEMACRO(rhssaf_30Rnd_762x39mm_M67)
		editorSubcategory = "EdSubcat_SubMachineGuns";
	};

	class rhssaf_weapon_m92_fold : rhssaf_weapon_m92
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_m92_fold,$STR_RHSSAF_WEAP_M92_FOLD)
	};

	// M84A PDW
	class rhssaf_weapon_scorpion : rhssaf_weapon_m92
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_scorpion,$STR_RHS_WEAP_SCORPION_DISPLAYNAME)
		MAGAZINEMACRO(rhsgref_20rnd_765x17_vz61)
	};

	// M76 Sniper Rifle
	class rhssaf_weapon_m76 : rhssaf_weapon_base
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_m76,$STR_RHSSAF_WEAP_M76)
		MAGAZINEMACRO(rhsgref_10Rnd_792x57_m76)

		editorSubcategory = "EdSubcat_SniperRifles";
	};

	class rhssaf_weapon_m82a1 : rhssaf_weapon_m76
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_m82a1,$STR_RHSSAF_WEAP_M82A1)
		MAGAZINEMACRO(rhsusf_mag_10Rnd_STD_50BMG_M33)
	};

	// Machineguns
	class rhssaf_weapon_minimi : rhssaf_weapon_base
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_minimi_para_railed,$STR_RHSSAF_WEAP_MINIMI)
		MAGAZINEMACRO(rhs_200rnd_556x45_M_SAW)

		editorSubcategory = "EdSubcat_MachineGuns";
	};

	class rhssaf_weapon_m84 : rhssaf_weapon_minimi
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_m84,$STR_RHSSAF_WEAP_M84)
		MAGAZINEMACRO(rhs_100Rnd_762x54mmR)
	};

	// M70 assault rifles
	class rhssaf_weapon_m70ab2 : rhssaf_weapon_base
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_m70ab2,$STR_RHSSAF_WEAP_M70AB2)
		MAGAZINEMACRO(rhssaf_30Rnd_762x39mm_M67)
	};

	class rhssaf_weapon_m70ab2_fold : rhssaf_weapon_m70ab2
	{
		WEAPONMACRO(rhs_weap_m70ab2_fold,$STR_RHSSAF_WEAP_M70AB2_FOLD)
	};

	class rhssaf_weapon_m70b1 : rhssaf_weapon_m70ab2
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_m70b1,$STR_RHSSAF_WEAP_M70B1)
	};

	class rhssaf_weapon_m70b1n : rhssaf_weapon_m70ab2
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_m70b1n,$STR_RHSSAF_WEAP_M70B1N)
	};

	class rhssaf_weapon_m70b3n : rhssaf_weapon_m70ab2
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_m70b3n,$STR_RHSSAF_WEAP_M70B3N)
	};

	class rhssaf_weapon_m70b3n_pbg40 : rhssaf_weapon_m70ab2
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_m70b3n_pbg40,$STR_RHSSAF_WEAP_M70B3N_PBG40)
	};

	// M21 assault rifles
	class rhssaf_weapon_m21a : rhssaf_weapon_base
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_m21a,$STR_RHSSAF_WEAP_M21A)
		MAGAZINEMACRO(rhsgref_30rnd_556x45_m21)
	};

	class rhssaf_weapon_m21a_pr : rhssaf_weapon_m21a
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_m21a_pr,$STR_RHSSAF_WEAP_M21A_PIC)
	};

	class rhssaf_weapon_m21a_fold : rhssaf_weapon_m21a
	{
		WEAPONMACRO(rhs_weap_m21a_fold,$STR_RHSSAF_WEAP_M21A_FOLD)
	};

	class rhssaf_weapon_m21a_pbg40 : rhssaf_weapon_m21a
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_m21a_pbg40,$STR_RHSSAF_WEAP_M21A_PBG40)
	};

	class rhssaf_weapon_m21a_pr_pbg40 : rhssaf_weapon_m21a
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_m21a_pr_pbg40,$STR_RHSSAF_WEAP_M21A_PIC_PBG40)
	};

	class rhssaf_weapon_m21s : rhssaf_weapon_m21a
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_m21s,$STR_RHSSAF_WEAP_M21S)
	};

	class rhssaf_weapon_m21s_pr : rhssaf_weapon_m21a
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_m21s_pr,$STR_RHSSAF_WEAP_M21S_PIC)
	};

	class rhssaf_weapon_m21s_fold : rhssaf_weapon_m21a
	{
		WEAPONMACRO(rhs_weap_m21s_fold,$STR_RHSSAF_WEAP_M21S_FOLD)
	};

	class rhssaf_weapon_g36c : rhssaf_weapon_m21a
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_g36c,$STR_RHSSAF_WEAP_G36C)
		MAGAZINEMACRO(rhssaf_30rnd_556x45_EPR_G36)
	};

	class rhssaf_weapon_g36kv : rhssaf_weapon_g36c
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_g36kv,$STR_RHSSAF_WEAP_G36KV)
	};

	class rhssaf_weapon_g36kv_ag36 : rhssaf_weapon_g36c
	{
		SCOPE_PUBLIC;
		WEAPONMACRO(rhs_weap_g36kv_ag36,$STR_RHSSAF_WEAP_G36KV_AG36)
	};

	// AT launchers
	class rhssaf_weapon_m80 : rhssaf_weapon_base
	{
		WEAPONMACRO(rhs_weap_m80,$STR_RHSSAF_WEAP_M80)
		MAGAZINEMACRO(rhs_m80_mag)
		SCOPE_PUBLIC;
		vehicleClass = "WeaponsSecondary";
		editorSubcategory = "EdSubcat_Launchers";
	};
	//Magazines

	class WeaponHolder_Single_limited_item_F;
	class rhssaf_magazine_base : WeaponHolder_Single_limited_item_F
	{
	vehicleClass = "Magazines";
	editorCategory = "EdCat_Weapons";
	editorSubcategory = "EdSubcat_Magazines";
	};

	#define MAGAZINEITEMMACRO(mc,mn) \
	class rhssaf_magazine_##mc## : rhssaf_magazine_base \
	{ \
	scope = 2; \
	class TransportMagazines \
	{ \
		class ##mc## \
		{ \
		magazine = ##mc##; \
		count = 1; \
		}; \
	}; \
	displayName = ##mn##; \
	DLC_AUTHOR; \
	};
//Hand Grenades
	MAGAZINEITEMMACRO(rhssaf_mag_br_m75,"M75 Fragmentation Grenade")
	MAGAZINEITEMMACRO(rhssaf_mag_br_m84,"M84 Fragmentation Grenade")
	MAGAZINEITEMMACRO(rhssaf_mag_rshb_p98,"P98 Stun Grenade")
	MAGAZINEITEMMACRO(rhssaf_mag_brz_m88,"M88 Incendiary Grenade")
	MAGAZINEITEMMACRO(rhssaf_mag_brd_m83_white,"M83 White Smoke Grenade")
	MAGAZINEITEMMACRO(rhssaf_mag_brd_m83_green,"M83 Green Smoke Grenade")
	MAGAZINEITEMMACRO(rhssaf_mag_brd_m83_red,"M83 Red Smoke Grenade")
	MAGAZINEITEMMACRO(rhssaf_mag_brd_m83_yellow,"M83 Yellow Smoke Grenade")
	MAGAZINEITEMMACRO(rhssaf_mag_brd_m83_blue,"M83 Blue Smoke Grenade")
	MAGAZINEITEMMACRO(rhssaf_mag_brd_m83_orange,"M83 Orange Smoke Grenade")
	MAGAZINEITEMMACRO(rhssaf_mag_brk_m79,"M79 Anti Tank Grenade")
	MAGAZINEITEMMACRO(rhsgref_20rnd_765x17_vz61,$STR_RHSSAF_20RND_765X17_VZ61_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhsgref_10rnd_765x17_vz61,$STR_RHSSAF_10RND_765X17_VZ61_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_mag_15Rnd_9x19_FMJ,$STR_RHSSAF_MAG_15RND_9X19_FMJ_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_mag_15Rnd_9x19_JHP,$STR_RHSSAF_MAG_15RND_9X19_JHP_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhsgref_30rnd_556x45_m21,$STR_RHSSAF_30RND_556X45_M21_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhsgref_30rnd_556x45_m21_t,$STR_RHSSAF_30RND_556X45_M21_T_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_30rnd_556x45_EPR_G36,$STR_RHSSAF_30RND_556X45_EPR_G36_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_30rnd_556x45_SOST_G36,$STR_RHSSAF_30RND_556X45_SOST_G36_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_30rnd_556x45_SPR_G36,$STR_RHSSAF_30RND_556X45_SPR_G36_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_100rnd_556x45_EPR_G36,$STR_RHSSAF_100RND_556X45_EPR_G36_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_30rnd_556x45_Tracers_G36,$STR_RHSSAF_30RND_556X45_TRACERS_G36_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_30rnd_556x45_TDIM_G36,$STR_RHSSAF_30RND_556X45_TDIM_G36_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_30rnd_556x45_MDIM_G36,$STR_RHSSAF_30RND_556X45_MDIM_G36_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_30Rnd_762x39mm_M67,$STR_RHSSAF_30RND_762X39_M67_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_30Rnd_762x39mm_M78_tracer,$STR_RHSSAF_30RND_762X39_M78_TRACER_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_30Rnd_762x39_M82_api,$STR_RHSSAF_30RND_762X39_M82_API_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhsgref_10Rnd_792x57_m76,$STR_RHSSAF_10RND_792X57_M76_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_10Rnd_792x57_m76_tracer,$STR_RHSSAF_10RND_792X57_M76_TRACER_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_250Rnd_762x54R,$STR_RHSSAF_250RND_762X54R_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_mine_pma3_mag,$STR_RHSSAF_PMA3_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_mine_tma4_mag,$STR_RHSSAF_TMA4_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_mine_mrud_a_mag,$STR_RHSSAF_MRUD_A_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_mine_mrud_b_mag,$STR_RHSSAF_MRUD_B_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_mine_mrud_c_mag,$STR_RHSSAF_MRUD_C_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_mine_mrud_d_mag,$STR_RHSSAF_MRUD_D_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_tm100_mag,$STR_RHSSAF_TM100_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_tm200_mag,$STR_RHSSAF_TM200_DISPLAYNAME)
	MAGAZINEITEMMACRO(rhssaf_tm500_mag,$STR_RHSSAF_TM500_DISPLAYNAME)

	///! Mines and explosives
	class MineBase;
	class rhssaf_mine_pma3: MineBase
	{
		scope = 2;
		ammo = "rhssaf_mine_pma3_ammo";
		editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_mine_pma3";
		displayName = $STR_RHSSAF_PMA3_DISPLAYNAME;
		icon = "iconExplosiveAP";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\pma\rhssaf_pma3_e";
		descriptionShort = $STR_A3_cfgMagazines_ClassicMineRangeMagazine1;

		class Library
		{
			libTextDesc = "";
		};
	};
	class rhssaf_mine_tma4: MineBase
	{
		scope = 2;
		ammo = "rhssaf_mine_tma4_ammo";
		editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_mine_tma4";
		displayName = $STR_RHSSAF_TMA4_DISPLAYNAME;
		icon = "iconExplosiveAT";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_at\tma4\rhssaf_tma4_e";
		descriptionShort = $STR_A3_cfgMagazines_ClassicMineRangeMagazine1;

		class Library
		{
			libTextDesc = "";
		};
	};
	class rhssaf_mine_mrud_a: MineBase
	{
		scope = 2;
		ammo = "rhssaf_mine_mrud_a_ammo";
		editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_mine_mrud_a";
		displayName = $STR_RHSSAF_MRUD_A_DISPLAYNAME;
		icon = "iconExplosiveAT";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_a_e";
		descriptionShort = $STR_A3_cfgMagazines_ClassicMineWireMagazine1;

		class Library
		{
			libTextDesc = "";
		};
	};
	class rhssaf_mine_mrud_b: MineBase
	{
		scope = 2;
		ammo = "rhssaf_mine_mrud_b_ammo";
		editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_mine_mrud_b";
		displayName = $STR_RHSSAF_MRUD_B_DISPLAYNAME;
		icon = "iconExplosiveAP";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_b_e";
		descriptionShort = $STR_A3_cfgMagazines_ClassicMineWireMagazine1;

		class Library
		{
			libTextDesc = "";
		};
	};
	class rhssaf_mine_mrud_c: MineBase
	{
		scope = 2;
		ammo = "rhssaf_mine_mrud_c_ammo";
		editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_mine_mrud_c";
		displayName = $STR_RHSSAF_MRUD_C_DISPLAYNAME;
		icon = "iconExplosiveAP";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_c_e";
		descriptionShort = $STR_A3_cfgMagazines_ClassicMineWireMagazine1;

		class Library
		{
			libTextDesc = "";
		};
	};
	class rhssaf_mine_mrud_d: rhssaf_mine_mrud_a
	{
		scope = 2;
		ammo = "rhssaf_mine_mrud_d_ammo";
		editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_mine_mrud_d";
		displayName = $STR_RHSSAF_MRUD_D_DISPLAYNAME;
		icon = "iconExplosiveAPDirectional";
		model = "\rhssaf\addons\rhssaf_m_explosives\mines_ap\mrud\rhssaf_mrud_d_e";
		descriptionShort = $STR_A3_cfgMagazines_ClassicMineWireMagazine1;

		class Library
		{
			libTextDesc = "";
		};
	};
	class rhssaf_tm100: MineBase
	{
		mapSize = 0.31;
		scope = 2;
		ammo = "rhssaf_tm100_ammo";
		editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_tm100";
		displayName = $STR_RHSSAF_TM100_DISPLAYNAME;
		icon = "iconExplosiveGP";
		picture = "\A3\Weapons_F\Data\clear_empty.paa";
		model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm100_e";
		descriptionShort = $STR_A3_cfgMagazines_ClassicMineRangeMagazine1;

		class Library
		{
			libTextDesc = "";
		};
	};
	class rhssaf_tm200: rhssaf_tm100
	{
		scope = 2;
		ammo = "rhssaf_tm200_ammo";
		editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_tm200";
		displayName = $STR_RHSSAF_TM200_DISPLAYNAME;
		icon = "iconExplosiveGP";
		model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm200_e";
		descriptionShort = $STR_A3_cfgMagazines_ClassicMineRangeMagazine1;

		class Library
		{
			libTextDesc = "";
		};
	};
	class rhssaf_tm500: rhssaf_tm100
	{
		scope = 2;
		ammo = "rhssaf_tm500_ammo";
		editorPreview = "\rhssaf\addons\rhssaf_editorpreviews\data\rhssaf_tm500";
		displayName = $STR_RHSSAF_TM500_DISPLAYNAME;
		icon = "iconExplosiveGP";
		model = "\rhssaf\addons\rhssaf_m_explosives\tm500\rhssaf_tm500_e";
		descriptionShort = $STR_A3_cfgMagazines_ClassicMineRangeMagazine1;

		class Library
		{
			libTextDesc = "";
		};
	};
	/* MODULES */
	class Site_F;
	class Site_Minefield: Site_F
	{
		class Arguments
		{
			class minesType
			{
				class values
				{
					class rhssaf_pma3_mine
					{
						name = $STR_RHSSAF_PMA3_DISPLAYNAME;
						value = "rhssaf_mine_pma3";
						default = 0;
					};
					class rhssaf_tma4_mine
					{
						name = $STR_RHSSAF_TMA4_DISPLAYNAME;
						value = "rhssaf_mine_tma4";
						default = 0;
					};
					class rhssaf_mrud_a_mine
					{
						name = $STR_RHSSAF_MRUD_A_DISPLAYNAME;
						value = "rhssaf_mine_mrud_a";
						default = 0;
					};
				};
			};
		};
	};
	/* STATIC */
	#define ASSEMBLE_INFO(bagName, tripodName) \
			class assembleInfo \
			{ \
					primary = 0; \
				base = ""; \
				assembleTo = ""; \
				dissasembleTo[] = {bagName, tripodName}; \
				displayName = ""; \
			};

	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class Turrets
		{
			class MainTurret;
		};
		class EventHandlers;
	};
	class StaticMortar: StaticWeapon {};

		//M70 commando Mortar
	class rhs_m70c_60mm_base: StaticMortar
	{
		//EDPPREV(rhs_m70c_60mm_Base)
		dlc = "RHS_SAF";
		availableForSupportTypes[]={"Artillery"};
		displayname="M70C";
		vehicleClass = "rhs_vehclass_artillery";
		editorSubcategory = "rhs_EdSubcat_artillery";

		class Library
		{
			libTextDesc="";
		};
		model="\rhssaf\addons\rhssaf_m_weapon_m70c\rhssaf_m70c_60mm";
		icon="rhsafrf\addons\rhs_heavyweapons\data\mapico\icomap_podnos_2b14_CA.paa";
		picture="\rhsafrf\addons\rhs_heavyweapons\data\ico\rhs_2b14_82mm_msv_ca.paa";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"rhssaf\addons\rhssaf_t_weapon_m70c\data\rhssaf_m70c_co.paa"};
		transportSoldier=0;
		mapSize=1.5;
		cargoAction[] = {"Mortar_Gunner"};
		getInAction = "GetInMortar";
		getOutAction = "GetOutLow";

		class Damage
		{
			tex[]={};
			mat[]=
			{
				"rhssaf\addons\rhssaf_t_weapon_m70c\data\rhssaf_m70c.rvmat",
				"rhssaf\addons\rhssaf_t_weapon_m70c\data\rhssaf_m70c.rvmat",
				"rhsafrf\addons\rhs_heavyweapons\data\static_destroyed.rvmat"
			};
		};

		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerLeftHandAnimName="otochlaven";
				gunnerRightHandAnimName="otochlaven";
				//gunnerLeftLegAnimName="leg_left";
				//gunnerRightLegAnimName="leg_right";
				turretInfoType="RHS_RscWeaponZeroing";
				//discreteDistance[]={100,200,300,400,500,600,800,1000,1200,1500};
				//discreteDistanceInitIndex=2;
				weapons[]=
				{
					"rhs_weap_m70c"
				};
				magazines[]=
				{
					"rhssaf_mag_m73_HE"
				};
				gunnerAction = "rhssaf_m70c_Gunner";
				gunnerOpticsModel="\A3\weapons_f\reticle\optics_empty";
				memoryPointGunnerOptics = "gunnerview";
				animationSourceElevation = "ObsElevation";
				elevationAnimSourceSpeed = 0.2;
				cameraDir = "AimPoint";
				minElev = -85;
				maxelev = 5;
				minturn = -180;
				maxturn = 180;
				ejectDeadGunner = 1;
				usePIP=2;
				class ViewOptics
				{
					initAngleX=0; minAngleX=-30; maxAngleX=+30;
					initAngleY=0; minAngleY=-100; maxAngleY=+100;
					initFov=0.7; minFov=0.25; maxFov=1.1;
				};
			};
		};
		htMin = 1;
		htMax = 480;
		afMax = 0;
		mfMax = 0;
		mFact = 1;
		tBody = 100;
		artilleryScanner = 1;
		/*ASSEMBLE_INFO(rhs_Podnos_Gun_Bag,rhs_Podnos_Bipod_Bag)
		class Attributes {
			class rhs_ammoslot_1_type {
				displayName = "Ammo slot #1 type";
				tooltip = "Define type of shell for #1 slot [HE rounds]";
				property = "rhs_ammoslot_1_type";
				control = "Combo";
				expression = "_this setVariable ['%s', _value];";
				defaultValue = 0;
				typeName = "STRING";
				class values {
					LoadoutAmmoMacro(rhs_mag_3vo18,10)
				};
			};
			class rhs_ammoslot_1 {
				displayName = "Ammo slot #1 count";
				tooltip = "Define number of rounds stored inside of type #1. Max 40. Leave -1 for default loadout";
				property = "rhs_ammoslot_1";
				control = "Edit";
				expression = "if(_value >= 0)then{ [_this,_value,'%s',40,['rhs_ammoslot_1','rhs_ammoslot_2','rhs_ammoslot_3']] spawn rhs_fnc_Eden_DefineLoadout};";
				defaultValue = "-1";
				validate = "NUMBER";
				typeName = "NUMBER";
			};
			class rhs_ammoslot_2_type: rhs_ammoslot_1_type{
				displayName = "Ammo slot #2 type";
				tooltip = "Define type of shell for #2 slot [Illumination rounds]";
				property = "rhs_ammoslot_2_type";
				class values {
					LoadoutAmmoMacro(rhs_mag_3vs25m,10)
				};
			};
			class rhs_ammoslot_2: rhs_ammoslot_1 {
				displayName = "Ammo slot #2 count";
				tooltip = "Define number of rounds stored inside of type #2. Max 40. Leave -1 for default loadout";
				property = "rhs_ammoslot_2";
			};
			class rhs_ammoslot_3_type: rhs_ammoslot_1_type{
				displayName = "Ammo slot #3 type";
				tooltip = "Define type of shell for #3 slot [Smoke rounds]";
				property = "rhs_ammoslot_3_type";
				class values {
					LoadoutAmmoMacro(rhs_mag_d832du,10)
				};
			};
			class rhs_ammoslot_3: rhs_ammoslot_1 {
				displayName = "Ammo slot #3 count";
				tooltip = "Define number of rounds stored inside of type #3. Max 40. Leave -1 for default loadout";
				property = "rhs_ammoslot_3";
			};
		};*/
		class EventHandlers: Eventhandlers
		{
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
		};
	};
	class rhs_m70c_60mm_army: rhs_m70c_60mm_base
	{
		//EDPREV(rhs_m70c_60mm_army)
		side=2;
		scope=1;
		faction="rhssaf_faction_army";
		crew="rhssaf_army_m10_para_rifleman_g36";
		typicalCargo[]= {"rhssaf_army_m10_para_rifleman_g36"};
	};

	//Items
  class Item_Base_F;

	class Item_rhssaf_zrak_rd7j: Item_Base_F
	{
		SCOPE_PUBLIC;
		DLC_AUTHOR;
		displayName = $STR_ITEM_RHSSAF_ZRAK_RD7J_DISPLAYNAME;
		editorCategory = "EdCat_Equipment";
		editorSubcategory = "EdSubcat_InventoryItems";
		vehicleClass = "Items";
		//model = "\A3\Weapons_F\DummyBinoc.p3d";
		model = "\rhssaf\addons\rhssaf_binoculars\zrak_rd7j\rhssaf_zrak_rd7j";
		class TransportItems
		{
			class rhssaf_zrak_rd7j
			{
				name = "Zrak RD-7J";
				count = 1;
			};
		};
	};
};
