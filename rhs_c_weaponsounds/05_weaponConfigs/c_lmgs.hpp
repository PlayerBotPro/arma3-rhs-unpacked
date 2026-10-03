class rhs_weap_rpk_base: Rifle_Long_Base_F {
	class Single: Mode_SemiAuto {
		sounds[] = {"Standardsound","SilencedSound"};
		class StandardSound {
			PACKAGE(ak74,rifle_small,PREFIX)
		};
		class SilencedSound {
			PACKAGE(sd_AK74,sd_Rifle1,PREFIX)
		};
	};
	class Manual: Mode_FullAuto {
		sounds[] = {"Standardsound","SilencedSound"};
		class StandardSound {
			PACKAGE(ak74,rifle_small,PREFIX)
		};
		class SilencedSound {
			PACKAGE(sd_AK74,sd_Rifle1,PREFIX)
		};
	};
};