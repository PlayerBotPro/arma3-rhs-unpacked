			class TransportPylonsComponent
			{
				UIPicture = "\rhsusf\addons\rhsusf_a2port_air2\data\loadouts\RHS_AH1_EDEN_CA.paa";
				class pylons
				{
					class pylonTip1
					{
						hardpoints[]		= {"RHS_HP_AIM9_HELI_USMC"};
						priority			= 3;
						attachment			= "rhs_mag_Sidewinder_heli_2";
						maxweight			= 1200;
						UIposition[]		= {0.625,0.25};
						bay					= -1;
						hitpoint 			= HitPylon1;
					};
					class pylon2
					{
						hardpoints[]		= {"RHS_HP_HELLFIRE_RACK","RHS_HP_FFAR_USMC"};
						priority			= 2;
						attachment			= "rhs_mag_AGM114K_4";
						maxweight			= 1200;
						UIposition[]		= {0.625,0.39};
						bay					= -1;
						turret[] 			= {0};
						hitpoint 			= HitPylon2;
					};
					class pylon3 : pylon2
					{
						UIposition[]		= {0.565,0.44};
						priority			= 1;
						attachment			= "rhs_mag_M151_19_green";
						turret[] 			= {};
						hitpoint 			= HitPylon3;
					};
					class pylon4 : pylon3
					{
						UIposition[]		= {0.10,0.44};
						mirroredMissilePos	= 3;
						turret[] 			= {};
						hitpoint 			= HitPylon4;
					};
					class pylon5 : pylon2
					{
						UIposition[]		= {0.04,0.39};
						mirroredMissilePos	= 2;
						turret[]			 = {0};
						hitpoint 			= HitPylon5;
					};
					class pylonTip6 : pylonTip1
					{
						UIposition[]		= {0.04,0.25};
						mirroredMissilePos	= 1;
						hitpoint 			= HitPylon6;
					};
					class cmDispenser
					{
						hardpoints[]	= {"RHSUSF_cm_ANALE39","RHSUSF_cm_ANALE39_x2","RHSUSF_cm_ANALE39_x4"};
						priority		= 1;
						attachment		= "rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4";
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
							"rhs_mag_Sidewinder_heli_2",
							"rhs_mag_AGM114K_4",
							"rhs_mag_M151_19_green",
							"rhs_mag_M151_19_green",
							"rhs_mag_AGM114K_4",
							"rhs_mag_Sidewinder_heli_2",
							"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Multi-Role";
					};
					class CS
					{
						attachment[] =
						{
							"rhs_mag_Sidewinder_heli_2",
							"rhs_mag_AGM114K_4",
							"rhs_mag_AGM114K_4",
							"rhs_mag_AGM114K_4",
							"rhs_mag_AGM114K_4",
							"rhs_mag_Sidewinder_heli_2",
							"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Close Support";
					};
					class GS
					{
						attachment[] =
						{
							"rhs_mag_Sidewinder_heli_2",
							"rhs_mag_M151_19_green",
							"rhs_mag_M151_19_green",
							"rhs_mag_M151_19_green",
							"rhs_mag_M151_19_green",
							"rhs_mag_Sidewinder_heli_2",
							"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Ground Suppression";
					};
				};
			};