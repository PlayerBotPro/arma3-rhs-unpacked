
			class rhs_group_indp_ins_g_uaz
			{
				name = "Motorized (UAZ)";
				aliveCategory="Motorized";
				class BUS_MotInf_Team_GMG
				{
					name = "Mot. Team (AGS-30)";
					side = 2;
					faction = "rhsgref_faction_chdkz_g";

                    icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "rhsgref_ins_g_uaz_ags";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhsgref_ins_g_uaz_ags";
						rank = "CORPORAL";
						position[] = {-12,-12,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhsgref_ins_g_uaz_ags";
						rank = "PRIVATE";
						position[] = {14,-13,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhsgref_ins_g_machinegunner";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhsgref_ins_g_grenadier";
						rank = "PRIVATE";
						position[] = {19,-17,-2};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhsgref_ins_g_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {20,-17,-2};
					};
				};
				class BUS_MotInf_Team_HMG: BUS_MotInf_Team_GMG
				{
					name = "Mot. Team (DShkM)";

					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "rhsgref_ins_g_uaz_dshkm_chdkz";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhsgref_ins_g_uaz_dshkm_chdkz";
						rank = "CORPORAL";
						position[] = {-12,-12,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhsgref_ins_g_uaz_dshkm_chdkz";
						rank = "PRIVATE";
						position[] = {14,-13,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhsgref_ins_g_machinegunner";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhsgref_ins_g_grenadier";
						rank = "PRIVATE";
						position[] = {19,-17,-2};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhsgref_ins_g_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {20,-17,-2};
					};
				};
				class BUS_MotInf_AT: BUS_MotInf_Team_GMG
				{
					name = "Mot. Team (SPG-9)";

					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "rhsgref_ins_g_uaz_spg9";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhsgref_ins_g_uaz_spg9";
						rank = "CORPORAL";
						position[] = {13,-12,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhsgref_ins_g_uaz_spg9";
						rank = "CORPORAL";
						position[] = {-12,-13,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhsgref_ins_g_machinegunner";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
					class Unit4
					{
						side = 2;
						vehicle = "rhsgref_ins_g_grenadier";
						rank = "PRIVATE";
						position[] = {19,-17,-2};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhsgref_ins_g_grenadier_rpg";
						rank = "PRIVATE";
						position[] = {20,-17,-2};
					};
				};
				class BUS_MotInf_AA: BUS_MotInf_Team_GMG
				{
					name = "Mot. Air-defense Team";

					icon = "\A3\ui_f\data\map\markers\nato\o_motor_inf.paa";

					class Unit0
					{
						side = 2;
						vehicle = "rhsgref_ins_g_uaz";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhsgref_ins_g_grenadier";
						rank = "CORPORAL";
						position[] = {13,-12,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhsgref_ins_g_specialist_aa";
						rank = "CORPORAL";
						position[] = {-12,-13,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhsgref_ins_g_specialist_aa";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
				};
			};