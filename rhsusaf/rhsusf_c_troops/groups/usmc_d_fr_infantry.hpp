
			class rhs_group_nato_usmc_fr_infantry
			{
				name = "$STR_RHSUSF_VEHCLASS_FORCERECON";
				aliveCategory="Infantry";

				class rhs_group_nato_usmc_fr_infantry_squad
				{
					name = "$STR_RHSUSF_GROUPS_FR_RT";
					faction = "rhs_faction_usmc_d";
					side = 1;
					rarityGroup = 0.75;

					class Unit0 // Team Leader
					{
						side = 1;
						vehicle = "rhsusf_usmc_fr_marpat_d_squadleader";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1 // Ass Team Leader
					{
						side = 1;
						vehicle = "rhsusf_usmc_fr_marpat_d_teamleader";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2 // Radio Operator
					{
						side = 1;
						vehicle = "rhsusf_usmc_fr_marpat_d_engineer";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};
					class Unit3 // Ass Radio Operator
					{
						side = 1;
						vehicle = "rhsusf_usmc_fr_marpat_d_rifleman";
						rank = "SERGEANT";
						position[] = {5,0,0};
					};
					class Unit4 // Point Man
					{
						side = 1;
						vehicle = "rhsusf_usmc_fr_marpat_d_light";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit5 // Slack man
					{
						side = 1;
						vehicle = "rhsusf_usmc_fr_marpat_d_riflemanat";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit6 // MG
					{
						side = 1;
						vehicle = "rhsusf_usmc_fr_marpat_d_machinegunner";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit7 // Ass MG
					{
						side = 1;
						vehicle = "rhsusf_usmc_fr_marpat_d_machinegunner_ass";
						rank = "CORPORAL";
						position[] = {13,0,0};
					};
					class Unit8 // Corpsman SARC ( ? )
					{
						side = 1;
						vehicle = "rhsusf_navy_sarc";
						rank = "CORPORAL";
						position[] = {15,0,0};
					};
				};
			};