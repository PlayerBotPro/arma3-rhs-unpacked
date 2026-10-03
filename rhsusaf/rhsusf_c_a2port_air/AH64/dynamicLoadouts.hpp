			class TransportPylonsComponent
			{
				UIPicture = "\rhsusf\addons\rhsusf_a2port_air\data\loadouts\RHS_AH64_EDEN_CA.paa";
				class pylons
				{
					class pylonTip1
					{
						hardpoints[]		= {"RHS_HP_AIM9_HELI_ARMY","RHS_HP_ATAS_AH64"};
						priority			= 3;
						attachment			= "";
						maxweight			= 1200;
						UIposition[]		= {0.625,0.28};
						bay					= -1;
						hitpoint 			= HitPylon1;
					};
					class pylon2
					{
						hardpoints[]		= {"RHS_HP_LONGBOW_RACK","RHS_HP_FFAR_ARMY"};
						priority			= 2;
						attachment			= "rhs_mag_M151_19";
						maxweight			= 1200;
						UIposition[]		= {0.625,0.40};
						bay					= -1;
						turret[] 			= {};
						hitpoint 			= HitPylon2;
					};
					class pylon3 : pylon2
					{
						UIposition[]		= {0.562,0.45};
						priority			= 1;
						attachment			= "rhs_mag_AGM114L_4";
						turret[]			= {0};
						hitpoint 			= HitPylon3;
					};
					class pylon4 : pylon3
					{
						UIposition[]		= {0.103,0.45};
						mirroredMissilePos	= 3;
						attachment			= "rhs_mag_AGM114K_4";
						turret[]			= {0};
						hitpoint 			= HitPylon4;
					};
					class pylon5 : pylon2
					{
						UIposition[]		= {0.04,0.40};
						mirroredMissilePos	= 2;
						turret[]			= {};
						hitpoint 			= HitPylon5;
					};
					class pylonTip6 : pylonTip1
					{
						UIposition[]		= {0.04,0.28};
						mirroredMissilePos	= 1;
						hitpoint 			= HitPylon6;
					};
					class cmDispenser
					{
						hardpoints[]	= {"RHSUSF_cm_M130","RHSUSF_cm_M130_x2"};
						priority		= 1;
						attachment		= "rhsusf_M130_CMFlare_Chaff_Magazine_x2";
						maxweight		= 800;
						UIposition[]	= {0.33,0.0};
					};
				};
				class Presets
				{
					class MR
					{
						attachment[] =
						{
							"",
							"rhs_mag_M151_19",
							"rhs_mag_AGM114K_4",
							"rhs_mag_AGM114N_4",
							"rhs_mag_M151_19",
							"",
							"rhsusf_M130_CMFlare_Chaff_Magazine_x2"
						};
						displayname = "Multi-Role";
					};
					class MR_L
					{
						attachment[] =
						{
							"",
							"rhs_mag_M151_19",
							"rhs_mag_AGM114L_4",
							"rhs_mag_AGM114K_4",
							"rhs_mag_M151_19",
							"",
							"rhsusf_M130_CMFlare_Chaff_Magazine_x2"
						};
						displayname = "Multi-Role (Longbow)";
					};
					class CS
					{
						attachment[] =
						{
							"",
							"rhs_mag_AGM114K_4",
							"rhs_mag_AGM114N_4",
							"rhs_mag_AGM114N_4",
							"rhs_mag_AGM114K_4",
							"",
							"rhsusf_M130_CMFlare_Chaff_Magazine_x2"
						};
						displayname = "Close Support";
					};
					class CS_L
					{
						attachment[] =
						{
							"",
							"rhs_mag_AGM114K_4",
							"rhs_mag_AGM114L_4",
							"rhs_mag_AGM114L_4",
							"rhs_mag_AGM114K_4",
							"",
							"rhsusf_M130_CMFlare_Chaff_Magazine_x2"
						};
						displayname = "Close Support (Longbow)";
					};
					class GS
					{
						attachment[] =
						{
							"",
							"rhs_mag_M151_19",
							"rhs_mag_M151_19",
							"rhs_mag_M151_19",
							"rhs_mag_M151_19",
							"",
							"rhsusf_M130_CMFlare_Chaff_Magazine_x2"
						};
						displayname = "Ground Suppression";
					};
					class AA
					{
						attachment[] =
						{
							"rhs_mag_Sidewinder_heli",
							"rhs_mag_M151_19",
							"rhs_mag_AGM114K_4",
							"rhs_mag_AGM114N_4",
							"rhs_mag_M151_19",
							"rhs_mag_Sidewinder_heli",
							"rhsusf_M130_CMFlare_Chaff_Magazine_x2"
						};
						displayname = "AA";
					};
					class AA_L
					{
						attachment[] =
						{
							"rhs_mag_Sidewinder_heli",
							"rhs_mag_M151_19",
							"rhs_mag_AGM114L_4",
							"rhs_mag_AGM114K_4",
							"rhs_mag_M151_19",
							"rhs_mag_Sidewinder_heli",
							"rhsusf_M130_CMFlare_Chaff_Magazine_x2"
						};
						displayname = "AA (Longbow)";
					};
				};
			};