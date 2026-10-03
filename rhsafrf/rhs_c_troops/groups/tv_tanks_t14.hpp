
			class rhs_group_rus_tv_14
			{
				name = "T-14 Groups";
				aliveCategory="Armored";

				class RHS_T14Platoon
				{
					name = "T-14 Platoon";
					side = 0;
					faction = "rhs_faction_tv";

					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

					class Unit0
					{
						side = 0;
						vehicle = "RHS_T14_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T14_tv";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T14_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T14Platoon_AA
				{
					name = "T-14 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_tv";

					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

					class Unit0
					{
						side = 0;
						vehicle = "RHS_T14_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20.1,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_T14_tv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_T14Section
				{
					name = "T-14 Section";
					side = 0;
					faction = "rhs_faction_tv";

					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 0;
						vehicle = "RHS_T14_tv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_T14_tv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
			};
