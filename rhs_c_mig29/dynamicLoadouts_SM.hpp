			class TransportPylonsComponent
			{
				UIPicture = "\rhsafrf\addons\rhs_mig29\data\loadouts\RHS_MiG29_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]	= {
							"RHS_HP_KH25_APU68_MIG29","RHS_HP_KH29_AKU58_MIG29",
							"RHS_HP_FAB100_BD3_UMK2A","RHS_HP_FAB100_MBD3_U4T","RHS_HP_FAB250_BD3_UMK2A","RHS_HP_FAB500_BD3_UMK2A","RHS_HP_KAB500_BD3_UMK2A","RHS_HP_KMGU2_BD3_UMK2A",
							"RHS_HP_BD3_USK_A_O25L","RHS_HP_APU68_BD3_UMK2A","RHS_HP_B13L_BD3_UMK2A","RHS_HP_B8M1_BD3_UMK2A","RHS_HP_UB16_BD3_UMK2A","RHS_HP_UB32_BD3_UMK2A",
							"RHS_HP_R77M_AKU170_MIG29","RHS_HP_R77_AKU170_MIG29","RHS_HP_R27_APU470","RHS_HP_R60_APU60","RHS_HP_R73_APU73","RHS_HP_PTB1150"
						};
						priority		= 9;
						attachment		= "rhs_mag_R27ER_APU470";
						maxweight		= 1200;
						UIposition[]	= {0.32,0.20};
						hitpoint 		= HitPylon1;
					};
					class pylon2: pylon1 {UIposition[]	= {0.32,0.35}; mirroredMissilePos = 1; hitpoint = HitPylon2;};

					class pylon3: pylon1
					{
						hardpoints[]	= {							
							"RHS_HP_KH25_APU68_MIG29",
							"RHS_HP_FAB100_BD3_UMK2A","RHS_HP_FAB100_MBD3_U4T","RHS_HP_FAB250_BD3_UMK2A","RHS_HP_FAB500_BD3_UMK2A","RHS_HP_KAB500_BD3_UMK2A","RHS_HP_KMGU2_BD3_UMK2A",
							"RHS_HP_BD3_USK_A_O25L","RHS_HP_APU68_BD3_UMK2A","RHS_HP_B13L_BD3_UMK2A","RHS_HP_B8M1_BD3_UMK2A","RHS_HP_UB16_BD3_UMK2A","RHS_HP_UB32_BD3_UMK2A",
							"RHS_HP_R77M_AKU170_MIG29","RHS_HP_R77_AKU170_MIG29","RHS_HP_R60_APU60","RHS_HP_R73_APU73"
						};
						priority		= 7;
						UIposition[]	= {0.33,0.15};
						attachment		= "rhs_mag_R73M_APU73";
						hitpoint 		= HitPylon3;
					};
					class pylon4: pylon3 {UIposition[]	= {0.33,0.40}; mirroredMissilePos = 3; hitpoint = HitPylon4;};

					class pylon5: pylon1
					{
						hardpoints[]	= {
							"RHS_HP_R77M_AKU170_MIG29","RHS_HP_R77_AKU170_MIG29","RHS_HP_R60_APU60","RHS_HP_R73_APU73"
						};
						priority		= 10;
						attachment		= "rhs_mag_R73M_APU73";
						maxweight		= 1200;
						UIposition[]	= {0.34,0.10};
						hitpoint 		= HitPylon5;
					};
					class pylon6: pylon5 {UIposition[] = {0.34,0.45}; mirroredMissilePos = 5; hitpoint = HitPylon6;};
					class pylon7: pylon1
					{
						hardpoints[]	= {
							"RHS_HP_PTB1500"
						};
						priority		= 1;
						UIposition[]	= {0.33,0.275};
						attachment		= "";
						hitpoint 		= HitPylon7;
					};
					class cmDispenser
					{
						hardpoints[]	= {"RHS_cm_BVP3026","RHS_cm_BVP3026_x2"};
						priority		= 1;
						attachment		= "rhs_BVP3026_CMFlare_Chaff_Magazine_x2";
						maxweight		= 800;
						UIposition[]	= {0.625,0.275};
					};
				};
				class Presets
				{
					class Bomb
					{
						attachment[] =
						{
							"rhs_mag_fab500_bd3_umk2a",
							"rhs_mag_fab500_bd3_umk2a",
							"rhs_mag_fab500_bd3_umk2a",
							"rhs_mag_fab500_bd3_umk2a",
							"rhs_mag_R73M_APU73",
							"rhs_mag_R73M_APU73",
							"rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
						};
						displayname = "Bomb";
					};
					class LaserBomb
					{
						attachment[] =
						{
							"rhs_mag_kab500kr_bd3_umk2a",
							"rhs_mag_kab500kr_bd3_umk2a",
							"rhs_mag_kab500kr_bd3_umk2a",
							"rhs_mag_kab500kr_bd3_umk2a",
							"rhs_mag_R73M_APU73",
							"rhs_mag_R73M_APU73",
							"rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
						};
						displayname = "Guided bombs";
					};
					class AirToGround
					{
						attachment[] =
						{
							"rhs_mag_kh29T_aku58_mig29",
							"rhs_mag_kh29T_aku58_mig29",
							"rhs_mag_b8m1_bd3_umk2a_s8df",
							"rhs_mag_b8m1_bd3_umk2a_s8df",
							"rhs_mag_R73M_APU73",
							"rhs_mag_R73M_APU73",
							"rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
						};
						displayname = "Kh-29T";
					};
					class KMGU
					{
						attachment[] =
						{
							"rhs_mag_kmgu2_ao25_bd3_umk2a",
							"rhs_mag_kmgu2_ao25_bd3_umk2a",
							"rhs_mag_kmgu2_ao25_bd3_umk2a",
							"rhs_mag_kmgu2_ao25_bd3_umk2a",
							"rhs_mag_R73M_APU73",
							"rhs_mag_R73M_APU73",
							"rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
						};
						displayname = "KMGU-2 (AO-2.5)";
					};
					class AA
					{
						attachment[] =
						{
							"rhs_mag_R27ER_APU470",
							"rhs_mag_R27ER_APU470",
							"rhs_mag_R73M_APU73",
							"rhs_mag_R73M_APU73",
							"rhs_mag_R73M_APU73",
							"rhs_mag_R73M_APU73",
							"rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
						};
						displayname = "Anti Air";
					};
					class CAS
					{
						attachment[] =
						{
							"rhs_mag_b8m1_bd3_umk2a_s8kom",
							"rhs_mag_b8m1_bd3_umk2a_s8kom",
							"rhs_mag_b8m1_bd3_umk2a_s8df",
							"rhs_mag_b8m1_bd3_umk2a_s8df",
							"rhs_mag_R73M_APU73",
							"rhs_mag_R73M_APU73",
							"rhs_BVP3026_CMFlare_Chaff_Magazine_x2"
						};
						displayname = "Close Air Support";
					};
				};
			};