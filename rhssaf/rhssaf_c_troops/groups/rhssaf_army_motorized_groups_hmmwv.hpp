
			class rhssaf_group_army_m1151
			{
				name = $STR_RHSSAF_GROUP_ARMY_M1151_NAME;
				aliveCategory="Motorized";

				class rhssaf_group_army_motorized_infantry_team_hmg
				{
					name = $STR_RHSSAF_GROUP_ARMY_MOTORIZED_INFANTRY_TEAM_HMG_NAME;
					side = 2;
					faction = "rhssaf_faction_army";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "rhssaf_m1025_olive_m2";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhssaf_army_m10_digital_mgun_m84";
						rank = "CORPORAL";
						position[] = {-12,-12,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhssaf_army_m10_digital_rifleman_at";
						rank = "PRIVATE";
						position[] = {14,-13,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhssaf_army_m10_digital_gl";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class rhssaf_group_army_motorized_infantry_team_at
				{
					name = $STR_RHSSAF_GROUP_ARMY_MOTORIZED_INFANTRY_TEAM_AT_NAME;
					side = 2;
					faction = "rhssaf_faction_army";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "rhssaf_m1025_olive";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhssaf_army_m10_digital_spec_at";
						rank = "CORPORAL";
						position[] = {13,-12,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhssaf_army_m10_digital_spec_at";
						rank = "CORPORAL";
						position[] = {-12,-13,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhssaf_army_m10_digital_asst_spec_at";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
				};
				class rhssaf_group_army_motorized_infantry_team_aa
				{
					name = $STR_RHSSAF_GROUP_ARMY_MOTORIZED_INFANTRY_TEAM_AA_NAME;
					side = 2;
					faction = "rhssaf_faction_army";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "rhssaf_m1025_olive";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhssaf_army_m10_digital_mgun_m84";
						rank = "CORPORAL";
						position[] = {13,-12,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhssaf_army_m10_digital_spec_aa";
						rank = "CORPORAL";
						position[] = {-12,-13,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhssaf_army_m10_digital_asst_spec_aa";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
				};
			};
