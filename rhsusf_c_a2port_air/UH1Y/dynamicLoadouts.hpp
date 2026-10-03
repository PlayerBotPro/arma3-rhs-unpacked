			class TransportPylonsComponent
			{
				UIPicture = "\rhsusf\addons\rhsusf_a2port_air2\data\loadouts\RHS_UH1_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]		= {"RHS_HP_FFAR_USMC"};
						UIposition[]		= {0.573,0.44};
						maxweight			= 1200;
						priority			= 1;
						attachment			= "rhs_mag_M151_7_green";
						bay					= -1;
						hitpoint 			= HitPylon1;
					};
					class pylon2 : pylon1
					{
						UIposition[]		= {0.10,0.44};
						mirroredMissilePos	= 1;
						hitpoint 			= HitPylon2;
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
					class Empty
					{
						attachment[] =
						{
							"",
							""
						};
						displayname = "<empty>";
					};
					class FFAR
					{
						attachment[] =
						{
							"rhs_mag_M151_7_green",
							"rhs_mag_M151_7_green",
							"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "FFAR";
					};
					class GS
					{
						attachment[] =
						{
							"rhs_mag_M151_19_green",
							"rhs_mag_M151_19_green",
							"rhsusf_ANALE39_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Ground Suppression";
					};
				};
			};