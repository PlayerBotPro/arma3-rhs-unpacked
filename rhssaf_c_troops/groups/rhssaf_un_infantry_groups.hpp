
		class rhssaf_group_un_infantry
		{
			name = $STR_RHSSAF_GROUP_UN_INFANTRY_NAME;
			aliveCategory="Infantry";

			class rhssaf_group_un_infantry_company_hq
			{
				name = $STR_RHSSAF_GROUP_UN_INFANTRY_COMPANY_HQ_NAME;
				faction = "rhssaf_faction_un";
				side = 2;
				rarityGroup = 0.75;

				icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";

				class Unit0 // Co CO
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_officer";
					rank = "CAPTAIN";
					position[] = {0,5,0};
				};
				class Unit1 // XO
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_officer";
					rank = "LIEUTENANT";
					position[] = {-5,0,0};
				};
				class Unit2 // Senior RATELO
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_sq_lead";
					rank = "SERGEANT";
					position[] = {3,0,0};
				};
				class Unit3 // CO RATELO / Messenger
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_rifleman_m21";
					rank = "PRIVATE";
					position[] = {5,0,0};
				};
			};

			class rhssaf_group_un_infantry_platoon_hq
			{
				name = $STR_RHSSAF_GROUP_UN_INFANTRY_PLATOON_HQ_NAME;
				faction = "rhssaf_faction_un";
				side = 2;
				rarityGroup = 0.75;

				icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";

				class Unit0 // Pl CO
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_officer";
					rank = "LIEUTENANT";
					position[] = {0,5,0};
				};
				class Unit1 // Pl SGT
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_sq_lead";
					rank = "SERGEANT";
					position[] = {-5,0,0};
				};
				class Unit2 // Medic
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_medic";
					rank = "SERGEANT";
					position[] = {3,0,0};
				};
				class Unit3 // FO
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_sq_lead";
					rank = "SERGEANT";
					position[] = {5,0,0};
				};
				class Unit4 // FO RATELO
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_rifleman_m21";
					rank = "PRIVATE";
					position[] = {7,0,0};
				};
				class Unit5 // Pl CO RATELO
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_rifleman_m70";
					rank = "PRIVATE";
					position[] = {9,0,0};
				};
			};

			class rhssaf_group_un_infantry_infantry_squad
			{
				name = $STR_RHSSAF_GROUP_UN_INFANTRY_INFANTRY_SQUAD_NAME;
				faction = "rhssaf_faction_un";
				side = 2;
				rarityGroup = 0.75;

				icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

				class Unit0
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_sq_lead";
					rank = "SERGEANT";
					position[] = {0,5,0};
				};
				class Unit1
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_ft_lead";
					rank = "CORPORAL";
					position[] = {-5,0,0};
				};
				class Unit2
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_rifleman_m21";
					rank = "PRIVATE";
					position[] = {3,0,0};
				};
				class Unit3
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_mgun_m84";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit4
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_gl";
					rank = "PRIVATE";
					position[] = {7,0,0};
				};
				class Unit5
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_ft_lead";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit6
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_mgun_m84";
					rank = "PRIVATE";
					position[] = {11,0,0};
				};
				class Unit7
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_gl";
					rank = "PRIVATE";
					position[] = {13,0,0};
				};
				class Unit8
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_rifleman_at";
					rank = "PRIVATE";
					position[] = {15,0,0};
				};
			};
			class rhssaf_group_un_infantry_infantry_weaponsquad
			{
				name = $STR_RHSSAF_GROUP_UN_INFANTRY_INFANTRY_WEAPONSQUAD_NAME;
				faction = "rhssaf_faction_un";
				side = 2;
				rarityGroup = 0.75;

				icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

				class Unit0
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_sq_lead";
					rank = "SERGEANT";
					position[] = {0,5,0};
				};
				class Unit1
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_mgun_m84";
					rank = "CORPORAL";
					position[] = {-5,0,0};
				};
				class Unit2
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_asst_mgun";
					rank = "PRIVATE";
					position[] = {3,0,0};
				};
				class Unit3
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_gl";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit4
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_mgun_m84";
					rank = "PRIVATE";
					position[] = {7,0,0};
				};
				class Unit5
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_mgun_m84";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit6
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_gl";
					rank = "PRIVATE";
					position[] = {11,0,0};
				};
				class Unit7
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_rifleman_at";
					rank = "PRIVATE";
					position[] = {13,0,0};
				};
			};
			class rhssaf_group_un_infantry_infantry_squad_sniper
			{
				name = $STR_RHSSAF_GROUP_UN_INFANTRY_INFANTRY_SQUAD_SNIPER_NAME;
				faction = "rhssaf_faction_un";
				side = 2;
				rarityGroup = 0.75;

				icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

				class Unit0
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_sq_lead";
					rank = "SERGEANT";
					position[] = {0,5,0};
				};
				class Unit1
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_ft_lead";
					rank = "CORPORAL";
					position[] = {-5,0,0};
				};
				class Unit2
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_sniper_m76";
					rank = "PRIVATE";
					position[] = {3,0,0};
				};
				class Unit3
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_asst_mgun";
					rank = "CORPORAL";
					position[] = {5,0,0};
				};
				class Unit4
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_gl";
					rank = "PRIVATE";
					position[] = {7,0,0};
				};
				class Unit5
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_ft_lead";
					rank = "CORPORAL";
					position[] = {9,0,0};
				};
				class Unit6
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_mgun_m84";
					rank = "PRIVATE";
					position[] = {11,0,0};
				};
				class Unit7
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_gl";
					rank = "PRIVATE";
					position[] = {13,0,0};
				};
				class Unit8
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_rifleman_at";
					rank = "PRIVATE";
					position[] = {15,0,0};
				};
			};
			class rhssaf_group_un_infantry_infantry_team
			{
				name = $STR_RHSSAF_GROUP_UN_INFANTRY_INFANTRY_TEAM_NAME;
				faction = "rhssaf_faction_un";
				side = 2;
				rarityGroup = 0.75;

				icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

				class Unit0
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_ft_lead";
					rank = "SERGEANT";
					position[] = {0,5,0};
				};
				class Unit1
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_mgun_m84";
					rank = "PRIVATE";
					position[] = {-5,0,0};
				};
				class Unit2
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_gl";
					rank = "PRIVATE";
					position[] = {3,0,0};
				};
				class Unit3
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_rifleman_at";
					rank = "PRIVATE";
					position[] = {5,0,0};
				};
			};
			class rhssaf_group_un_infantry_infantry_team_mg
			{
				name = $STR_RHSSAF_GROUP_UN_INFANTRY_INFANTRY_TEAM_MG_NAME;
				faction = "rhssaf_faction_un";
				side = 2;
				rarityGroup = 0.75;

				icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

				class Unit0
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_ft_lead";
					rank = "SERGEANT";
					position[] = {0,5,0};
				};
				class Unit1
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_mgun_m84";
					rank = "SERGEANT";
					position[] = {-5,0,0};
				};
				class Unit2
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_gl";
					rank = "PRIVATE";
					position[] = {3,0,0};
				};
				class Unit3
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_asst_mgun";
					rank = "PRIVATE";
					position[] = {5,0,0};
				};
			};
			class rhssaf_group_un_infantry_infantry_team_AA
			{
				name = $STR_RHSSAF_GROUP_UN_INFANTRY_INFANTRY_TEAM_AA_NAME;
				faction = "rhssaf_faction_un";
				side = 2;
				rarityGroup = 0.75;

				icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

				class Unit0
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_ft_lead";
					rank = "SERGEANT";
					position[] = {0,5,0};
				};
				class Unit1
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_mgun_m84";
					rank = "SERGEANT";
					position[] = {-5,0,0};
				};
				class Unit2
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_gl";
					rank = "PRIVATE";
					position[] = {3,0,0};
				};
				class Unit3
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_spec_aa";
					rank = "PRIVATE";
					position[] = {5,0,0};
				};
			};
			class rhssaf_group_un_infantry_infantry_team_support
			{
				name = $STR_RHSSAF_GROUP_UN_INFANTRY_INFANTRY_TEAM_SUPPORT_NAME;
				faction = "rhssaf_faction_un";
				side = 2;
				rarityGroup = 0.75;

				icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

				class Unit0
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_ft_lead";
					rank = "SERGEANT";
					position[] = {0,5,0};
				};
				class Unit1
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_mgun_m84";
					rank = "SERGEANT";
					position[] = {-5,0,0};
				};
				class Unit2
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_gl";
					rank = "PRIVATE";
					position[] = {3,0,0};
				};
				class Unit3
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_medic";
					rank = "PRIVATE";
					position[] = {5,0,0};
				};
			};
			class rhssaf_group_un_infantry_infantry_team_heavy_at
			{
				name = $STR_RHSSAF_GROUP_UN_INFANTRY_INFANTRY_TEAM_HEAVY_AT_NAME;
				faction = "rhssaf_faction_un";
				side = 2;
				rarityGroup = 0.75;

				icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

				class Unit0
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_ft_lead";
					rank = "SERGEANT";
					position[] = {0,5,0};
				};
				class Unit1
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_mgun_m84";
					rank = "PRIVATE";
					position[] = {-5,0,0};
				};
				class Unit2
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_gl";
					rank = "PRIVATE";
					position[] = {3,0,0};
				};
				class Unit3
				{
					side = 2;
					vehicle = "rhssaf_un_m10_digital_desert_spec_at";
					rank = "PRIVATE";
					position[] = {5,0,0};
				};
			};
		};
