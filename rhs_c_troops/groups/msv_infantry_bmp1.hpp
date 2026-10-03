
			class rhs_group_rus_msv_bmp1
			{
				name = "$STR_RHS_GROUP_MSV_BMP1";
				aliveCategory="Mechanized";

				class rhs_group_rus_msv_bmp1_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhs_faction_msv";
					side=0;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\o_mech_inf.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_msv_officer";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class Unit1: Unit0
					{
						vehicle = "rhs_msv_officer_armored";
						rank = "LIEUTENANT";
						position[] = {5,-5,0};
					};
					class Unit2: Unit0
					{
						vehicle = "rhs_msv_crew_commander";
						rank = "LIEUTENANT";
						position[] = {-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle = "rhs_bmp1k_msv";
						rank = "SERGEANT";
						position[] = {19,-22,0};
					};
				};
				class rhs_group_rus_msv_bmp1_squad: rhs_group_rus_msv_bmp1_chq
				{
					name = "$STR_RHS_GROUPS_SQUAD";

					class Unit0: Unit0
					{
						vehicle = "rhs_msv_sergeant";
						rank = "SERGEANT";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
					};
					class Unit3: Unit3
					{
						vehicle = "rhs_bmp1p_msv";
						rank = "CORPORAL";
					};
					class Unit4: Unit0
					{
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5: Unit0
					{
						vehicle = "rhs_msv_at";
						rank = "PRIVATE";
						position[] = {31,-39,0};
					};
					class Unit6: Unit0
					{
						vehicle = "rhs_msv_strelok_rpg_assist";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {37,-44,0};
					};
					class Unit8: Unit0
					{
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class rhs_group_rus_msv_bmp1_squad_2mg: rhs_group_rus_msv_bmp1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";
					class Unit0: Unit0
					{
						vehicle = "rhs_msv_junior_sergeant";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_msv_machinegunner";
					};
					class Unit3: Unit3
					{
						vehicle = "rhs_bmp1p_msv";
					};
					class Unit4: Unit4
					{
						vehicle = "rhs_msv_machinegunner";
					};
					class Unit5: Unit5
					{
						vehicle = "rhs_msv_machinegunner_assistant";
					};
					class Unit6: Unit6
					{
						vehicle = "rhs_msv_LAT";
					};
					class Unit7: Unit7
					{
						vehicle = "rhs_msv_rifleman";
					};
					class Unit8: Unit8
					{
						vehicle = "rhs_msv_rifleman";
					};
				};
				class rhs_group_rus_msv_bmp1_squad_sniper: rhs_group_rus_msv_bmp1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";
					class Unit0: Unit0
					{
						vehicle = "rhs_msv_junior_sergeant";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_msv_efreitor";
						rank = "CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_msv_marksman";
					};
					class Unit3: Unit3
					{
						vehicle = "rhs_bmp1p_msv";
					};
					class Unit4: Unit4
					{
						vehicle = "rhs_msv_machinegunner";
					};
					class Unit5: Unit5
					{
						vehicle = "rhs_msv_at";
					};
					class Unit6: Unit6
					{
						vehicle = "rhs_msv_medic";
					};
					class Unit7: Unit7
					{
						vehicle = "rhs_msv_rifleman";
					};
					class Unit8: Unit8
					{
						vehicle = "rhs_msv_rifleman";
					};
				};
				class rhs_group_rus_msv_bmp1_squad_mg_sniper: rhs_group_rus_msv_bmp1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";

					class Unit0: Unit0
					{
						vehicle = "rhs_msv_sergeant";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_msv_junior_sergeant";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_msv_machinegunner";
					};
					class Unit3: Unit3
					{
						vehicle = "rhs_bmp1p_msv";
					};
					class Unit4: Unit4
					{
						vehicle = "rhs_msv_marksman";
					};
					class Unit5: Unit5
					{
						vehicle = "rhs_msv_machinegunner_assistant";
					};
					class Unit6: Unit6
					{
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
					};
					class Unit7: Unit7
					{
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
					};
					class Unit8: Unit8
					{
						vehicle = "rhs_msv_rifleman";
						rank = "PRIVATE";
					};
				};
				class rhs_group_rus_msv_bmp1_squad_aa: rhs_group_rus_msv_bmp1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";
					class Unit0: Unit0
					{
						vehicle = "rhs_msv_junior_sergeant";
						rank = "SERGEANT";
					};
					class Unit1: Unit1
					{
						vehicle = "rhs_msv_aa";
						rank = "CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle = "rhs_msv_aa";
						rank = "PRIVATE";
					};
					class Unit3: Unit3
					{
						vehicle = "rhs_bmp1p_msv";
						rank = "CORPORAL";
					};
					class Unit4: Unit4
					{
						vehicle = "rhs_msv_machinegunner";
						rank = "PRIVATE";
					};
					class Unit5: Unit5
					{
						vehicle = "rhs_msv_grenadier";
						rank = "PRIVATE";
					};
					class Unit6: Unit6
					{
						vehicle = "rhs_msv_LAT";
						rank = "PRIVATE";
					};
				};
			};