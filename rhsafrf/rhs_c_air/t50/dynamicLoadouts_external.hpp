			class TransportPylonsComponent: TransportPylonsComponent
			{
				class pylons: pylons
				{
					class pylonBayCenter1: pylonBayCenter1 {};
					class pylonBayCenter2: pylonBayCenter2 {};
					class pylonBayCenter3: pylonBayCenter3 {};
					class pylonBayCenter4: pylonBayCenter4 {};
					class pylonBayRight1: pylonBayRight1 {};
					class pylonBayLeft1: pylonBayLeft1 {};

					class pylons1
					{
						hardpoints[] = 
						{
							"RHS_HP_R77M_AKU170","RHS_HP_R77_AKU170","RHS_HP_R74",
							"RHS_HP_KAB250","RHS_HP_FAB500_BD3_USK_A",
							"RHS_HP_Kh38"
						};
						attachment  = "rhs_mag_Kh38mae";
						priority = 13;
						maxweight = 500;
						UIposition[] = {0.36,0.50};
					};
					class pylons2: pylons1 {UIposition[] = {0.36,0.05}; mirroredMissilePos = 7;};
					class pylons3: pylons1
					{
						attachment  = "rhs_mag_Kh38mae";
						priority = 11;
						maxweight = 700;
						UIposition[] = {0.36,0.45};
					};
					class pylons4: pylons3 {UIposition[] = {0.36,0.10};mirroredMissilePos = 9;};
					class pylons5: pylons1
					{
						attachment  = "rhs_mag_kab250";
						priority = 9;
						maxweight = 300;
						UIposition[] = {0.36,0.35};
					};
					class pylons6: pylons5 {UIposition[] = {0.36,0.20};mirroredMissilePos = 11;};
				};
				class Bays: Bays
				{
					class BayCenter1: BayCenter1 {};
					class BayCenter2: BayCenter2 {};
					class BayLeft1: BayLeft1 {};
					class BayRight1: BayRight1 {};
				};
			};