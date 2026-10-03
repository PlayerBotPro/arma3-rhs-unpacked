class CfgOpticsEffect {
	class rhs_ANPVS2_Abera {
		type = "chromaberration";
		priority = 250;
		params[] = {0.04, 0.04, 1};
	};
	
	class rhs_ANPVS2_Blur {
		type = "radialblur";
		priority = 100;
		params[] = {0.01, 0, 0.005, 0.005};
	};
	
	class rhs_ANPVS2_FilmGrain {
		type = "FilmGrain";
		priority = 2050;
		params[] = {0.15, .4, 1.57, 0.5, 0.5, 1};
	};
};