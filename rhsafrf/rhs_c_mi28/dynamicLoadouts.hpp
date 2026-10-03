			class TransportPylonsComponent
			{
				UIPicture = "\rhsafrf\addons\rhs_mi28\data\loadouts\RHS_Mi28_EDEN_CA.paa";
				class pylons
				{
					// max total weight - 1500kg
					class pylon1
					{
						hardpoints[]	= {
							"RHS_HP_FAB250","RHS_HP_FAB500",
							"RHS_HP_B13L1","RHS_HP_B8V20","RHS_HP_UB16","RHS_HP_UB32",
							"RHS_HP_UPK23"
						};
						priority		= 1;
						attachment		= "rhs_mag_b8v20a_s8kom";
						maxweight		= 550;
						UIposition[]	= {0.54,0.40};
						turret[]		= {};
						hitpoint 		= HitPylon1;
					};
					class pylon2: pylon1 {UIposition[]	= {0.12,0.40}; mirroredMissilePos = 1; hitpoint = HitPylon2;};

					class pylon3: pylon1
					{
						hardpoints[]	= {
							"RHS_HP_FAB250","RHS_HP_FAB500",
							"RHS_HP_B13L1","RHS_HP_B8V20","RHS_HP_UB16","RHS_HP_UB32",
							"RHS_HP_9m120_Mi28"
						};
						attachment		= "rhs_mag_9M120M_Mi28_8x";
						maxweight		= 400;
						priority		= 2;
						UIposition[]	= {0.60,0.45};
						turret[]		= {0};
						hitpoint 		= HitPylon3;
					};
					class pylon4: pylon3 {UIposition[]	= {0.06,0.45}; mirroredMissilePos = 3; hitpoint = HitPylon4;};
					class cmDispenser
					{
						hardpoints[]	= {"RHS_cm_UV26","RHS_cm_UV26_x2","RHS_cm_UV26_x4"};
						priority		= 1;
						attachment		= "rhs_UV26_CMFlare_Chaff_Magazine_x4";
						maxweight		= 800;
						UIposition[]	= {0.33,0.0};
					};
				};
				class Presets
				{
					class Bomb
					{
						attachment[] =
						{
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Bomb";
					};
					class HeavyBomb
					{
						attachment[] =
						{
							"rhs_mag_fab500",
							"rhs_mag_fab500",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Heavy Bomb";
					};
					class ClusterMine
					{
						attachment[] =
						{
							"rhs_mag_kmgu2_pfm1",
							"rhs_mag_kmgu2_pfm1",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "KMGU-2 (AP Mines)";
					};
					class ClusterHE
					{
						attachment[] =
						{
							"rhs_mag_kmgu2_ao25",
							"rhs_mag_kmgu2_ao25",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "KMGU-2 (HE)";
					};
					class UPK
					{
						attachment[] =
						{
							"rhs_mag_upk23_mixed",
							"rhs_mag_upk23_mixed",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "UPK-23-250";
					};
					class CAS
					{
						attachment[] =
						{
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Close Air Support";
					};
					class HeavyCAS
					{
						attachment[] =
						{
							"rhs_mag_b13l1_s13b",
							"rhs_mag_b13l1_s13b",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_mag_9M120M_Mi28_8x",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Close Air Support (S-13)";
					};
					class Rockets
					{
						attachment[] =
						{
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_b8v20a_s8df",
							"rhs_mag_b8v20a_s8df",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Rockets";
					};
				};
			};