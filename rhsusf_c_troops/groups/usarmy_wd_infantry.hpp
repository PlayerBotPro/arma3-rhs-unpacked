
			class rhs_group_nato_usarmy_wd_infantry
			{
				name = "$STR_RHS_GROUP_USARMY_infantry";
				aliveCategory="Infantry";

				class rhs_group_nato_usarmy_wd_company_hq
				{
					name = "$STR_RHSUSF_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_usarmy_wd";
					side = 1;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";

					class Unit0 // Co CO
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_officer";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1 // XO
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_officer";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2 // Senior RATELO
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_squadleader";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3 // CO RATELO / Messenger
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_rifleman_m4";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};

				class rhs_group_nato_usarmy_wd_platoon_hq
				{
					name = "$STR_RHSUSF_GROUPS_PLATOON_HQ";
					faction = "rhs_faction_usarmy_wd";
					side = 1;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\b_hq.paa";

					class Unit0 // Pl CO
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_officer";
						rank = "LIEUTENANT";
						position[] = {0,5,0};
					};
					class Unit1 // Pl SGT
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_squadleader";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2 // Medic
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_medic";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3 // FO
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_squadleader";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit4 // FO RATELO
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_rifleman_m4";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5 // Pl CO RATELO
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_rifleman_m4";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
				};

				class rhs_group_nato_usarmy_wd_infantry_squad
				{
					name = "$STR_RHSUSF_GROUPS_SQUAD";
					faction = "rhs_faction_usarmy_wd";
					side = 1;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_squadleader";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_teamleader";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_rifleman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_autorifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_grenadier";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_teamleader";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_autorifleman";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_grenadier";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_riflemanat";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class rhs_group_nato_usarmy_wd_infantry_weaponsquad
				{
					name = "$STR_RHSUSF_GROUPS_WEAPONSQUAD";
					faction = "rhs_faction_usarmy_wd";
					side = 1;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_squadleader";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_machinegunner";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_machinegunnera";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_grenadier";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_machinegunner";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_machinegunnera";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_grenadier";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_riflemanat";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
				class rhs_group_nato_usarmy_wd_infantry_squad_sniper
				{
					name = "$STR_RHSUSF_GROUPS_SQUAD_SNIPER";
					faction = "rhs_faction_usarmy_wd";
					side = 1;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_squadleader";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_teamleader";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_marksman";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_autorifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_grenadier";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_teamleader";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_autorifleman";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_grenadier";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_riflemanat";
						rank = "PRIVATE";
						position[] = {15,0,0};
					};
				};
				class rhs_group_nato_usarmy_wd_infantry_team
				{
					name = "$STR_RHSUSF_GROUPS_TEAM";
					faction = "rhs_faction_usarmy_wd";
					side = 1;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_teamleader";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_autorifleman";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_riflemanat";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
				class rhs_group_nato_usarmy_wd_infantry_team_MG
				{
					name = "$STR_RHSUSF_GROUPS_TEAM_MG";
					faction = "rhs_faction_usarmy_wd";
					side = 1;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_teamleader";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_machinegunner";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_machinegunnera";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
				class rhs_group_nato_usarmy_wd_infantry_team_AA
				{
					name = "$STR_RHSUSF_GROUPS_TEAM_AA";
					faction = "rhs_faction_usarmy_wd";
					side = 1;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_teamleader";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_autorifleman";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_aa";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
				class rhs_group_nato_usarmy_wd_infantry_team_support
				{
					name = "$STR_RHSUSF_GROUPS_TEAM_SUPPORT";
					faction = "rhs_faction_usarmy_wd";
					side = 1;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_teamleader";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_autorifleman";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_medic";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
				//javelin?
				class rhs_group_nato_usarmy_wd_infantry_team_heavy_AT
				{
					name = "$STR_RHSUSF_GROUPS_TEAM_AT";
					faction = "rhs_faction_usarmy_wd";
					side = 1;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\b_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_teamleader";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_autorifleman";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_javelin";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
				/* MAWS?
				class rhs_group_nato_usarmy_wd_infantry_team_AT
				{
					name = "$STR_RHS_GROUPS_TEAM_MG";
					faction = "rhs_faction_usarmy_wd";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_teamleader";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_grenadier";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_machinegunnera";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
				};
				off*/
			};