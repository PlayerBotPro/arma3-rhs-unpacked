
			class rhssaf_un_group_uaz
			{
				name = $STR_RHSSAF_UN_GROUP_UAZ_NAME;
				aliveCategory="Motorized";

				class rhssaf_group_un_motorized_infantry_team_at
				{
					name = $STR_RHSSAF_GROUP_UN_MOTORIZED_INFANTRY_TEAM_AT_NAME;
					side = 2;
					faction = "rhssaf_faction_un";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "rhssaf_un_uaz";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhssaf_un_m10_digital_desert_rifleman_at";
						rank = "CORPORAL";
						position[] = {13,-12,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhssaf_un_m10_digital_desert_spec_at";
						rank = "CORPORAL";
						position[] = {-12,-13,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhssaf_un_m10_digital_desert_asst_spec_at";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
				};
				class rhssaf_group_un_motorized_infantry_team_aa
				{
					name = $STR_RHSSAF_GROUP_UN_MOTORIZED_INFANTRY_TEAM_AA_NAME;
					side = 2;
					faction = "rhssaf_faction_un";
					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "rhssaf_un_uaz";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhssaf_un_m10_digital_desert_mgun_m84";
						rank = "CORPORAL";
						position[] = {13,-12,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhssaf_un_m10_digital_desert_spec_aa";
						rank = "CORPORAL";
						position[] = {-12,-13,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhssaf_un_m10_digital_desert_asst_spec_aa";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
				};
			};
