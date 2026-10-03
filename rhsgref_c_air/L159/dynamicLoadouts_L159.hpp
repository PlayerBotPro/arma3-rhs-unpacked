
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]	= 
						{
							"RHS_HP_AGM65",
							"RHS_HP_FFAR_USAF","RHS_HP_Hydra_USAF",
							"RHS_HP_AIM9","RHS_HP_AIM120"
						};
						attachment		= rhs_mag_Sidewinder;
						priority		= 5;
						maxweight		= 200;  // max total al pylons 2,340 kg
						UIposition[]	= {0.35,0.08};
						hitpoint		= HitPylon1;
					};
					class Pylons2: Pylons1
					{
						priority		= 4;
						attachment		= rhs_mag_FFAR_7_USAF;
						maxweight		= 320;
						UIposition[]	= {0.345,0.13};
						hitpoint		= HitPylon2;
					};
					class Pylons3: Pylons1
					{
						hardpoints[]	= 
						{
							"RHS_HP_AGM65",
							"RHS_HP_FFAR_USAF","RHS_HP_Hydra_USAF",
							"RHS_HP_LGB_500","RHS_HP_BOMB_500_3x",
							"RHS_HP_AIM9","RHS_HP_AIM120",
							"RHS_HP_ZPL20","RHS_HP_L159_FUELPOD"
						};
						priority		= 3;
						attachment		= rhs_mag_mk82;
						maxweight		= 400;
						UIposition[]	= {0.34,0.18};
						hitpoint		= HitPylon3;
					};
					class Pylons4: Pylons1 // center
					{
						priority		= 2;
						attachment		= rhs_mag_zpl20_hei;
						maxweight		= 500;
						UIposition[]	= {0.27,0.28};
						hardpoints[]	= {"RHS_HP_ZPL20","RHS_HP_L159_FUELPOD"};
						hitpoint		= HitPylon4;
					};
					class Pylons5: Pylons3 {UIposition[] = {0.33,0.38}; mirroredMissilePos = 3; hitpoint = HitPylon5;}; // mirror the rest
					class Pylons6: Pylons2 {UIposition[] = {0.33,0.43}; mirroredMissilePos = 2; hitpoint = HitPylon6;};
					class Pylons7: Pylons1 {UIposition[] = {0.34,0.48}; mirroredMissilePos = 1; hitpoint = HitPylon7;};
					class cmDispenser
					{
						hardpoints[]	= {"RHSUSF_cm_ANALE40","RHSUSF_cm_ANALE40_x2"};
						priority		= 1;
						attachment		= "rhsusf_ANALE40_CMFlare_Chaff_Magazine_x2";
						maxweight		= 800;
						UIposition[]	= {0.625,0.275};
					};
				};
			};