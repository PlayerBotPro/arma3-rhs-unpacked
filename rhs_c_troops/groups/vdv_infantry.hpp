
			class rhs_group_rus_vdv_infantry
			{
				name = "$STR_RHS_GROUP_vdv_infantry";
				aliveCategory="Infantry";

				class rhs_group_rus_vdv_infantry_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_vdv";
					side=0;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\o_hq.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					faction = "rhs_faction_vdv";
					side=0;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_arifleman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};/*
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 0;
						vehicle = "rhs_vdv_medic";
						rank = "PRIVATE";
						position[] = {17,0,0};
					};*/
				};
				class rhs_group_rus_vdv_infantry_squad_2mg
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					faction = "rhs_faction_vdv";
					side=0;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_arifleman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_arifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_squad_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_vdv";
					side=0;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_arifleman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_squad_mg_sniper
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					faction = "rhs_faction_vdv";
					side=0;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_arifleman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_arifleman";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_section_mg
				{
					name = "$STR_RHS_GROUPS_SECTION_MG";
					faction = "rhs_faction_vdv";
					side=0;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_arifleman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_arifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_section_marksman
				{
					name = "$STR_RHS_GROUPS_SECTION_MARKSMAN";
					faction = "rhs_faction_vdv";
					side=0;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_marksman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_section_AT
				{
					name = "$STR_RHS_GROUPS_SECTION_AT";
					faction = "rhs_faction_vdv";
					side=0;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_at";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_lat";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_section_AA
				{
					name = "$STR_RHS_GROUPS_SECTION_AA";
					faction = "rhs_faction_vdv";
					side=0;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_junior_sergeant";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_aa";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_rifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_fireteam
				{
					name = "$STR_RHS_GROUPS_RUS_FIRETEAM";
					faction = "rhs_faction_vdv";
					side=0;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_arifleman";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_machinegunner_assistant";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
				class rhs_group_rus_vdv_infantry_MANEUVER
				{
					name = "$STR_RHS_GROUPS_RUS_MANEUVER";
					faction = "rhs_faction_vdv";
					side=0;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\o_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_efreitor";
						rank = "CORPORAL";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_LAT";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
				};
			};