
			class Infantry
			{
				name = "Infantry";
				class IRG_InfSquad
				{
					name = "$STR_RHS_GROUPS_SQUAD";
					side = 2;
					faction = "rhs_faction_insurgents";
					class Unit0 // SL Buddy pair
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2 // MG Buddy pair
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AAR_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4 // AT Buddy pair
					{
						side = 2;
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
				};
				class IRG_InfSquad_Weapons
				{
					name = "$STR_RHS_GROUPS_SQUAD_MG_SNIPER";
					side = 2;
					faction = "rhs_faction_insurgents";
					class Unit0 // SL Buddy pair
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2 // MG Buddy pair
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AAR_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
					class Unit4 // AT Buddy pair
					{
						side = 2;
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-10,-10,0};
					};
					class Unit5
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit6 // LAT Buddy pair
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {15,-15,0};
					};
					class Unit7
					{
						side = 2;
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
						position[] = {20,-20,0};
					};
				};
				class IRG_InfTeam
				{
					name = "$STR_RHS_GROUPS_RUS_FIRETEAM";
					side = 2;
					faction = "rhs_faction_insurgents";
					class Unit0 // SL Buddy pair
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2 // LAT Buddy pair
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IRG_InfTeam_AT
				{
					name = "$STR_RHS_GROUPS_SECTION_AT";
					side = 2;
					faction = "rhs_faction_insurgents";
					class Unit0 // SL Buddy pair
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2 // AT Buddy pair
					{
						side = 2;
						vehicle = "rhs_g_Soldier_LAT_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AAT_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IRG_InfTeam_MG
				{
					name = "$STR_RHS_GROUPS_SECTION_MG";
					side = 2;
					faction = "rhs_faction_insurgents";
					class Unit0 // SL Buddy pair
					{
						side = 2;
						vehicle = "rhs_g_soldier_SL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
					class Unit2 // MG Buddy pair
					{
						side = 2;
						vehicle = "rhs_g_soldier_AR_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AAR_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
				class IRG_InfSentry
				{
					name = "$STR_RHS_GROUPS_RUS_MANEUVER";
					side = 2;
					faction = "rhs_faction_insurgents";
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_GL_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class IRG_ReconSentry
				{
					name = "$STR_RHS_GROUPS_RECON_SECTION";
					side = 2;
					faction = "rhs_faction_insurgents";
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_TL_F";
						rank = "CORPORAL";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_lite_F";
						rank = "PRIVATE";
						position[] = {5,-5,0};
					};
				};
				class IRG_SniperTeam_M
				{
					name = "$STR_RHS_GROUPS_SECTION_MARKSMAN";
					side = 2;
					faction = "rhs_faction_insurgents";
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_M_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_lite_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
				};
			};
			class Support
			{
				name = "Support Infantry";
				class IRG_Support_CLS
				{
					name = "Support Team (CLS)";
					side = 2;
					faction = "rhs_faction_insurgents";
					class Unit0
					{
						side = 2;
						vehicle = "rhs_g_Soldier_TL_F";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						side = 2;
						vehicle = "rhs_g_Soldier_AR_F";
						rank = "CORPORAL";
						position[] = {5,-5,0};
					};
					class Unit2
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "PRIVATE";
						position[] = {-5,-5,0};
					};
					class Unit3
					{
						side = 2;
						vehicle = "rhs_g_medic_F";
						rank = "PRIVATE";
						position[] = {10,-10,0};
					};
				};
			};