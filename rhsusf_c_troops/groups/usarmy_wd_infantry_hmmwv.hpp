
			class rhs_group_nato_usarmy_wd_HMMWV
			{
				name = "$STR_RHS_GROUP_USARMY_HMMWV";
				aliveCategory="Motorized";

				class BUS_MotInf_Team_GMG
				{
					name = "Mot. Team (GMG)";
					side = 1;
					faction = "rhs_faction_usarmy_wd";

					icon = "\A3\ui_f\data\map\markers\nato\b_motor_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_m1025_w_mk19";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_autorifleman";
						rank = "CORPORAL";
						position[] = {-12,-12,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_riflemanat";
						rank = "PRIVATE";
						position[] = {14,-13,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_grenadier";
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
						vehicle = "rhsusf_m1025_w_m2";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_autorifleman";
						rank = "CORPORAL";
						position[] = {-12,-12,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_riflemanat";
						rank = "PRIVATE";
						position[] = {14,-13,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_grenadier";
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
						vehicle = "rhsusf_m1025_w";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_riflemanat";
						rank = "CORPORAL";
						position[] = {13,-12,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_javelin";
						rank = "CORPORAL";
						position[] = {-12,-13,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_javelin";
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
						vehicle = "rhsusf_m1025_w";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_autorifleman";
						rank = "CORPORAL";
						position[] = {13,-12,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_aa";
						rank = "CORPORAL";
						position[] = {-12,-13,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_army_ucp_aa";
						rank = "PRIVATE";
						position[] = {18,-17,-2};
					};
				};
			};