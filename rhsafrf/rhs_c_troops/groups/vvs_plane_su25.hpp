
			class rhs_group_rus_tv_2s3
			{
				name = "Su-25 (in-air)";

				class RHS_vvs_platoon_su25
				{
					name = "Su-25 Platoon";
					side = 0;
					faction = "rhs_faction_vvs";

					icon = "\A3\ui_f\data\map\markers\nato\o_plane.paa";

					class Unit0
					{
						side = 0;
						vehicle = "RHS_Su25SM_vvs";
						rank = "LIEUTENANT";
						position[] = {0,0,150};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_Su25SM_vvs";
						rank = "SERGEANT";
						position[] = {-20,-30,150};
					};
					class Unit2
					{
						side = 0;
						vehicle = "RHS_Su25SM_vvs";
						rank = "SERGEANT";
						position[] = {20,-30,150};
					};
					class Unit3
					{
						side = 0;
						vehicle = "RHS_Su25SM_vvs";
						rank = "CORPORAL";
						position[] = {40,-60,150};
					};
				};
				class RHS_vvs_section_su25
				{
					name = "Su-25 Section";
					side = 0;
					faction = "rhs_faction_vvs";

					icon = "\A3\ui_f\data\map\markers\nato\o_plane.paa";
					
					class Unit0
					{
						side = 0;
						vehicle = "RHS_Su25SM_vvs";
						rank = "LIEUTENANT";
						position[] = {0,0,150};
					};
					class Unit1
					{
						side = 0;
						vehicle = "RHS_Su25SM_vvs";
						rank = "SERGEANT";
						position[] = {-20,-30,150};
					};
				};
			};