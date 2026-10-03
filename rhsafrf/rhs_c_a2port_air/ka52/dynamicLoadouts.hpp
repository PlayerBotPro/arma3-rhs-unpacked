			class TransportPylonsComponent
			{
				UIPicture = "\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Ka52_EDEN_CA.paa";
				class pylons
				{
					// max total weight - 1500kg
					class pylon1
					{
						hardpoints[]	= {
							"RHS_HP_FAB250_KA52","RHS_HP_FAB500_KA52","RHS_HP_KMGU2_KA52",
							"RHS_HP_B13L1_KA52","RHS_HP_B8V20_KA52","RHS_HP_UB16_KA52","RHS_HP_UB32_KA52",
							"RHS_HP_UPK23_KA52"
						};
						priority		= 1;
						attachment		= "rhs_mag_b8v20a_ka52_s8kom";
						maxweight		= 650;
						UIposition[]	= {0.504,0.40};
						turret[]		= {};
						hitpoint 		= HitPylon1;
					};
					class pylon2: pylon1 {UIposition[]	= {0.165,0.40}; mirroredMissilePos = 1; hitpoint = HitPylon2;};

					class pylon3: pylon1
					{
						hardpoints[]	= {
							"RHS_HP_FAB250",
							"RHS_HP_B13L1_KA52","RHS_HP_B8V20_KA52","RHS_HP_UB16_KA52","RHS_HP_UB32_KA52",
							"RHS_HP_UPK23_KA52",
							"RHS_HP_APU6_9m127_KA52"
						};
						attachment		= "rhs_mag_apu6_9m127m_ka52";
						maxweight		= 450;
						priority		= 2;
						UIposition[]	= {0.584,0.35};
						turret[]		= {0};
						hitpoint 		= HitPylon3;
					};
					class pylon4: pylon3 {UIposition[]	= {0.085,0.35}; mirroredMissilePos = 3; hitpoint = HitPylon4;};
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
							"rhs_mag_fab250_ka52",
							"rhs_mag_fab250_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Bomb";
					};
					class ClusterMine
					{
						attachment[] =
						{
							"rhs_mag_kmgu2_pfm1_ka52",
							"rhs_mag_kmgu2_pfm1_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "KMGU-2 (AP Mines)";
					};
					class ClusterHE
					{
						attachment[] =
						{
							"rhs_mag_kmgu2_ao25_ka52",
							"rhs_mag_kmgu2_ao25_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "KMGU-2 (HE)";
					};
					class UPK
					{
						attachment[] =
						{
							"rhs_mag_upk23_ka52_mixed",
							"rhs_mag_upk23_ka52_mixed",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "UPK-23-250";
					};
					class CAS
					{
						attachment[] =
						{
							"rhs_mag_b8v20a_ka52_s8kom",
							"rhs_mag_b8v20a_ka52_s8kom",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Close Air Support";
					};
					class HeavyCAS
					{
						attachment[] =
						{
							"rhs_mag_b13l1_ka52_s13b",
							"rhs_mag_b13l1_ka52_s13b",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_mag_apu6_9m127m_ka52",
							"rhs_UV26_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Close Air Support (S-13)";
					};
				};
			};