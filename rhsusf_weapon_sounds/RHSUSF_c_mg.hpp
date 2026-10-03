//M240
class rhs_weap_M249_base : LMG_Mk200_F
{
	class Eventhandlers: Eventhandlers {};
};
class rhs_weap_m240_base : rhs_weap_M249_base {
	class manual: Mode_FullAuto {
		sounds[]={"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(M240,MMG1)
		};
		class SilencedSound {
			PACKAGE(sd_M240,sd_mmg1)
		};
	};
	class Eventhandlers: Eventhandlers {
		class RHSUSF_m240_beltIntake {
			fired = "_this params ['_unit','_weapon']; private _sound = 'rhsusf_beltIntake_m240'; [_unit,_weapon,_sound] call RHSUSF_fnc_beltIntake;";
		};
	};
};


class LMG_M200 : LMG_RCWS {
	class manual;
	class close;
	class short;
	class medium;
	class far;
};
class rhs_weap_m240veh: LMG_M200
{
	class manual: manual
	{
		class StandardSound
		{
			PACKAGE_VEH(M240,MMG1)
		};
	};
	class close: close
	{
		class StandardSound
		{
			PACKAGE_VEH(M240,MMG1)
		};
	};
	class short: short
	{
		class StandardSound
		{
			PACKAGE_VEH(M240,MMG1)
		};
	};
	class medium: medium
	{
		class StandardSound
		{
			PACKAGE_VEH(M240,MMG1)
		};
	};
	class far: far
	{
		class StandardSound
		{
			PACKAGE_VEH(M240,MMG1)
		};
	};
};