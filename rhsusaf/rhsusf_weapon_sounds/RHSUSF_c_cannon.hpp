class autocannon_Base_F;
class autocannon_30mm_CTWS: autocannon_Base_F {
    class HE: autocannon_Base_F {
        class player;
        class close;
        class short;
        class medium;
        class far;
    };
    class AP: autocannon_Base_F {
		class player;
        class close;
        class short;
        class medium;
        class far;
    };
};

// M242BC
class RHS_weap_M242BC: autocannon_30mm_CTWS {
    class HE: HE {
        class player: player {
            class StandardSound {
				PACKAGE_VEH(m242,autocannon)
            };
        };
        class close: close {
            class StandardSound {
				PACKAGE_VEH(m242,autocannon)
            };
        };
        class short: short {
            class StandardSound {
				PACKAGE_VEH(m242,autocannon)
            };
        };
        class medium: medium {
            class StandardSound {
				PACKAGE_VEH(m242,autocannon)
            };
        };
        class far: far {
            class StandardSound {
				PACKAGE_VEH(m242,autocannon)
            };
        };
    };
    class AP: AP {
        class player: player {
            class StandardSound {
				PACKAGE_VEH(m242,autocannon)
            };
        };
        class close: close  {
            class StandardSound {
				PACKAGE_VEH(m242,autocannon)
            };
        };
        class short: short {
            class StandardSound {
				PACKAGE_VEH(m242,autocannon)
            };
        };
        class medium: medium {
            class StandardSound {
				PACKAGE_VEH(m242,autocannon)
            };
        };
        class far: far {
            class StandardSound {
				PACKAGE_VEH(m242,autocannon)
            };
        };
    };
};

