			class TransportPylonsComponent
			{
				UIPicture = "\rhsusf\addons\rhsusf_himars\Pictures\RHS_M142_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]		= {"RHS_HP_MLRS","RHS_HP_GMLRS","RHS_HP_ATACMS"};
						priority			= 1;
						maxweight			= 2000;
						UIposition[]		= {0.45,0.275};
						bay					= -1;
						attachment			= "rhs_mag_m26a1_6";
						turret[] 			= {0};
						hitpoint 			= HitLauncher;
					};
				};
			};