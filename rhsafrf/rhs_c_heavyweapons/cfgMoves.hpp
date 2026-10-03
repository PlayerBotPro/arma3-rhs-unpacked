
#define SPEED_STATIC 1e10
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_StaticWeapon_GetOut_Low = "amovppnemstpsraswrfldnon";
		RHS_StaticWeapon_GetOut_Medium = "amovpknlmstpsraswrfldnon";
		RHS_LowKORD_Gunner = "RHS_LowKORD_Gunner";
		RHS_KORD_Gunner = "RHS_KORD_Gunner";
		RHS_DShKM_Gunner = "RHS_DShKM_Gunner";
		RHS_LowTripod_Gunner = "RHS_LowTripod_Gunner";
		RHS_AGS_Gunner = "RHS_AGS_Gunner";
		RHS_SPG_Gunner = "RHS_SPG_Gunner";
		RHS_Metis_Gunner = "RHS_Metis_Gunner";
		RHS_D30_Commander = "RHS_D30_Commander";
		RHS_D30_Gunner = "RHS_D30_Gunner";
		RHS_D30_Cargo = "RHS_D30_Cargo";
		RHS_Zu23_Cargo = "RHS_Zu23_Cargo";
		RHS_Zu23_Gunner = "RHS_Zu23_Gunner";
		RHS_IglaPod_Gunner = "RHS_IglaPod_Gunner";
		RHS_Kornet_Gunner = "RHS_Kornet_gunner";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHS_LowKORD_Gunner: Crew
		{
			file=\rhsafrf\addons\rhs_heavyweapons\mg\bis_kord\anim\sittingGunner.rtm;
			connectTo[]={Static_Dead,1};		//ToDo: own death anim?
			leftHandIKBeg = true;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = true;
			rightHandIKCurve[] = {1};
			righHandIKBeg = true;
			righHandIKEnd = true;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
		};
		class RHS_DShKM_Gunner: Crew
		{
			file=rhsafrf\addons\rhs_heavyweapons\data\anim\DShKM_Gunner.rtm;
			connectTo[]={Static_Dead,1};		//ToDo: own death anim?
			leftHandIKBeg = true;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = true;
			rightHandIKCurve[] = {1};
			righHandIKBeg = true;
			righHandIKEnd = true;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Idle.p3d";
		};
		class RHS_LowTripod_Gunner: RHS_DShKM_Gunner
		{
			file=rhsafrf\addons\rhs_heavyweapons\data\anim\LowTripod_Gunner.rtm;
		};
		class RHS_KORD_Gunner: RHS_DShKM_Gunner
		{
			file=rhsafrf\addons\rhs_heavyweapons\data\anim\standingGunner.rtm;
		};
		class RHS_AGS_Gunner: Crew
		{
			file=rhsafrf\addons\rhs_heavyweapons\data\anim\AGS_Gunner.rtm;
			connectTo[]={Static_Dead,1};		//ToDo: own death anim?
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
		};
		class RHS_KIA_SPG_Gunner: DefaultDie
		{
			actions = DeadActions;
			//file=rhsafrf\addons\rhs_heavyweapons\data\anim\KIA_SPG9_gunner.rtm;
			file="\A3\cargoposes_F\Anim\gunner_static_low01_KIA.rtm";
			speed = 0.5;
			looped=false;
			terminal = 1;
			soundEnabled=0;
			connectTo[]=
			{
				"Unconscious",
				0.1
			};
		};
		class RHS_SPG_Gunner: Crew
		{
			file=rhsafrf\addons\rhs_heavyweapons\data\anim\SPG9_gunner.rtm;
			interpolateTo[]={RHS_KIA_SPG_Gunner,1};
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
		};
		class RHS_Kornet_Gunner: Crew
		{
			file=rhsafrf\addons\rhs_heavyweapons\data\anim\kornet_gunner.rtm;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			interpolateTo[]={RHS_KIA_SPG_Gunner,1};
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
		};
		class RHS_Metis_Gunner: Crew
		{
			file=rhsafrf\addons\rhs_heavyweapons\data\anim\Metis_Gunner.rtm;
			connectTo[] = {RHS_KIA_SPG_Gunner,0.1};
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
		};
		class RHS_D30_Commander: Crew
		{
			file=rhsafrf\addons\rhs_heavyweapons\data\anim\D30_Commander.rtm;
			connectTo[]={Static_Dead,1};		//ToDo: own death anim?
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Idle.p3d";
		};
		class RHS_D30_Gunner: Crew
		{
			file=rhsafrf\addons\rhs_heavyweapons\data\anim\D30_Gunner.rtm;
			connectTo[]={Static_Dead,1};		//ToDo: own death anim?
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Idle.p3d";
		};
		class RHS_D30_Cargo: Crew
		{
			file=rhsafrf\addons\rhs_heavyweapons\data\anim\D30_Cargo.rtm;
			connectTo[]={Static_Dead,1};		//ToDo: own death anim?
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Idle.p3d";
		};
		class RHS_Zu23_Cargo: Crew
		{
			file=rhsafrf\addons\rhs_heavyweapons\data\anim\Hilux_Cargo01.rtm;
			connectTo[]={RHS_KIA_ZU23_Gunner,1};
			interpolateTo[]={RHS_KIA_ZU23_Gunner,1};
		};
		class RHS_Zu23_Gunner: Crew
		{
			file=rhsafrf\addons\rhs_heavyweapons\data\anim\rhs_zu23_gunner.rtm;
			connectTo[]={RHS_KIA_ZU23_Gunner,1};
			interpolateTo[]={RHS_KIA_ZU23_Gunner,1};
		};
		class RHS_KIA_ZU23_Gunner: RHS_KIA_SPG_Gunner
		{
			file=rhsafrf\addons\rhs_heavyweapons\data\anim\KIA_Hilux_Cargo01.rtm;
		};
		class RHS_IglaPod_Gunner: Crew
		{
			file=rhsafrf\addons\rhs_heavyweapons\data\anim\rhs_iglapod_gunner.rtm;
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			interpolateTo[]={RHS_KIA_SPG_Gunner,1};
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
		};


	};
};


