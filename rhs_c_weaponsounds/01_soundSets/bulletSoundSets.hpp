	/* Rifle */
	class RHS_BulletSonicCrack_rifle_SoundSet {
		soundShaders[] = {
			"RHS_BulletSonicCrack_rifle_close_SoundShader",
			"RHS_BulletSonicCrack_rifle_forest_close_SoundShader",
			"RHS_BulletSonicCrack_rifle_mid_SoundShader",
			"RHS_BulletSonicCrack_rifle_forest_mid_SoundShader",
			"RHS_BulletSonicCrack_rifle_far_SoundShader"
		};
		volumeFactor = 1.15;
		volumeCurve = "InverseSquare3Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		//sound3DProcessingType = "WeaponMEdiumShot3DProcessingType";
		sound3DProcessingType = "RHS_rifleBulletCrack_3DProcessingType";
		frequencyRandomizer = 1.2;
		frequencyRandomizerMin = 0.2;
	};
	class RHS_bulletSonicCrackTail_rifle_SoundSet {
		soundShaders[] = {
			"RHS_BulletSonicCrack_rifle_tailMeadows_SoundShader",
			"RHS_BulletSonicCrack_rifle_tailForest_SoundShader",
			"RHS_BulletSonicCrack_rifle_tailHouses_SoundShader"
		};
		volumeFactor = 1.15;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 1.5;
		frequencyRandomizerMin = 0.2;
		//sound3DProcessingType = "SonicCrackTail3DProcessingType";
		sound3DProcessingType = "RHS_Tail_3DProcessingType";
		distanceFilter = "RHS_rifleShotDistanceFilter";
	};
	class RHS_bulletFlyBy_rifle_SoundSet {
		soundShaders[] = {"RHS_BulletFlyBy_rifle_SoundShader"};
		volumeFactor = 1.25;
		volumeCurve = "InverseSquare1Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};
	
	/* Shell */
	class RHS_BulletSonicCrack_shell_SoundSet {
		soundShaders[] = {
			"RHS_BulletSonicCrack_shell_close_SoundShader",
			"RHS_BulletSonicCrack_shell_far_SoundShader"
		};
		volumeFactor = 1.5;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		sound3DProcessingType = "WeaponMEdiumShot3DProcessingType";
		frequencyRandomizer = 0.8;
		frequencyRandomizerMin = 0.1;
	};
	class RHS_bulletSonicCrackTail_shell_SoundSet {
		soundShaders[] = {
			"RHS_BulletSonicCrack_shell_tailMeadows_SoundShader",
			"RHS_BulletSonicCrack_shell_tailForest_SoundShader",
			"RHS_BulletSonicCrack_shell_tailHouses_SoundShader"
		};
		volumeFactor = 1.5;
		volumeCurve = "InverseSquare2Curve";
		spatial = 1;
		doppler = 0;
		loop = 0;
		soundShadersLimit = 2;
		frequencyRandomizer = 1;
		frequencyRandomizerMin = 0.2;
		sound3DProcessingType = "RHS_Tail_3DProcessingType";
		distanceFilter = "RHS_rifleShotDistanceFilter";
	};
	class RHS_bulletFlyBy_shell_SoundSet {
		soundShaders[] = {"RHS_BulletFlyBy_shell_SoundShader"};
		volumeFactor = 1.45;
		volumeCurve = "InverseSquare2Curve";
		frequencyRandomizer = 2;
		frequencyRandomizerMin = 0.3;
		spatial = 1;
		doppler = 0;
		loop = 0;
	};