

// PP2000
class rhs_weap_pp2000: hgun_PDW2000_F {
	class Single : Single {
		sounds[] = {"StandardSound"};
		class StandardSound {
			PACKAGE(pp2000,pistol1)
		};
	};
	class FullAuto : FullAuto {
		class StandardSound {
			PACKAGE(pp2000,pistol1)
		};
	};
};

// AK74
class rhs_weap_ak74m_Base_F: Rifle_Base_F {
	class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(AK74,Rifle1)
		};
		class SilencedSound {
			PACKAGE(sd_AK74,sd_Rifle1)
		};
	};
	class FullAuto: Mode_FullAuto {
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(AK74,Rifle1)
		};
		class SilencedSound {
			PACKAGE(sd_AK74,sd_Rifle1)
		};
	};
};
class rhs_weap_ak74m : rhs_weap_ak74m_Base_F{};

class rhs_weap_akm : rhs_weap_ak74m {
	class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound","SilencedSound"};
	 	class StandardSound {
			PACKAGE(AKM,MMG1)
		};
		class SilencedSound {
			PACKAGE(sd_AKM,sd_MMG1)
		};
	};
	class FullAuto: Mode_FullAuto {
		sounds[] = {"StandardSound","SilencedSound"};
	 	class StandardSound {
			PACKAGE(AKM,MMG1)
		};
		class SilencedSound {
			PACKAGE(sd_AKM,sd_MMG1)
		};
	};
};
	

// PKP
class rhs_pkp_base: Rifle_Long_Base_F {
	class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound"};
	 	class StandardSound {
			PACKAGE(PK,MMG1)
		};
	};
	class FullAuto: Mode_FullAuto {
		sounds[] = {"StandardSound"};
	 	class StandardSound {
			PACKAGE(PK,MMG1)
		};
	};
};
class rhs_weap_pkp: rhs_pkp_base{};

//PKT
class PKT: MGun{};

class rhs_weap_pkt : PKT {
	class manual: MGun {
		sounds[] = {"StandardSound"};
	 	class StandardSound {
			PACKAGE_VEH(PK,MMG1)
		};
	};
};

// SVD
class rhs_weap_svd : rhs_weap_ak74m {
	class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(SVD,Rifle2)
		};
		class SilencedSound {
			PACKAGE(sd_SVD,sd_mmg1)
		};
	};
};

class rhs_weap_svdp : rhs_weap_svd {
	class Single: Mode_SemiAuto {
		sounds[] = {"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(SVD,Rifle2)
		};
		class SilencedSound {
			PACKAGE(sd_SVD,sd_mmg1)
		};
	};
};

class rhs_weap_orsis_Base_F: Rifle_Base_F {
	class Single: Mode_SemiAuto {
		sounds[]={"StandardSound","SilencedSound"};
		class StandardSound {
			PACKAGE(orsis,rifle2)
		};
		class SilencedSound {
			PACKAGE(sd_orsis,sd_mmg1)
		};
	};
};