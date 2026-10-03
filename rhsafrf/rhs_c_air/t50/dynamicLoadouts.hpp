			class TransportPylonsComponent
			{
				UIPicture = "\rhsafrf\addons\rhs_air\t50\data\loadouts\RHS_T50_EDEN_CA.paa";
				class pylons
				{
					class pylonBayCenter1
					{
						hardpoints[]	= {"RHS_HP_R77","RHS_HP_R77M","RHS_HP_KAB250_INT","RHS_HP_Kh38_INT"};
						priority		= 9;
						attachment		= "rhs_mag_R77M";
						maxweight		= 1200;
						UIposition[]	= {0.27,0.30};
						bay				= 1;
					};
					class pylonBayCenter2: pylonBayCenter1{UIposition[]	= {0.27,0.25}; mirroredMissilePos = 1;};

					class pylonBayCenter3: pylonBayCenter1
					{
						priority		= 7;
						UIposition[]	= {0.45,0.25};
						bay				= 2;
					};
					class pylonBayCenter4: pylonBayCenter3{UIposition[]	= {0.45,0.30}; mirroredMissilePos = 3;};

					class pylonBayRight1
					{
						hardpoints[]	= {"RHS_HP_R74M2_int"};
						priority		= 10;
						attachment		= "rhs_mag_R74M2_int";		
						maxweight		= 1200;					
						UIposition[]	= {0.18,0.37};				
						bay				= 4; 						
					};
					class pylonBayLeft1: pylonBayRight1{UIposition[] = {0.18,0.18}; mirroredMissilePos = 4; bay = 3;};
				};

				class Bays
				{
					//Bay.1 animation source in model config
					class BayCenter1
					{
						bayOpenTime					= 0.5;
						openBayWhenWeaponSelected	= 0.0;
						autoCloseWhenEmptyDelay		= 4.5;
					};
					//Bay.2 animation source in model config
					class BayCenter2: BayCenter1 {};
					//Bay.3 animation source in model config
					class BayLeft1
					{
						bayOpenTime					= 0.5;
						openBayWhenWeaponSelected	= 0.0; 
						autoCloseWhenEmptyDelay		= 2.0; 
					};

					//Bay.4 animation source in model config
					class BayRight1: BayLeft1 {};
				};
			};