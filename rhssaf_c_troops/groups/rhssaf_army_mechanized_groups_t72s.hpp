
			class rhssaf_group_army_t72
			{
				name = $STR_RHSSAF_GROUP_ARMY_T72_NAME;
				aliveCategory="Armored";

				class rhssaf_army_group_t72s_platoon
				{
					name = $STR_RHSSAF_ARMY_GROUP_T72S_PLATOON_NAME;
					side = 2;
					faction = "rhssaf_faction_army";

					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";

					class Unit0
					{
						side = 2;
						vehicle = "rhssaf_army_t72s";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhssaf_army_t72s";
						rank = "SERGEANT";
						position[] = {20,-30,3};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhssaf_army_t72s";
						rank = "SERGEANT";
						position[] = {-21,-30,3};
					};
				};
				class rhssaf_army_group_t72s_section
				{
					name = $STR_RHSSAF_ARMY_GROUP_T72S_SECTION_NAME;
					side = 2;
					faction = "rhssaf_faction_army";

					icon = "\A3\ui_f\data\map\markers\nato\o_armor.paa";
					class Unit0
					{
						side = 2;
						vehicle = "rhssaf_army_t72s";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhssaf_army_t72s";
						rank = "SERGEANT";
						position[] = {20,-30,2};
					};
				};
			};
