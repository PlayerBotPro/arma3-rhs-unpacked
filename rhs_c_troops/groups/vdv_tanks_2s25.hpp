
			class rhs_group_rus_vdv_2s25
			{
				name = "Tank (2S25)";
				aliveCategory="Armored";

				class RHS_2S25Platoon
				{
					name = "2S25 Platoon";
					side = 0;
					faction = "rhs_faction_vdv";

					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_sprut_vdv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_sprut_vdv";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_sprut_vdv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_2S25Platoon_AA
				{
					name = "2S25 Platoon (Combined)";
					side = 0;
					faction = "rhs_faction_vdv";

					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_sprut_vdv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_zsu234_aa";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_sprut_vdv";
						rank = "SERGEANT";
						position[] = {-20,-30,3};
					};
				};
				class RHS_2S25Section
				{
					name = "2S25 Section";
					side = 0;
					faction = "rhs_faction_vdv";

					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_sprut_vdv";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_sprut_vdv";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};

			};