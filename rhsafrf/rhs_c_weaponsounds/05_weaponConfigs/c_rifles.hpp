// AK 74
class rhs_weap_ak74m_Base_F: Rifle_Base_F {
	class Single: Mode_SemiAuto {
		sounds[] = {"Standardsound","SilencedSound"};
		class StandardSound {
			PACKAGE(ak74,rifle_small,PREFIX)
		};
		class SilencedSound {
			PACKAGE(sd_AK74,sd_Rifle1,PREFIX)
		};
	};
	class FullAuto: Mode_FullAuto {
		sounds[] = {"Standardsound","SilencedSound"};
		class StandardSound {
			PACKAGE(ak74,rifle_small,PREFIX)
		};
		class SilencedSound {
			PACKAGE(sd_AK74,sd_Rifle1,PREFIX)
		};
	};
};

class rhs_weap_ak74m : rhs_weap_ak74m_Base_F {};

// AKM
class rhs_weap_akm : rhs_weap_ak74m {
	class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound","SilencedSound"};
	 	class StandardSound {
			PACKAGE(ak47,rifle_med,PREFIX)
		};
		class SilencedSound {
			PACKAGE(sd_AKM,sd_MMG1,PREFIX)
		};
	};
	class FullAuto: Mode_FullAuto {
		sounds[] = {"StandardSound","SilencedSound"};
	 	class StandardSound {
			PACKAGE(ak47,rifle_med,PREFIX)
		};
		class SilencedSound {
			PACKAGE(sd_AKM,sd_MMG1,PREFIX)
		};
	};
};
class rhs_weap_ak103_base : rhs_weap_akm {
	class Burst: Mode_Burst {
		sounds[] = {"StandardSound","SilencedSound"};
	 	class StandardSound {
			PACKAGE(ak47,rifle_med,PREFIX)
		};
		class SilencedSound {
			PACKAGE(sd_AKM,sd_MMG1,PREFIX)
		};
	};
};


// SVD
class rhs_weap_svd : rhs_weap_ak74m {
	class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound","SilencedSound"};
	 	class StandardSound {
			PACKAGE(dragunov,rifle2,PREFIX)
		};
		class SilencedSound {
			PACKAGE(sd_SVD,sd_mmg1,PREFIX)
		};
	};
};

class rhs_weap_svdp : rhs_weap_svd {
	class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound","SilencedSound"};
	 	class StandardSound {
			PACKAGE(dragunov,rifle2,PREFIX)
		};
		class SilencedSound {
			PACKAGE(sd_SVD,sd_mmg1,PREFIX)
		};
	};
};