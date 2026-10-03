
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_MKVSOC_Commander	= "RHS_MKVSOC_Commander";
		RHS_MKVSOC_Commander02	= "RHS_MKVSOC_Commander02";
		RHS_MKVSOC_Commander03	= "RHS_MKVSOC_Commander03";
		RHS_MKVSOC_Driver		= "RHS_MKVSOC_Driver";
		RHS_MKVSOC_Gunner		= "RHS_MKVSOC_Gunner";
		RHS_MKVSOC_Gunner02		= "RHS_MKVSOC_Gunner02";
		RHS_MKVSOC_Gunner03		= "RHS_MKVSOC_Gunner03";
		RHS_MKVSOC_Gunner04		= "RHS_MKVSOC_Gunner04";
		RHS_MKVSOC_Cargo		= "RHS_MKVSOC_Cargo";
		RHS_MKVSOC_Cargo01		= "RHS_MKVSOC_Cargo01";
		RHS_MKVSOC_Cargo02		= "RHS_MKVSOC_Cargo02";
		RHS_MKVSOC_Cargo03		= "RHS_MKVSOC_Cargo03";
		RHS_MKVSOC_Cargo04		= "RHS_MKVSOC_Cargo04";
		RHS_MKVSOC_Cargo05		= "RHS_MKVSOC_Cargo05";
		RHS_MKVSOC_Cargo06		= "RHS_MKVSOC_Cargo06";
		RHS_MKVSOC_Cargo07		= "RHS_MKVSOC_Cargo07";
		RHS_MKVSOC_Cargo08		= "RHS_MKVSOC_Cargo08";
		RHS_MKVSOC_Cargo09		= "RHS_MKVSOC_Cargo09";
		RHS_MKVSOC_Cargo010		= "RHS_MKVSOC_Cargo010";
		RHS_MKVSOC_Cargo011		= "RHS_MKVSOC_Cargo011";
		RHS_MKVSOC_Cargo012		= "RHS_MKVSOC_Cargo012";
		RHS_MKVSOC_Cargo013		= "RHS_MKVSOC_Cargo013";
		RHS_MKVSOC_Cargo014		= "RHS_MKVSOC_Cargo014";
		RHS_MKVSOC_Cargo015		= "RHS_MKVSOC_Cargo015";
		RHS_MKVSOC_Cargo016		= "RHS_MKVSOC_Cargo016";
		RHS_MKVSOC_Cargo017		= "RHS_MKVSOC_Cargo017";
		RHS_MKVSOC_Cargo018		= "RHS_MKVSOC_Cargo018";
		RHS_MKVSOC_Cargo019		= "RHS_MKVSOC_Cargo019";
		RHS_MKVSOC_Cargo020		= "RHS_MKVSOC_Cargo020";
		RHS_MKVSOC_Cargo021		= "RHS_MKVSOC_Cargo021";
		RHS_MKVSOC_Cargo022		= "RHS_MKVSOC_Cargo022";
		RHS_MKVSOC_Cargo023		= "RHS_MKVSOC_Cargo023";
		RHS_MKVSOC_Cargo024		= "RHS_MKVSOC_Cargo024";
		RHS_MKVSOC_Cargo025		= "RHS_MKVSOC_Cargo025";
		RHS_MKVSOC_Cargo026		= "RHS_MKVSOC_Cargo026";
	};
	class Actions
	{
		class FFV_BaseActions;
		class passenger_flatground_3Actions;
		class RHS_MKVSOC_cargo019Actions: passenger_flatground_3Actions
			{
				// upDegree = "ManPosCombat";
				// stop = "passenger_flatground_3_Aim";
				// stopRelaxed = "passenger_flatground_3_Aim";
				default = "RHS_MKVSOC_Cargo019";
				Stand = "RHS_MKVSOC_Cargo019";
				// HandGunOn = "passenger_flatground_3_Aim_Pistol";
				// PrimaryWeapon = "passenger_flatground_3_Aim";
				// Binoculars = "passenger_flatground_3_Aim_Binoc";
				// die = "passenger_flatground_3_Die";
				// Unconscious = "passenger_flatground_3_Die";
				// civil = "passenger_flatground_3_Idle_Unarmed";
			};
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
		class States
		{
			class Crew;
			class KIA_RHS_MKVSOC_Commander: DefaultDie
			{
					file = "\rhsusf\addons\rhsusf_markvsoc\data\Anim\KIA_MKVSOC_Commander.rtm";
					actions = "DeadActions";
					speed = 0.5;
					looped = 0;
					terminal = 1;
					connectTo[] = {"Unconscious",0.1};
			};
			class RHS_MKVSOC_Commander: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Commander.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Commander",1};
					leftHandIKCurve[] = {0};
					rightHandIKCurve[] = {1};
					leftLegIKCurve[] = {1};
					rightLegIKCurve[] = {1};
			};
			class KIA_RHS_MKVSOC_Commander02: DefaultDie
			{
					file = "\rhsusf\addons\rhsusf_markvsoc\data\Anim\KIA_MKVSOC_Commander.rtm";
					actions = "DeadActions";
					speed = 0.5;
					looped = 0;
					terminal = 1;
					connectTo[] = {"Unconscious",0.1};
			};
			class RHS_MKVSOC_Commander02: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Commander",1};
					leftHandIKCurve[] = {0};
					rightHandIKCurve[] = {0};
					leftLegIKCurve[] = {0};
					rightLegIKCurve[] = {0};
			};
			class KIA_RHS_MKVSOC_Commander03: DefaultDie
			{
					file = "\rhsusf\addons\rhsusf_markvsoc\data\Anim\KIA_MKVSOC_Commander.rtm";
					actions = "DeadActions";
					speed = 0.5;
					looped = 0;
					terminal = 1;
					connectTo[] = {"Unconscious",0.1};
			};
			class RHS_MKVSOC_Commander03: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Commander",1};
					leftHandIKCurve[] = {0};
					rightHandIKCurve[] = {0};
					leftLegIKCurve[] = {0};
					rightLegIKCurve[] = {0};
			};
			class KIA_RHS_MKVSOC_Driver: DefaultDie
			{
					file = "\rhsusf\addons\rhsusf_markvsoc\data\Anim\KIA_MKVSOC_Driver.rtm";
					actions = "DeadActions";
					speed = 0.5;
					looped = 0;
					terminal = 1;
					connectTo[] = {"Unconscious",0.1};
			};
			class RHS_MKVSOC_Driver: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Driver.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Driver",1};
					leftHandIKCurve[] = {1};
					rightHandIKCurve[] = {0};
					leftLegIKCurve[] = {1};
					rightLegIKCurve[] = {1};
			};
			class KIA_RHS_MKVSOC_Gunner: DefaultDie
			{
					file = "\A3\boat_f\Data\Anim\Zodiac_Cargo_2_KIA.rtm";
					actions = "DeadActions";
					speed = 0.5;
					looped = 0;
					terminal = 1;
					connectTo[] = {"Unconscious",0.1};
			};
			class RHS_MKVSOC_Gunner: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Gunner.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Gunner",1};
					leftHandIKCurve[] = {1};
					rightHandIKCurve[] = {1};
					leftLegIKCurve[] = {1};
					rightLegIKCurve[] = {1};
			};
			class RHS_MKVSOC_Gunner02: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Gunner_m134.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Gunner",1};
					leftHandIKCurve[] = {1};
					rightHandIKCurve[] = {1};
					leftLegIKCurve[] = {1};
					rightLegIKCurve[] = {1};
			};
			class RHS_MKVSOC_Gunner03: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Gunner.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Gunner",1};
					leftHandIKCurve[] = {1};
					rightHandIKCurve[] = {1};
					leftLegIKCurve[] = {1};
					rightLegIKCurve[] = {1};
			};
			class RHS_MKVSOC_Gunner04: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Gunner.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Gunner",1};
					leftHandIKCurve[] = {1};
					rightHandIKCurve[] = {1};
					leftLegIKCurve[] = {1};
					rightLegIKCurve[] = {1};
			};
			class KIA_RHS_MKVSOC_Cargo: DefaultDie
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
					actions = "DeadActions";
					speed = 0.5;
					looped = 0;
					terminal = 1;
					connectTo[] = {"Unconscious",0.1};
			};
			class RHS_MKVSOC_Cargo: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo01: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo1.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo02: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo03: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo04: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo05: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo06: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo07: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo08: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo09: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo010: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo011: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo012: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo013: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo014: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo015: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_fp_standOff.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo016: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_fr_standOff.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo017: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_fs_standOff.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo018: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_rs_standOff.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo019: Crew
			{
				file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_FFV_p_cabin.rtm";
				interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
				speed = -1.5;
				looped = 0;
				connectTo[] = {"passenger_flatground_crosslegs",1};
				// interpolateTo[] = {"KIA_passenger_flatground",1};
				// variantsAI[] = {"passenger_flatground_crosslegs",1};
				// variantsPlayer[] = {"passenger_flatground_crosslegs",1};
				// variantAfter[] = {1.5,1.5,1.5};
				useIdles = 0;
				leftHandIKCurve[] = {0};
				rightHandIKCurve[] = {0};
			};
			class RHS_MKVSOC_Cargo020: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_FFV_fs.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo021: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_FFV_rp.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo022: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_FFV_rs.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo023: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_FFV_bow_p.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo024: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_FFV_bow_s.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo025: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_sprt_deck_pr.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
			class RHS_MKVSOC_Cargo026: Crew
			{
					file = "rhsusf\addons\rhsusf_markvsoc\data\Anim\MKVSOC_Cargo_sprt_deck_sr.rtm";
					interpolateTo[] = {"KIA_RHS_MKVSOC_Cargo",1};
			};
		};
};
class CfgMovesWomen: CfgMovesBasic
{
		class DefaultDie;
		class ManActions {};
};