class rhs_weap_m240_base : rhs_weap_M249_base {
	WW2_boltSnapSound = "RHSUSF_boltSnap_m240";
	WW2_boltSnapDelay = 0.09;
	class manual: Mode_FullAuto {
		sounds[] = {"StandardSound"};
		class StandardSound {
			PACKAGELAYER(m240,rifle_med,PREFIX)
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