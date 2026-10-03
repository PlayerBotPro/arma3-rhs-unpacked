			class TransportPylonsComponent
			{
				UIPicture="\rhsgref\addons\rhsgref_a29\ui\RHS_A29_EDEN_CA.paa";
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"RHS_HP_FFAR_USAF","RHS_HP_Hydra_USAF",
							"RHS_HP_LGB_500",
							"RHS_HP_HELLFIRE_PLANE","RHS_HP_HELLFIRE_PLANE_RACK"
						};
						attachment		= "rhs_mag_M151_7_USAF_LAU131";
						priority		= 1;
						maxweight		= 150;
						UIposition[]	= {0.28,0.41};
						hitpoint		= HitPylon1;
					};
					class pylons2
					{
						hardpoints[]=
						{
							"RHS_HP_FFAR_USAF","RHS_HP_Hydra_USAF",
							"RHS_HP_LGB_500"
						};
						attachment		= "rhs_mag_gbu12";
						priority		= 2;
						maxweight		= 250;
						UIposition[]	= {0.28,0.35};
						hitpoint		= HitPylon1;
					};
					class pylons3
					{
						hardpoints[]=
						{
							"RHS_HP_BOMB_500",
							"RHS_HP_BOMB_1000"
						};
						attachment		= "rhs_mag_mk82";
						priority		= 3;
						maxweight		= 500;
						UIposition[]	= {0.31,0.28};
						hitpoint		= HitPylon3;
					};
					class pylons4: pylons2
					{
						UIposition[]		= {0.28,0.21};
						mirroredMissilePos	= 2;
						hitpoint			= HitPylon4;
					};
					class pylons5: pylons1
					{
						UIposition[]		= {0.28,0.15};
						mirroredMissilePos	= 1;
						hitpoint			= HitPylon5;
					};
					class cmDispenser
					{
						hardpoints[]	= {"RHSUSF_cm_ANALE40_x2"};
						priority		= 1;
						attachment		= "rhsusf_ANALE40_CMFlare_Magazine_x2";
						maxweight		= 800;
						UIposition[]	= {0.625,0.275};
					};
				};
				class Presets
				{
					class CAS
					{
						attachment[] =
						{
							"rhs_mag_M151_7_USAF_LAU131",
							"rhs_mag_gbu12",
							"rhs_mag_mk82",
							"rhs_mag_gbu12",
							"rhs_mag_M151_7_USAF_LAU131",
							"rhsusf_ANALE40_CMFlare_Magazine_x2"
						};
						displayname = "Close Air Support";
					};
					class PrecisionStrike
					{
						attachment[] =
						{
							"rhs_mag_DAGR_8_plane",
							"rhs_mag_gbu12",
							"rhs_mag_mk82",
							"rhs_mag_gbu12",
							"rhs_mag_DAGR_8_plane",
							"rhsusf_ANALE40_CMFlare_Magazine_x2"
						};
						displayname = "Precision Strike";
					};
					class AntiTank
					{
						attachment[] =
						{
							"rhs_mag_AGM114K_2_plane",
							"rhs_mag_gbu12",
							"rhs_mag_cbu87",
							"rhs_mag_gbu12",
							"rhs_mag_AGM114K_2_plane",
							"rhsusf_ANALE40_CMFlare_Magazine_x2"
						};
						displayname = "Anti Tank";
					};
					class Cluster
					{
						attachment[] =
						{
							"rhs_mag_M151_7_USAF_LAU131",
							"rhs_mag_cbu87",
							"rhs_mag_cbu100",
							"rhs_mag_cbu87",
							"rhs_mag_M151_7_USAF_LAU131",
							"rhsusf_ANALE40_CMFlare_Magazine_x2"
						};
						displayname = "Cluster";
					};
					class DumbBomb
					{
						attachment[] =
						{
							"rhs_mag_M151_7_USAF_LAU131",
							"rhs_mag_mk82",
							"rhs_mag_mk82",
							"rhs_mag_mk82",
							"rhs_mag_M151_7_USAF_LAU131",
							"rhsusf_ANALE40_CMFlare_Magazine_x2"
						};
						displayname = "Bomb";
					};
				};
			};