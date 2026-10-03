
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		RHS_StaticWeapon_GetOut_Low = "amovppnemstpsraswrfldnon";
		RHS_StaticWeapon_GetOut_Medium = "amovpknlmstpsraswrfldnon";
		RHSUSF_LowTripod_Gunner = "RHSUSF_LowTripod_Gunner";
		RHS_M2_Gunner = "RHS_M2_Gunner";
		RHS_M119_Commander = "RHS_M119_Commander";
		RHS_M119_Gunner = "RHS_M119_Gunner";
		RHS_M119_Cargo = "RHS_M119_Cargo";
		RHS_TOW_Gunner = "RHS_TOW_Gunner";
		RHS_Stinger_Gunner = "RHS_Stinger_Gunner";
	};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class RHSUSF_LowTripod_Gunner: Crew
		{
			file=rhsusf\addons\rhsusf_heavyweapons\Anim\LowTripod_Gunner.rtm;
			connectTo[]={Static_Dead,1};		//ToDo: own death anim?
			leftHandIKBeg = true;
			leftHandIKCurve[] = {1};
			leftHandIKEnd = true;
			rightHandIKCurve[] = {1};
			righHandIKBeg = true;
			righHandIKEnd = true;
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Wrfl.p3d";
		};
		class RHS_M2_Gunner: RHSUSF_LowTripod_Gunner
		{
			file = "rhsusf\addons\rhsusf_heavyweapons\Anim\M2_Gunner.rtm";
			collisionShape = "A3\anims_f\Data\Geom\Sdr\Perc_Idle.p3d";
		};
		class RHS_M119_Commander: RHSUSF_LowTripod_Gunner
		{
			file = "rhsusf\addons\rhsusf_heavyweapons\Anim\M119_Commander.rtm";
		};
		class RHS_M119_Gunner: RHSUSF_LowTripod_Gunner
		{
			file = "rhsusf\addons\rhsusf_heavyweapons\Anim\M119_Gunner.rtm";
		};
		class RHS_M119_Cargo: RHSUSF_LowTripod_Gunner
		{
			file = "rhsusf\addons\rhsusf_heavyweapons\Anim\M119_Cargo.rtm";
		};
		class RHS_TOW_Gunner: RHSUSF_LowTripod_Gunner
		{
			file = "rhsusf\addons\rhsusf_heavyweapons\Anim\TOW_Gunner.rtm";
		};
		class RHS_Stinger_Gunner: RHSUSF_LowTripod_Gunner
		{
			file = "rhsusf\addons\rhsusf_heavyweapons\Anim\Stinger_Gunner.rtm";
		};



	};
};