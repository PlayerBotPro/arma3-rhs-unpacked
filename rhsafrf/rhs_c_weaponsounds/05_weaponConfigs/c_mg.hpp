class rhs_pkp_base: Rifle_Long_Base_F {
	WW2_boltSnapSound = "RHS_boltSnap_pk";
	WW2_boltSnapDelay = 0.10;
	class FullAuto: Mode_FullAuto {
		sounds[] = {"StandardSound"};
		class StandardSound {
			PACKAGE(pk,rifle_med,PREFIX)
		};
	};
	class Eventhandlers: Eventhandlers {
		#define EHMACRO(PREFIX) \
		class PREFIX##_pk_firedSoundHandler { \
			fired = "_this params ['_unit','_weapon']; private _soundArray = ['RHS_rattle_pk_1','RHS_rattle_pk_2','RHS_rattle_pk_3','RHS_rattle_pk_4','RHS_rattle_pk_5','RHS_rattle_pk_6'];[_unit,_weapon,_soundArray,3] call RHS_fnc_beltRattle; private _sound = 'RHS_boltSnap_pk';[_unit,_weapon,_sound] call RHS_fnc_boltSnap"; \
		};
		EHMACRO(PREFIX)
		#undef EHMACRO
	};
};