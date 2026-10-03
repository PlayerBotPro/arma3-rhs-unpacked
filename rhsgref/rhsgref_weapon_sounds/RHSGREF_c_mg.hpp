//MG42

class rhs_weap_mg42_base: Rifle_Base_F {
	reloadMagazineSound[] = {"rhsgref\addons\rhsgref_weapon_sounds\reloads\mg42_reload", 1, 1, 10};
	class manual: Mode_FullAuto {
		sounds[] = {"StandardSound"};
		class StandardSound {
			PACKAGE(MG42_delayed,MMG1_delayed)
		};	
	};
	class Eventhandlers: Eventhandlers {
		class RHSGREF_mg42_beltIntake {
			fired = "[_this # 0,_this # 1,'rhsgref_beltIntake_mg42'] call RHSGREF_fnc_beltIntake;";
		};
	};
};