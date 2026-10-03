
			class rhs_group_nato_usarmy_wd_M109
			{
				name = "M109 Artillery";
				aliveCategory="Artillery";

				class RHS_M109_wd_Platoon
				{
					name = "Artillery M109 Platoon";
					side = 1;
					faction = "rhs_faction_usarmy_wd";

					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_m109_usarmy";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_m109_usarmy";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_m109_usarmy";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_m109_usarmy";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_M109_wd_Section
				{
					name = "Artillery M109 Section";
					side = 1;
					faction = "rhs_faction_usarmy_wd";

					icon = "\A3\ui_f\data\map\markers\nato\b_art.paa";
					
					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_m109_usarmy";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_m109_usarmy";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
			};