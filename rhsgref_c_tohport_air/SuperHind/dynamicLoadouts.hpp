			class TransportPylonsComponent
			{
				UIPicture = "\rhsgref\addons\rhsgref_tohport_air\SuperHind\loadouts\RHS_Mi24G_EDEN_CA.paa";
				class pylons
				{
					// max total weight - 1500kg
					class pylon1
					{
						hardpoints[]	= {
							"RHS_HP_FAB250","RHS_HP_FAB500",
							"RHS_HP_APU68M3_S24","RHS_HP_B13L1","RHS_HP_B8V20","RHS_HP_UB16","RHS_HP_UB32",
							"RHS_HP_UPK23"
						};
						priority		= 1;
						attachment		= "rhs_mag_b8v20a_s8df";
						maxweight		= 550;
						UIposition[]	= {0.503,0.30};
						turret[]		= {};
						hitpoint		= HitPylon1;
					};
					class pylon2: pylon1 {UIposition[]	= {0.165,0.30}; mirroredMissilePos = 1; hitpoint = HitPylon2;};

					class pylon3: pylon1
					{
						hardpoints[]	= {
							"RHS_HP_FAB250",
							"RHS_HP_APU68M3_S24","RHS_HP_B8V20","RHS_HP_UB16","RHS_HP_UB32",
							"RHS_HP_UPK23"
						};
						attachment		= "rhs_mag_b8v20a_s8kom";
						maxweight		= 400;
						priority		= 2;
						UIposition[]	= {0.583,0.35};
						turret[]		= {};
						hitpoint		= HitPylon3;
					};
					class pylon4: pylon3 {UIposition[]	= {0.085,0.35}; mirroredMissilePos = 3; hitpoint = HitPylon4;};

					class pylon5: pylon1
					{
						hardpoints[]	= {"RHS_HP_MOKOPA","RHS_HP_INGWE"};
						priority		= 4;
						attachment		= "rhs_mag_zt3_4";
						maxweight		= 250;
						UIposition[]	= {0.628,0.40};
						turret[]		= {0};
						hitpoint		= HitPylon5;
					};
					class pylon6: pylon5 {UIposition[] = {0.04,0.40}; mirroredMissilePos = 5; hitpoint = HitPylon6;};
					class cmDispenser
					{
						hardpoints[]	= {"RHS_cm_ASO2","RHS_cm_ASO2_x2","RHS_cm_ASO2_x4"};
						priority		= 1;
						attachment		= "rhs_ASO2_CMFlare_Chaff_Magazine_x4";
						maxweight		= 800;
						UIposition[]	= {0.33,0.0};
					};
				};
			};