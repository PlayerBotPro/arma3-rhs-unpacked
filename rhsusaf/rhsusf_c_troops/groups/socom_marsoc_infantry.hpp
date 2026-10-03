
			class rhs_group_nato_marsoc_infantry
			{
				name = "$STR_RHSUSF_VEHCLASS_MARSOC";
				aliveCategory="Infantry";
				class rhs_group_nato_marsoc_infantry_squad
				{
					name = "$STR_RHSUSF_GROUPS_MSOT";
					faction = "rhs_faction_socom";
					side = 1;
					rarityGroup = 0.75;

					class Unit0 // Team Leader
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_teamleader";
						rank = "CAPTAIN";
						position[] = {0,5,0};
					};
					class Unit1 // Team Chief
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_teamchief";
						rank = "LIEUTENANT";
						position[] = {-5,0,0};
					};
					class Unit2 // Element leader
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_elementleader";
						rank = "SERGEANT";
						position[] = {3,0,0};
					};

					// Missing Comms chief + Intelligence chief

					class Unit3 // Weapons Exp.
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4 // Breacher ( Demo. Exp. )
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso_breacher";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
					class Unit5 // Comms Exp. 
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso_mechanic";
						rank = "CORPORAL";
						position[] = {9,0,0};
					};
					class Unit6
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_sarc";
						rank = "CORPORAL";
						position[] = {11,0,0};
					};
					class Unit7
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_elementleader";
						rank = "SERGEANT";
						position[] = {13,0,0};
					};
					class Unit8
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso";
						rank = "CORPORAL";
						position[] = {15,0,0};
					};
					class Unit9
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso_breacher";
						rank = "CORPORAL";
						position[] = {17,0,0};
					};
					class Unit10
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso_mechanic";
						rank = "CORPORAL";
						position[] = {19,0,0};
					};
					class Unit11
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_sarc";
						rank = "CORPORAL";
						position[] = {21,0,0};
					};
				};
				class rhs_group_nato_marsoc_infantry_team
				{
					name = "$STR_RHSUSF_GROUPS_MSOT_ELEMENT";
					faction = "rhs_faction_marsoc";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_elementleader";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1 // Weapons Exp.
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
					class Unit2 // Breacher ( Demo. Exp.)
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso_breacher";
						rank = "CORPORAL";
						position[] = {3,0,0};
					};
					class Unit3 // Comms Exp
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_cso_mechanic";
						rank = "CORPORAL";
						position[] = {5,0,0};
					};
					class Unit4
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_sarc";
						rank = "CORPORAL";
						position[] = {7,0,0};
					};
				};

				class rhs_group_nato_marsoc_infantry_squad_sniper
				{
					name = "$STR_RHSUSF_GROUPS_MSOT_SNIPER_ELEMENT";
					faction = "rhs_faction_marsoc";
					side = 1;
					rarityGroup = 0.75;

					class Unit0
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_sniper";
						rank = "SERGEANT";
						position[] = {0,5,0};
					};
					class Unit1
					{
						side = 1;
						vehicle = "rhsusf_socom_marsoc_spotter";
						rank = "CORPORAL";
						position[] = {-5,0,0};
					};
				};

			};