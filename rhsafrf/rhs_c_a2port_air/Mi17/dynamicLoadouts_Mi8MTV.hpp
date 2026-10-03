			class TransportPylonsComponent
			{
				UIPicture = "\rhsafrf\addons\rhs_a2port_air\data\loadouts\RHS_Mi8_EDEN_CA.paa";
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
						attachment		= "rhs_mag_b8v20a_s8kom";
						maxweight		= 1200;
						UIposition[]	= {0.525,0.48};
						hitpoint		= HitPylon1;
					};
					class pylon2: pylon1 {UIposition[]	= {0.14,0.48}; mirroredMissilePos = 1; hitpoint = HitPylon2;};

					class pylon3: pylon1
					{
						hardpoints[]	= {
							"RHS_HP_FAB250","RHS_HP_FAB500",
							"RHS_HP_APU68M3_S24","RHS_HP_B8V20","RHS_HP_UB16","RHS_HP_UB32",
							"RHS_HP_UPK23"
						};
						attachment		= "rhs_mag_b8v20a_s8df";
						maxweight		= 1200;
						priority		= 2;
						UIposition[]	= {0.575,0.43};
						hitpoint		= HitPylon3;
					};
					class pylon4: pylon3 {UIposition[]	= {0.09,0.43}; mirroredMissilePos = 3; hitpoint = HitPylon4;};
					class pylon5
					{
						hardpoints[]	= {};
						priority		= 4;
						attachment		= "";		
						maxweight		= 400;					
						UIposition[]	= {0,0.6};
					};
					class pylon6: pylon5 {UIposition[] = {0,0.6}; mirroredMissilePos = 5;};
					class cmDispenser
					{
						hardpoints[]	= {"RHS_cm_ASO2","RHS_cm_ASO2_x2","RHS_cm_ASO2_x4","RHS_cm_ASO2_x6"};
						priority		= 1;
						attachment		= "rhs_ASO2_CMFlare_Chaff_Magazine_x6";
						maxweight		= 800;
						UIposition[]	= {0.33,0.0};
					};
				};
			};