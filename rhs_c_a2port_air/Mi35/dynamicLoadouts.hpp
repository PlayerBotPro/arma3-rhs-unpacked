			class TransportPylonsComponent
			{
				UIPicture = "\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi24_EDEN_CA.paa";
				class pylons
				{
					// max total weight - 1500kg
					class pylon1
					{
						hardpoints[]	= {
							"RHS_HP_FAB250","RHS_HP_FAB500","RHS_HP_KMGU2",
							"RHS_HP_APU68M3_S24","RHS_HP_B13L1","RHS_HP_B8V20","RHS_HP_UB16","RHS_HP_UB32",
							"RHS_HP_UPK23"
						};
						priority		= 1;
						attachment		= "rhs_mag_fab250";
						maxweight		= 550;
						UIposition[]	= {0.503,0.30};
						turret[]		= {0};
					};
					class pylon2: pylon1 {UIposition[]	= {0.165,0.30}; mirroredMissilePos = 1;};

					class pylon3: pylon1
					{
						hardpoints[]	= {
							"RHS_HP_FAB250",
							"RHS_HP_APU68M3_S24","RHS_HP_B8V20","RHS_HP_UB16","RHS_HP_UB32",
							"RHS_HP_UPK23",
							"RHS_HP_9m17_Mi24","RHS_HP_9m114_Mi24","RHS_HP_9m120_Mi24"
						};
						attachment		= "rhs_mag_b8v20a_s8kom";
						maxweight		= 400;
						priority		= 2;
						UIposition[]	= {0.583,0.35};
						turret[]		= {};
					};
					class pylon4: pylon3 {UIposition[]	= {0.085,0.35}; mirroredMissilePos = 3;};

					class pylon5: pylon1
					{
						hardpoints[]	= {
							"RHS_HP_9m17_Mi24","RHS_HP_9m114_Mi24","RHS_HP_9m120_Mi24","RHS_HP_Empty_Mi24"
						};
						priority		= 4;
						bay 			= 1;
						attachment		= "rhs_mag_9M120M_Mi24_2x";		
						maxweight		= 150;					
						UIposition[]	= {0.628,0.40};
						turret[]		= {0};
					};
					class pylon6: pylon5 {UIposition[] = {0.04,0.40}; mirroredMissilePos = 5; };
					class cmDispenser
					{
						hardpoints[]	= {"RHS_cm_ASO2","RHS_cm_ASO2_x2","RHS_cm_ASO2_x4"};
						priority		= 1;
						attachment		= "rhs_ASO2_CMFlare_Chaff_Magazine_x4";
						maxweight		= 800;
						UIposition[]	= {0.33,0.0};
					};
				};
                class Bays
                {
                	// Missile can be also mounted on 3 & 4 so it's quite tricky to get it working this way
                    class 9S475_Hatch
                    {
                        bayOpenTime               = 1;
                        openBayWhenWeaponSelected = 1.0;   
                        autoCloseWhenEmptyDelay   = -1;
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
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Bomb";
					};
					class UPK
					{
						attachment[] =
						{
							"rhs_mag_upk23_mixed",
							"rhs_mag_upk23_mixed",
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "UPK-23-250";
					};
					class AT
					{
						attachment[] =
						{
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Anti Tank";
					};
					class CAS
					{
						attachment[] =
						{
							"rhs_mag_b8v20a_s8df",
							"rhs_mag_b8v20a_s8df",
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_b8v20a_s8kom",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_mag_9M120M_Mi24_2x",
							"rhs_ASO2_CMFlare_Chaff_Magazine_x4"
						};
						displayname = "Close Air Support";
					};
				};
			};