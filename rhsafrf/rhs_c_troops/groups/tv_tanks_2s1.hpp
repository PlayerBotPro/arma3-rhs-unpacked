
			class rhs_group_rus_tv_2S1
			{
				name = "2S1 Artillery";
				aliveCategory="Artillery";

				class RHS_SPGPlatoon_tv_2S1
				{
					name = "Artillery 2S1 Platoon";
					side = 0;
					faction = "rhs_faction_tv";
					
					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_2S1_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_2S1_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_2S1_tv";
						rank = "SERGEANT";
						position[] = {-20.1,-30,3};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_2S1_tv";
						rank = "CORPORAL";
						position[] = {40,-60,3};
					};
				};
				class RHS_SPGSection_tv_2S1
				{
					name = "Artillery 2S1 Section";
					side = 0;
					faction = "rhs_faction_tv";

					icon = "\A3\ui_f\data\map\markers\nato\o_art.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_2S1_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_2S1_tv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
				};
			};