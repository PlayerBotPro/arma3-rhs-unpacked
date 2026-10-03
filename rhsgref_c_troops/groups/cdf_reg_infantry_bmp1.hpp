
			class rhs_group_cdf_bmp1
			{
				name = "Mechanized (BMP-1)";
				aliveCategory="Mechanized";

				class rhs_group_cdf_bmp1_chq
				{
					name = "$STR_RHS_GROUPS_COMPANY_HQ";
					faction = "rhsgref_faction_cdf_ground";
					side=0;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "rhsgref_cdf_reg_squadleader";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class Unit1: Unit0
					{
						vehicle = "rhsgref_cdf_reg_rifleman";
						rank = "LIEUTENANT";
						position[] = {5,-5,0};
					};
					class Unit2: Unit0
					{
						vehicle = "rhsgref_cdf_reg_machinegunner";
						rank = "LIEUTENANT";
						position[] = {-5,-5,0};
					};
					class Unit3: Unit0
					{
						vehicle = "rhsgref_cdf_bmp1k";
						rank = "SERGEANT";
						position[] = {19,-22,0};
					};
				};
				class rhs_group_cdf_bmp1_squad: rhs_group_cdf_bmp1_chq
				{
					name = "$STR_RHS_GROUPS_SQUAD";

					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

					class Unit0: Unit0
					{
						vehicle = "rhsgref_cdf_reg_squadleader";
						rank = "SERGEANT";
					};
					class Unit1: Unit1
					{
						vehicle = "rhsgref_cdf_reg_marksman";
						rank = "SERGEANT";
					};
					class Unit2: Unit2
					{
						vehicle = "rhsgref_cdf_reg_machinegunner";
						rank = "PRIVATE";
					};
					class Unit3: Unit3
					{
						vehicle = "rhsgref_cdf_bmp1p";
						rank = "CORPORAL";
					};
					class Unit4: Unit0
					{
						vehicle = "rhsgref_cdf_reg_machinegunner";
						rank = "PRIVATE";
						position[] = {-10,-11,0};
					};
					class Unit5: Unit0
					{
						vehicle = "rhsgref_cdf_reg_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {31,-39,0};
					};
					class Unit6: Unit0
					{
						vehicle = "rhsgref_cdf_reg_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {-15,-15,0};
					};
					class Unit7: Unit0
					{
						vehicle = "rhsgref_cdf_reg_grenadier";
						rank = "PRIVATE";
						position[] = {37,-44,0};
					};
					class Unit8: Unit0
					{
						vehicle = "rhsgref_cdf_reg_rifleman_m70";
						rank = "PRIVATE";
						position[] = {-20,-20,0};
					};
				};
				class rhs_group_cdf_bmp1_squad_2mg: rhs_group_cdf_bmp1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_2MG";

					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

					class Unit0: Unit0
					{
						vehicle = "rhsgref_cdf_reg_squadleader";
					};
					class Unit1: Unit1
					{
						vehicle = "rhsgref_cdf_reg_rifleman";
						rank = "CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle = "rhsgref_cdf_reg_machinegunner";
					};
					class Unit3: Unit3
					{
						vehicle = "rhsgref_cdf_bmp1p";
					};
					class Unit4: Unit4
					{
						vehicle = "rhsgref_cdf_reg_machinegunner";
					};
					class Unit5: Unit5
					{
						vehicle = "rhsgref_cdf_reg_grenadier_rpg";
					};
					class Unit6: Unit6
					{
						vehicle = "rhsgref_cdf_reg_rifleman_lite";
					};
					class Unit7: Unit7
					{
						vehicle = "rhsgref_cdf_reg_rifleman_rpg75";
					};
					class Unit8: Unit8
					{
						vehicle = "rhsgref_cdf_reg_rifleman_m70";
					};
				};
				class rhs_group_cdf_bmp1_squad_sniper: rhs_group_cdf_bmp1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_SNIPER";

					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

					class Unit0: Unit0
					{
						vehicle = "rhsgref_cdf_reg_squadleader";
					};
					class Unit1: Unit1
					{
						vehicle = "rhsgref_cdf_reg_rifleman";
						rank = "CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle = "rhsgref_cdf_reg_marksman";
					};
					class Unit3: Unit3
					{
						vehicle = "rhsgref_cdf_bmp1p";
					};
					class Unit4: Unit4
					{
						vehicle = "rhsgref_cdf_reg_machinegunner";
					};
					class Unit5: Unit5
					{
						vehicle = "rhsgref_cdf_reg_grenadier_rpg";
					};
					class Unit6: Unit6
					{
						vehicle = "rhsgref_cdf_reg_medic";
					};
					class Unit7: Unit7
					{
						vehicle = "rhsgref_cdf_reg_rifleman_rpg75";
					};
					class Unit8: Unit8
					{
						vehicle = "rhsgref_cdf_reg_rifleman_m70";
					};
				};
				class rhs_group_cdf_bmp1_squad_mg_sniper: rhs_group_cdf_bmp1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";

					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

					class Unit0: Unit0
					{
						vehicle = "rhsgref_cdf_reg_squadleader";
					};
					class Unit1: Unit1
					{
						vehicle = "rhsgref_cdf_reg_squadleader";
					};
					class Unit2: Unit2
					{
						vehicle = "rhsgref_cdf_reg_machinegunner";
					};
					class Unit3: Unit3
					{
						vehicle = "rhsgref_cdf_bmp1p";
					};
					class Unit4: Unit4
					{
						vehicle = "rhsgref_cdf_reg_marksman";
					};
					class Unit5: Unit5
					{
						vehicle = "rhsgref_cdf_reg_grenadier_rpg";
					};
					class Unit6: Unit6
					{
						vehicle = "rhsgref_cdf_reg_rifleman_lite";
						rank = "PRIVATE";
					};
					class Unit7: Unit7
					{
						vehicle = "rhsgref_cdf_reg_rifleman_rpg75";
						rank = "PRIVATE";
					};
					class Unit8: Unit8
					{
						vehicle = "rhsgref_cdf_reg_rifleman_m70";
						rank = "PRIVATE";
					};
				};
				class rhs_group_cdf_bmp1_squad_aa: rhs_group_cdf_bmp1_squad
				{
					name = "$STR_RHS_GROUPS_SQUAD_AA";

					icon = "\A3\ui_f\data\map\markers\nato\n_mech_inf.paa";

					class Unit0: Unit0
					{
						vehicle = "rhsgref_cdf_reg_squadleader";
						rank = "SERGEANT";
					};
					class Unit1: Unit1
					{
						vehicle = "rhsgref_cdf_reg_specialist_aa";
						rank = "CORPORAL";
					};
					class Unit2: Unit2
					{
						vehicle = "rhsgref_cdf_reg_specialist_aa";
						rank = "PRIVATE";
					};
					class Unit3: Unit3
					{
						vehicle = "rhsgref_cdf_bmp1p";
						rank = "CORPORAL";
					};
					class Unit4: Unit4
					{
						vehicle = "rhsgref_cdf_reg_machinegunner";
						rank = "PRIVATE";
					};
					class Unit5: Unit5
					{
						vehicle = "rhsgref_cdf_reg_grenadier";
						rank = "PRIVATE";
					};
					class Unit6: Unit6
					{
						vehicle = "rhsgref_cdf_reg_rifleman_lite";
						rank = "PRIVATE";
					};
				};
			};