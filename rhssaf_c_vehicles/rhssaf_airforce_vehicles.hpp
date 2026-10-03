// Mi17 domestic designation HT-48 (original Mi8MT, export Mi17)
// Mi8T domestic designation HT-40

class rhssaf_airforce_ht40: rhs_mi8t_base
{
	EDPREV(rhssaf_airforce_ht40)
	scope=2;
	displayname = $STR_RHSSAF_AIRFORCE_HT40_DISPLAYNAME;
	rhs_decalParameters[]={};

	crewMacroAirForceHeli
	hiddenselectionstextures[] =
	{
		"rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_body_camo_co.paa",
		"rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_det_camo_co.paa",
		"rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_tv2_camo_co.paa",
		"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_notext_ca.paa"
	};
};

class rhssaf_airforce_ht48: RHS_Mi8mt_Cargo_vvs
{
	EDPREV(rhssaf_airforce_ht48)
	scope=2;
	displayname = $STR_RHSSAF_AIRFORCE_HT48_DISPLAYNAME;
	rhs_decalParameters[]={};

	crewMacroAirForceHeli
	hiddenselectionstextures[] =
	{
		"rhssaf\addons\rhssaf_t_vehicle_ret\mi17\data\rhssaf_mi8_body_green_co.paa",
		"rhssaf\addons\rhssaf_t_vehicle_ret\mi8\rhssaf_mi8_det_camo_co.paa",
		"a3\data_f\clear_empty.paa",
		"rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_notext_ca.paa"
	};
};

// Mig-29 domestic designation L-18 (Lovac-18 / Hunter-18)

class rhssaf_airforce_l_18_101: rhs_mig29sm_base
{
	EDPREV(rhssaf_airforce_l_18_101)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName	= "L-18 (101/CAP)";
	crew="rhssaf_airforce_pilot_mig29";
	side=2;
	faction="rhssaf_faction_airforce";

	hiddenselectionstextures[]=
	{
		"rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_01_gray_co.paa",
		"rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_02_gray_co.paa",
		"rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_03_gray_co.paa"
	};

	textureList[] =	{	"RHS_SAF_Gray", 1	};

	rhs_decalParameters[]=
	{
		"['Number',cRHSAIRMIG29SerbianTailStaticNumberPlaces,'AviaSerbianTail', 18]",
		"['Number',[cRHSAIRMIG29SerbianTailDynamicNumberPlaces,cRHSAIRMIG29SerbianIntakeNumberPlaces],['AviaSerbianTail','AviaSerbianIntake'], [101]]"
	};

	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
				class pylon1: pylon1 { attachment = "rhs_mag_R27R_APU470"; };
				class pylon2: pylon2 { attachment = "rhs_mag_R27R_APU470"; };
				class pylon3: pylon3 { attachment = "rhs_mag_R73M_APU73"; };
				class pylon4: pylon4 { attachment = "rhs_mag_R73M_APU73"; };
				class pylon5: pylon5 { attachment = "rhs_mag_R73M_APU73"; };
				class pylon6: pylon6 { attachment = "rhs_mag_R73M_APU73"; };
				class pylon7: pylon7 {};
				class cmDispenser: cmDispenser {};
			};
		};
	};
};

class rhssaf_airforce_l_18: rhs_mig29sm_base
{
	EDPREV(rhssaf_airforce_l_18)
	DLC_AUTHOR;
	SCOPE_PUBLIC;
	displayName	= "L-18";
	crew="rhssaf_airforce_pilot_mig29";
	side=2;
	faction="rhssaf_faction_airforce";

	hiddenselectionstextures[]=
	{
		"rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_01_blue_co.paa",
		"rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_02_blue_co.paa",
		"rhssaf\addons\rhssaf_t_vehicle_ret\mig29\data\rhs_mig29_03_blue_co.paa"
	};

	textureList[] =
	{
		"RHS_SAF_Gray",0.6,
		"RHS_SAF_Blue",0.4
	};

	rhs_decalParameters[]=
	{
		"['Number', cRHSAIRMIG29SerbianTailStaticNumberPlaces,'AviaSerbianTail',  18]",
		"['Number', [cRHSAIRMIG29SerbianTailDynamicNumberPlaces,cRHSAIRMIG29SerbianIntakeNumberPlaces],['AviaSerbianTail','AviaSerbianIntake'],  [102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,123,124]]"
	};
	class Components: Components
	{
		class TransportPylonsComponent: TransportPylonsComponent
		{
			class pylons: pylons
			{
			class pylon1: pylon1 { attachment = "rhs_mag_b8m1_bd3_umk2a_s8kom"; };
        		class pylon2: pylon2 { attachment = "rhs_mag_b8m1_bd3_umk2a_s8kom"; };
        		class pylon3: pylon3 { attachment = "rhs_mag_b8m1_bd3_umk2a_s8df"; };
        		class pylon4: pylon4 { attachment = "rhs_mag_b8m1_bd3_umk2a_s8df"; };
        		class pylon5: pylon5 { attachment = "rhs_mag_R60M_APU60"; };
        		class pylon6: pylon6 { attachment = "rhs_mag_R60M_APU60"; };
			class pylon7: pylon7 {};
			class cmDispenser: cmDispenser {};
			};
		};
	};
};
