			class TransportPylonsComponent
			{
				UIPicture = "\rhsusf\addons\rhsusf_f22\data\loadouts\RHS_F22_EDEN_CA.paa";
				class pylons
				{
					class pylonBayLeft1
					{
						hardpoints[]		= {"RHS_HP_AIM9_int"};
						priority		= 2;
						attachment		= "rhs_mag_Sidewinder_int";		
						maxweight		= 1200;					
						UIposition[]		= {0.36,0.40};				
						bay			= 1; 						
					};
					class pylonBayCenter1
					{
						hardpoints[]		= {"RHS_HP_aim120_int"};
						priority		= 1;
						attachment		= "rhs_mag_aim120d_int";
						maxweight		= 1200;
						UIposition[]		= {0.36,0.35};
						bay			= 2;
					};
					class pylonBayCenter2: pylonBayCenter1
					{
						hardpoints[]		= {"RHS_HP_aim120_int","RHS_HP_F22_lBay","RHS_HP_JDAM_500","RHS_HP_JDAM_1000"};
						attachment		= "rhs_mag_aim120d_2_F22_l";
						UIposition[]		= {0.36,0.30};
					};
					class pylonBayCenter3: pylonBayCenter1
					{
						hardpoints[]		= {"RHS_HP_aim120_int","RHS_HP_F22_rBay","RHS_HP_JDAM_500","RHS_HP_JDAM_1000"};
						attachment		= "rhs_mag_aim120d_2_F22_r";
						UIposition[]		= {0.36,0.25};
						bay			= 3;
					};
					class pylonBayCenter4: pylonBayCenter3
					{
						hardpoints[]		= {"RHS_HP_aim120_int"};
						attachment		= "rhs_mag_aim120d_int";
						UIposition[]		= {0.36,0.20};
						mirroredMissilePos	= 2;
					};

					class pylonBayRight1: pylonBayLeft1
					{
						UIposition[]		= {0.36,0.15};
						mirroredMissilePos	= 1;
						bay			= 4;
					};
					class cmDispenser
					{
						hardpoints[]	= {"RHSUSF_cm_ANALE52","RHSUSF_cm_ANALE52_x2","RHSUSF_cm_ANALE52_x4","RHSUSF_cm_ANALE52_x6"};
						priority		= 1;
						attachment		= "rhsusf_ANALE52_CMFlare_Chaff_Magazine_x4";
						maxweight		= 800;
						UIposition[]	= {0.625,0.275};
					};
				};

				class Bays
				{
					class BayLeft1
					{
						bayOpenTime			= 0.5;
						openBayWhenWeaponSelected	= 1.0; 
						autoCloseWhenEmptyDelay		= 1.0; 
					};
					class BayCenter1
					{
						bayOpenTime			= 0.5;
						openBayWhenWeaponSelected	= 0.0;
						autoCloseWhenEmptyDelay		= 4.5;
					};
					class BayCenter2: BayCenter1 {};
					class BayRight1: BayLeft1 {};
				};
			};