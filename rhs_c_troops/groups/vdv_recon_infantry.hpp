
			class rhs_group_rus_vdv_recon_infantry
			{
				name = "$STR_RHS_GROUP_vdv_recon_infantry";
				aliveCategory="Infantry";

				class rhs_group_rus_vdv_recon_infantry_squad
				{
					name = "$STR_RHS_GROUPS_RECON_SECTION";
					faction = "rhs_faction_vdv";
					side=0;
					rarityGroup = 0.75;

					icon = "\A3\ui_f\data\map\markers\nato\o_recon.paa";

					class Unit0
					{
						side = 0;
						vehicle = "rhs_vdv_recon_sergeant";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 0;
						vehicle = "rhs_vdv_recon_machinegunner";
						rank = "SERGEANT";
						position[] = {-5,0,0};
					};
					class Unit2
					{
						side = 0;
						vehicle = "rhs_vdv_recon_at";
						rank = "PRIVATE";
						position[] = {3,0,0};
					};
					class Unit3
					{
						side = 0;
						vehicle = "rhs_vdv_recon_marksman";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 0;
						vehicle = "rhs_vdv_recon_grenadier";
						rank = "PRIVATE";
						position[] = {7,0,0};
					};
					class Unit5
					{
						side = 0;
						vehicle = "rhs_vdv_recon_engineer";
						rank = "PRIVATE";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 0;
						vehicle = "rhs_vdv_recon_rifleman";
						rank = "PRIVATE";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 0;
						vehicle = "rhs_vdv_recon_medic";
						rank = "PRIVATE";
						position[] = {13,0,0};
					};
				};
			};