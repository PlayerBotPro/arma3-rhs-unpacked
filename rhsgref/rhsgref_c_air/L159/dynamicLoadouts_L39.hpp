
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						hardpoints[]	=
						{
							"RHS_HP_FAB250",
							"RHS_HP_B8M1","RHS_HP_UB16","RHS_HP_UB32",
							"RHS_HP_R73",
							"RHS_HP_L159_FUELPOD"
						};
						attachment			= rhs_mag_ub16_s5m1;
						priority			= 1;
						maxweight			= 200;
						UIposition[]		= {0.35,0.41};
						hitpoint			= HitPylon1;
					};
					class Pylons2: Pylons1
					{
						attachment			= rhs_mag_ub16_s5ko;
						UIposition[]		= {0.35,0.15};
						mirroredMissilePos	= 1;
						hitpoint 			= HitPylon2;
					};
				};
			};