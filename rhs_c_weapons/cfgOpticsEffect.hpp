class CfgOpticsEffect {
	class rhs_NSPU_Abera {
		type = "chromaberration";
		priority = 650;
		params[] = {0.04, 0.04, 1};
	};
	class rhs_NSPU_Blur {
		type = "dynamicblur";
		priority = 450;
		params[] = {1.2};
	};
	class rhs_NSPU_RadialBlur {
		type = "radialblur";
		priority = 700;
		params[] = {0.001, 0, 0, 0};
	};
	class rhs_NSPU_FilmGrain {
		type = "FilmGrain";
		priority = 2050;
		params[] = {0.15, 0f.4, 1.57, 0.5, 0.5, 1};
	};
	class rhs_1P78_Blur {
		type = "radialblur";
		priority = 100;
		params[] = {0.0025, 0, 0, 0};
	};
	class rhs_1P29_Blur {
		type = "radialblur";
		priority = 100;
		params[] = {0.001, 0, 0, 0};
	};
	class rhs_pso1_Blur {
		type = "radialblur";
		priority = 100;
		params[] = {0.001, 0, 0, 0};
	};
};