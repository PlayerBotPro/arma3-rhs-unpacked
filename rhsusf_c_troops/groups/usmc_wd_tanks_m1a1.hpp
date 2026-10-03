
			class rhs_group_nato_usmc_wd_m1a1
			{
				name = "M1A1 Groups";
				aliveCategory="Armored";

				class RHS_M1A1AIM_wd_Platoon
				{
					name = "M1A1FEP Platoon";
					side = 1;
					faction = "rhs_faction_usmc_wd";

					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_m1a1fep_wd";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_m1a1fep_wd";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_m1a1fep_wd";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_m1a1fep_wd";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				
				class RHS_M1A1FEP_wd_Section
				{
					name = "M1A1FEP Section";
					side = 1;
					faction = "rhsusf_m1a1fep_wd";

					icon = "\A3\ui_f\data\map\markers\nato\b_armor.paa";
					
					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_m1a1fep_wd";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_m1a1fep_wd";
						rank = "SERGEANT";
						position[] = {-20,-30,2};
					};
				};
			};
