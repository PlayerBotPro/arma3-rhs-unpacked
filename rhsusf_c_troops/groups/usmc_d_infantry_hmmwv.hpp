
			class rhs_group_nato_usmc_d_HMMWV
			{
				name = "$STR_RHS_GROUP_USARMY_HMMWV";
				aliveCategory="Motorized";

				class BUS_MotInf_Team_GMG
				{
					name = "Mot. Team (GMG)";
					side = 1;
					faction = "rhs_faction_usmc_d";

					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_m1025_d_s_Mk19";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_usmc_marpat_d_autorifleman";
						rank = "CORPORAL";
						position[] = {-12,-12,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_usmc_marpat_d_riflemanat";
						rank = "PRIVATE";
						position[] = {14,-13,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_usmc_marpat_d_rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class BUS_MotInf_Team_HMG: BUS_MotInf_Team_GMG
				{
					name = "Mot. Team (HMG)";

					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_m1025_d_s_m2";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_usmc_marpat_d_rifleman";
						rank = "CORPORAL";
						position[] = {-12,-12,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_usmc_marpat_d_riflemanat";
						rank = "PRIVATE";
						position[] = {14,-13,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_usmc_marpat_d_rifleman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
				};
				class BUS_MotInf_AT: BUS_MotInf_Team_GMG
				{
					name = "Mot. Anti-armor Team";

					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_m1025_d_s";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_usmc_marpat_d_rifleman";
						rank = "CORPORAL";
						position[] = {13,-12,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_usmc_marpat_d_javelin";
						rank = "CORPORAL";
						position[] = {-12,-13,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_usmc_marpat_d_javelin";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
				};
				class BUS_MotInf_AA: BUS_MotInf_Team_GMG
				{
					name = "Mot. Air-defense Team";

					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";
					
					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_m1025_d_s";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_usmc_marpat_d_rifleman";
						rank = "CORPORAL";
						position[] = {13,-12,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_usmc_marpat_d_stinger";
						rank = "CORPORAL";
						position[] = {-12,-13,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_usmc_marpat_d_stinger";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
				};
			};