class rhs_weap_M249_base : LMG_Mk200_F {
	WW2_boltSnapSound = "RHSUSF_boltSnap_m249";
	WW2_boltSnapDelay = 0.080;
	class FullAuto: Mode_FullAuto {
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGELAYER(m249,rifle_small,PREFIX)
		};
		class SilencedSound {
			PACKAGELAYER(sd_m4,sd_Rifle1,PREFIX)
		};
	};
	class Eventhandlers: Eventhandlers {
		#define EHMACRO(PREFIX) \
		class PREFIX##_weapon_firedSoundHandler { \
			fired = QUOTE(_this params ['_unit','_weapon']; [_unit,_weapon,['##PREFIX##_rattle_m249_1','##PREFIX##_rattle_m249_2','##PREFIX##_rattle_m249_3','##PREFIX##_rattle_m249_4','##PREFIX##_rattle_m249_5','##PREFIX##_rattle_m249_6'],3] call PREFIX##_fnc_beltRattle; [_unit,_weapon,'##PREFIX##_boltSnap_m249'] call PREFIX##_fnc_boltSnap;); \
		};
		EHMACRO(PREFIX)
		#undef EHMACRO		
	};
};

class rhs_weap_saw_base : Rifle_Base_F {
	WW2_boltSnapSound = "RHSUSF_boltSnap_m249";
	WW2_boltSnapDelay = 0.075;
	class FullAuto: Mode_FullAuto {
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGELAYER(m249,rifle_small,PREFIX)
		};
		class SilencedSound {
			PACKAGELAYER(sd_m4,sd_Rifle1,PREFIX)
		};
	};
	class Eventhandlers: Eventhandlers {
		#define EHMACRO(PREFIX) \
		class PREFIX##_weapon_firedSoundHandler { \
			fired = QUOTE(_this params ['_unit','_weapon']; [_unit,_weapon,['##PREFIX##_rattle_m249_1','##PREFIX##_rattle_m249_2','##PREFIX##_rattle_m249_3','##PREFIX##_rattle_m249_4','##PREFIX##_rattle_m249_5','##PREFIX##_rattle_m249_6'],3] call PREFIX##_fnc_beltRattle; [_unit,_weapon,'##PREFIX##_boltSnap_m249'] call PREFIX##_fnc_boltSnap;); \
		};
		EHMACRO(PREFIX)
		#undef EHMACRO		
	};
};