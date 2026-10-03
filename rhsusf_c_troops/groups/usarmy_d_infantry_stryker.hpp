
			class rhs_group_nato_usarmy_d_stryker
			{
				name = "$STR_RHS_GROUP_USARMY_STRYKER";
				aliveCategory="Mechanized";

				class rhs_group_nato_usarmy_d_stryker_squad
				{
					name = "$STR_RHSUSF_GROUPS_SQUAD";
					faction = "rhs_faction_usarmy_d";
					side = 1;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_army_ocp_squadleader";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_stryker_m1126_m2_d";
						rank = "CORPORAL";
						position[] = {0,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_army_ocp_teamleader";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_army_ocp_teamleader";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "rhsusf_army_ocp_autorifleman";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "rhsusf_army_ocp_autorifleman";
						rank = "PRIVATE";
						position[] = {-7,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "rhsusf_army_ocp_grenadier";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "rhsusf_army_ocp_grenadier";
						rank = "PRIVATE";
						position[] = {-9,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "rhsusf_army_ocp_rifleman";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "rhsusf_army_ocp_javelin";
						rank = "PRIVATE";
						position[] = {-11,0,0};
					};
				};
				class rhs_group_nato_usarmy_d_stryker_wpnsquad
				{
					name = "$STR_RHSUSF_GROUPS_WEAPONSQUAD";
					faction = "rhs_faction_usarmy_d";
					side = 1;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\b_mech_inf.paa";

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_army_ocp_squadleader";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_stryker_m1126_m2_d";
						rank = "CORPORAL";
						position[] = {0,-5,0};
					};
					class Unit2
					{
						side = 1;
						vehicle = "rhsusf_army_ocp_machinegunner";
						rank = "PRIVATE";
						position[] = {5,0,0};
					};
					class Unit3
					{
						side = 1;
						vehicle = "rhsusf_army_ocp_machinegunner";
						rank = "PRIVATE";
						position[] = {-5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "rhsusf_army_ocp_machinegunnera";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 1;
						vehicle = "rhsusf_army_ocp_machinegunnera";
						rank = "PRIVATE";
						position[] = {-7,0,0};
					};
				};
			};