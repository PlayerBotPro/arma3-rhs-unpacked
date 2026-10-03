#define FILEMACRO(PREFIX,FILEPATH) \
class CfgSoundShapes { \
	class PREFIX##_turbine_rearSemispace_Hind { \
		type = "cone"; \
		innerVolume = 1.0; \
		outerVolume = 0.60; \
		innerAngle = 140; \
		outerAngle = 275; \
		azimuth = 180; \
		elevation = -20; \
	}; \
	class PREFIX##_flyAwaySemispace { \
		type = "cone"; \
		innerVolume = 1.0; \
		outerVolume = 0.15; \
		innerAngle = 140; \
		outerAngle = 275; \
		azimuth = 180; \
		elevation = 0; \
	}; \
	class PREFIX##_flyTowardsSemispace { \
		type = "cone"; \
		innerVolume = 0.20; \
		outerVolume = 1.0; \
		innerAngle = 60; \
		outerAngle = 130; \
		azimuth = 180; \
		elevation = 0; \
	}; \
	class PREFIX##_Heli_bassRearSemispace_Hind { \
		type = "cone"; \
		innerVolume = 0.55; \
		outerVolume = 1.0; \
		innerAngle = 135; \
		outerAngle = 225; \
		azimuth = 180; \
		elevation = 0; \
	}; \
	class PREFIX##_Heli_rotorBassTopSemiSpace { \
		type = "cone"; \
		innerVolume = 0.35; \
		outerVolume = 1.0; \
		innerAngle = 80; \
		outerAngle = 150; \
		azimuth = 0; \
		elevation = -90; \
	}; \
	class PREFIX##_Heli_rotorScrewTopSemiSpace { \
		type = "cone"; \
		innerVolume = 1.0; \
		outerVolume = 0.05; \
		innerAngle = 165; \
		outerAngle = 275; \
		azimuth = 0; \
		elevation = -90; \
	}; \
	class PREFIX##_Heli_reverbSemiSpace { \
		type = "cone"; \
		innerVolume = 0; \
		outerVolume = 1.0; \
		innerAngle = 90; \
		outerAngle = 120; \
		azimuth = 0; \
		elevation = -90; \
	}; \
	class PREFIX##_Heli_rotorTopSemiSpace { \
		type = "cone"; \
		innerVolume = 0.05; \
		outerVolume = 1; \
		innerAngle = 80; \
		outerAngle = 150; \
		azimuth = 0; \
		elevation = -90; \
	}; \
	class PREFIX##_Heli_baseTopSemiSpace { \
		type = "cone"; \
		innerVolume = 0.8; \
		outerVolume = 1.0; \
		innerAngle = 75; \
		outerAngle = 140; \
		azimuth = 0; \
		elevation = -90; \
	}; \
	class PREFIX##_Heli_rotorSwiftTopSemiSpace { \
		type = "cone"; \
		innerVolume = 0; \
		outerVolume = 1.0; \
		innerAngle = 95; \
		outerAngle = 175; \
		azimuth = 0; \
		elevation = -90; \
	}; \
};
/*************************************************************************************/
FILEMACRO(PREFIX,FILEPATH)
#undef FILEMACRO
/*************************************************************************************/