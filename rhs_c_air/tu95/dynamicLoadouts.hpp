			class TransportPylonsComponent
			{
				UIPicture = "\rhsafrf\addons\rhs_air\tu95ms\loadouts\RHS_Tu95_EDEN_CA.paa";
				class pylons
				{
					class pylon1
					{
						hardpoints[]	= {"RHS_HP_TU95MS6_INT"};
						priority		= 6;
						attachment		= "rhs_mag_kh55sh";
						maxweight		= 2000;
						UIposition[]	= {0.333,0.52};
						bay				= 1;
						turret[] 		= {4}; 
					};
					class pylon2: pylon1 {UIposition[]	= {0.486,0.46}; bay = 2;priority = 5;};
					class pylon3: pylon1 {UIposition[]	= {0.486,0.41}; bay = 3;priority = 4;};
					class pylon4: pylon1 {UIposition[]	= {0.333,0.35}; bay = 4;priority = 3;};
					class pylon5: pylon1 {UIposition[]	= {0.18,0.41}; bay = 5;priority = 2;};
					class pylon6: pylon1 {UIposition[]	= {0.18,0.46}; bay = 6;priority = 1;};
				};

				class Bays
				{
					class Bay1
					{
						bayOpenTime					= 3.5;
						openBayWhenWeaponSelected	= 1.0;
						autoCloseWhenEmptyDelay		= 0.0;
					};
					class Bay2: Bay1 {};
					class Bay3: Bay1 {};
					class Bay4: Bay1 {};
					class Bay5: Bay1 {};
					class Bay6: Bay1 {};
				};
			};