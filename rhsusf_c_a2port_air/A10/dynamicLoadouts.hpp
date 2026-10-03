			class TransportPylonsComponent
			{
				UIPicture = "\rhsusf\addons\rhsusf_a2port_air\data\loadouts\RHS_A10_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]		= {"RHS_HP_AIM9_2x","RHS_HP_LGB_500","RHS_HP_ECM"};
						priority			= 5;
						maxweight			= 1200;
						UIposition[]		= {0.30,0.55};
						bay					= -1;
						attachment			= "rhs_mag_ANALQ131";
						hitpoint 			= HitPylon1;
					};
					class pylon2
					{
						hardpoints[]		= {"RHS_HP_LGB_500","RHS_HP_FFAR_USAF","RHS_HP_HYDRA_USAF"};
						priority			= 4;
						maxweight			= 1200;
						UIposition[]		= {0.30,0.50};
						bay					= -1;
						attachment			= "rhs_mag_M151_7_USAF_LAU131";
						hitpoint 			= HitPylon2;
					};
					class pylon3
					{
						hardpoints[]		= {"RHS_HP_LGB_500","RHS_HP_LGB_1000","RHS_HP_FFAR_USAF","RHS_HP_FFAR_USAF_3x","RHS_HP_HYDRA_USAF","RHS_HP_HYDRA_USAF_3x","RHS_HP_AGM65_3x","RHS_HP_BOMB_500_3x"};
						priority			= 3;
						maxweight			= 1200;
						UIposition[]		= {0.30,0.45};
						bay					= -1;
						attachment			= "rhs_mag_agm65d";
						hitpoint 			= HitPylon3;
					};
					class pylon4
					{
						hardpoints[]		= {"RHS_HP_LGB_500","RHS_HP_LGB_1000","RHS_HP_FFAR_USAF","RHS_HP_HYDRA_USAF","RHS_HP_FFAR_USAF_3x","RHS_HP_HYDRA_USAF_3x","RHS_HP_BOMB_500_3x"};
						priority			= 2;
						maxweight			= 1200;
						UIposition[]		= {0.35,0.375};
						bay					= -1;
						attachment			= "rhs_mag_gbu12";
						hitpoint 			= HitPylon4;
					};
					class pylon5
					{
						hardpoints[]		= {"RHS_HP_LGB_500","RHS_HP_LGB_1000","RHS_HP_FFAR_USAF","RHS_HP_HYDRA_USAF"};
						priority			= 1;
						maxweight			= 1200;
						UIposition[]		= {0.35,0.325};
						bay					= -1;
						attachment			= "rhs_mag_gbu12";
						hitpoint 			= HitPylon5;
					};
					class pylon6
					{
						hardpoints[]		= {};
						priority			= 1;
						maxweight			= 1200;
						UIposition[]		= {0.35,0.275};
						bay					= -1;
						attachment			= "";
						hitpoint 			= HitPylon6;
					};
					class pylon7: pylon5
					{
						UIposition[]		= {0.35,0.225};
						mirroredMissilePos 	= 5;
						hitpoint 			= HitPylon7;
					};
					class pylon8: pylon4
					{
						UIposition[]		= {0.35,0.175};
						mirroredMissilePos 	= 4;
						hitpoint 			= HitPylon8;
					};
					class pylon9: pylon3
					{
						UIposition[]		= {0.30,0.10};
						mirroredMissilePos	= 3;
						hitpoint 			= HitPylon9;
					};
					class pylon10: pylon2
					{
						UIposition[]		= {0.30,0.05};
						mirroredMissilePos	= 2;
						hitpoint 			= HitPylon10;
					};
					class pylon11: pylon1
					{
						hardpoints[]		= {"RHS_HP_AIM9_2x","RHS_HP_LGB_500"};
						UIposition[]		= {0.30,0.00};
						attachment			= "rhs_mag_aim9m_2";
						mirroredMissilePos	= 1;
						hitpoint 			= HitPylon11;
					};
					class cmDispenser
					{
						hardpoints[]	= {"RHSUSF_cm_ANALE40_x2","RHSUSF_cm_ANALE40_x4","RHSUSF_cm_ANALE40_x8","RHSUSF_cm_ANALE40_x16"};
						priority		= 1;
						attachment		= "rhsusf_ANALE40_CMFlare_Chaff_Magazine_x16";
						maxweight		= 800;
						UIposition[]	= {0.625,0.275};
					};
				};
				class Presets
				{
					class AT
					{
						attachment[] =
						{
							"rhs_mag_ANALQ131",
							"rhs_mag_M151_7_USAF_LAU131",
							"rhs_mag_agm65d_3",
							"rhs_mag_gbu12",
							"rhs_mag_gbu12",
							"",
							"rhs_mag_gbu12",
							"rhs_mag_gbu12",
							"rhs_mag_agm65d_3",
							"rhs_mag_M151_7_USAF_LAU131",
							"rhs_mag_aim9m_2",
							"rhsusf_ANALE40_CMFlare_Chaff_Magazine_x16"
						};
						displayname = "Anti-Tank";
					};
					class CAS
					{
						attachment[] =
						{
							"rhs_mag_ANALQ131",
							"rhs_mag_M151_7_USAF_LAU131",
							"rhs_mag_agm65d",
							"rhs_mag_gbu12",
							"rhs_mag_gbu12",
							"",
							"rhs_mag_gbu12",
							"rhs_mag_gbu12",
							"rhs_mag_agm65d",
							"rhs_mag_M151_7_USAF_LAU131",
							"rhs_mag_aim9m_2",
							"rhsusf_ANALE40_CMFlare_Chaff_Magazine_x16"
						};
						displayname = "Close Air Support";
					};
				};
			};