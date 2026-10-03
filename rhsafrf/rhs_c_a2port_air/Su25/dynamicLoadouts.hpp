			class TransportPylonsComponent
			{
				UIPicture = "\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Su25_EDEN_CA.paa";
				class pylons
				{
					// max total weight - 4530kg
					class pylon1
					{
						hardpoints[]	= {
							"RHS_HP_KH29",
							"RHS_HP_FAB100","RHS_HP_FAB100_MBD3_U4T","RHS_HP_FAB100_MBD3_U6","RHS_HP_FAB250","RHS_HP_FAB500","RHS_HP_KMGU2",
							"RHS_HP_O25L","RHS_HP_APU68M3_S24","RHS_HP_B13L","RHS_HP_B8M1","RHS_HP_UB16","RHS_HP_UB32",
							"RHS_HP_R73"
						};
						priority		= 9;
						attachment		= "rhs_mag_fab250";
						hitpoint 		= HitPylon1;
						maxweight		= 1200;
						UIposition[]	= {0.32,0.35};
					};
					class pylon2: pylon1 {UIposition[]	= {0.32,0.20}; mirroredMissilePos = 1;hitpoint = HitPylon2;};

					class pylon3: pylon1
					{
						hardpoints[]	= {
							"RHS_HP_KH25",
							"RHS_HP_FAB100","RHS_HP_FAB100_MBD3_U4T","RHS_HP_FAB100_MBD3_U6","RHS_HP_FAB250","RHS_HP_FAB500","RHS_HP_KMGU2",
							"RHS_HP_O25L","RHS_HP_APU68M3_S24","RHS_HP_B13L","RHS_HP_B8M1","RHS_HP_UB16","RHS_HP_UB32",
							"RHS_HP_R73"
						};
						priority		= 7;
						hitpoint 		= HitPylon3;
						UIposition[]	= {0.33,0.40};
					};
					class pylon4: pylon3 {UIposition[]	= {0.33,0.15}; mirroredMissilePos = 3;hitpoint = HitPylon4;};

					class pylon5: pylon1
					{
						hardpoints[]	= {
							"RHS_HP_KH25",
							"RHS_HP_FAB100","RHS_HP_FAB100_MBD3_U4T","RHS_HP_FAB100_MBD3_U6","RHS_HP_FAB250","RHS_HP_FAB500","RHS_HP_KMGU2",
							"RHS_HP_O25L","RHS_HP_APU68M3_S24","RHS_HP_B13L","RHS_HP_B8M1","RHS_HP_UB16","RHS_HP_UB32",
							"RHS_HP_R73"
						};
						priority		= 10;
						attachment		= "rhs_mag_b8m1_s8kom";
						hitpoint 		= HitPylon5;
						maxweight		= 1200;
						UIposition[]	= {0.34,0.45};
					};
					class pylon6: pylon5 {UIposition[] = {0.34,0.10}; mirroredMissilePos = 5;hitpoint = HitPylon6;};

					class pylon7: pylon1
					{
						hardpoints[]	= {
							"RHS_HP_FAB100","RHS_HP_FAB100_MBD3_U4T","RHS_HP_FAB100_MBD3_U6","RHS_HP_FAB250","RHS_HP_FAB500","RHS_HP_KMGU2",
							"RHS_HP_O25L","RHS_HP_APU68M3_S24","RHS_HP_B13L","RHS_HP_B8M1","RHS_HP_UB16","RHS_HP_UB32",
							"RHS_HP_R73"
						};
						priority		= 11;
						attachment		= "rhs_mag_b8m1_s8df";
						hitpoint 		= HitPylon7;
						maxweight		= 1200;
						UIposition[]	= {0.35,0.50};
					};

					class pylon8: pylon7 {UIposition[] = {0.35,0.05}; mirroredMissilePos = 7;hitpoint = HitPylon8;};
					class pylon9: pylon1
					{
						hardpoints[]	= {"RHS_HP_R60"};
						priority		= 12;
						attachment		= "rhs_mag_R60M";
						hitpoint 		= HitPylon9;
						maxweight		= 1200;
						UIposition[]	= {0.36,0.55};
					};
					class pylon10: pylon9 {UIposition[] = {0.36,0.00}; mirroredMissilePos = 9;hitpoint = HitPylon10;};
					class cmDispenser
					{
						hardpoints[]	= {"RHS_cm_ASO2","RHS_cm_ASO2_x2","RHS_cm_ASO2_x4"};
						priority		= 1;
						attachment		= "rhs_ASO2_CMFlare_Chaff_Magazine_x4";
						maxweight		= 800;
						UIposition[]	= {0.625,0.275};
					};
				};
				class Presets
				{
					class CAS
					{
						attachment[] =
						{
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Close Air Support";
					};
					class HeavyCAS
					{
						attachment[] =
						{
							"rhs_mag_b13l_s13b",
							"rhs_mag_b13l_s13b",
							"rhs_mag_b13l_s13t",
							"rhs_mag_b13l_s13t",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Close Air Support (S-13)";
					};
					class GroundSupress_S24B
					{
						attachment[] =
						{
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_apu68m3_s24b",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Ground Supress (S-24B)";
					};
					class Bomb
					{
						attachment[] =
						{
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Bomb (FAB-250)";
					};
					class HeavyBomb
					{
						attachment[] =
						{
							"rhs_mag_fab500",
							"rhs_mag_fab500",
							"rhs_mag_fab500",
							"rhs_mag_fab500",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Bomb (FAB-500)";
					};
					class AT
					{
						attachment[] =
						{
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Anti Tank (Kh-25ML)";
					};
					class HeavyAT
					{
						attachment[] =
						{
							"rhs_mag_kh29ML",
							"rhs_mag_kh29ML",
							"rhs_mag_fab250",
							"rhs_mag_fab250",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Anti Tank (Kh-29ML)";
					};
					class HeavyATMix
					{
						attachment[] =
						{
							"rhs_mag_kh29ML",
							"rhs_mag_kh29ML",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_kh25ML",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Anti Tank (Mixed)";
					};
					class Cluster
					{
						attachment[] =
						{
							"rhs_mag_rbk250_ao1",
							"rhs_mag_rbk250_ao1",
							"rhs_mag_rbk250_ao1",
							"rhs_mag_rbk250_ao1",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Heavy CAS (S-13)";
					};
					class KMGU
					{
						attachment[] =
						{
							"rhs_mag_kmgu2_ao25",
							"rhs_mag_kmgu2_ao25",
							"rhs_mag_kmgu2_ao25",
							"rhs_mag_kmgu2_ao25",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8kom",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_b8m1_s8df",
							"rhs_mag_R60M",
							"rhs_mag_R60M",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "KMGU-2";
					};
				};
			};