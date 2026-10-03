// Bases
class RHSUSF_trackSurfaceSound_ext_base_SoundSet { 
	spatial = 1; 
	loop = 1; 
	occlusionObstruction = 1; 
	occlusionFactor = 0.4; 
	obstructionFactor = 0.5; 
	sound3DProcessingType = "RHSUSF_armor_ext_base_3DProcessingType";
	volumeFactor = 0.68;
	volumeCurve = "InverseSquare2Curve";
}; 
class RHSUSF_waterNoise_ext_base_SoundSet { 
	spatial = 1; 
	loop = 1; 
	occlusionObstruction = 1; 
	occlusionFactor = 0.25; 
	obstructionFactor = 0.15; 
	sound3DProcessingType = "RHSUSF_heavyBoat_water_base_3DProcessingType";
	volumeFactor = 0.72;
	volumeCurve = "InverseSquare2Curve";
	posOffset[] = {0,0,-1.8};
}; 
class RHSUSF_armor_Int_Base_SoundSet { 
	spatial = 0; 
	loop = 1;
	sound3DProcessingType = "VehicleInt_Middle_3DProcessingType";
	volumeFactor = 0.9;
};

/* External */
class RHSUSF_trackSurfaceSound_ext_soft_soundSet: RHSUSF_trackSurfaceSound_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_trackSurfaceSound_ext_soft_SoundShader"};
	posOffset[] = {0,0,-1};
}; 
class RHSUSF_trackSurfaceSound_ext_hard_soundSet: RHSUSF_trackSurfaceSound_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_trackSurfaceSound_ext_hard_SoundShader"};
	posOffset[] = {0,0,-1};
}; 
class RHSUSF_trackSurfaceSound_ext_sand_soundSet: RHSUSF_trackSurfaceSound_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_trackSurfaceSound_ext_sand_soundShader"};
	posOffset[] = {0,0,-1};
}; 
/* Internal */
// Internal straining when breaking
class RHSUSF_int_breakingStrain_soundSet: RHSUSF_armor_Int_Base_SoundSet { 
	soundShaders[] = {"Tanks_Material_Strain_Int_SoundShader"};
	loop = false;
	sound3DProcessingType = "VehicleInt_Middle_3DProcessingType";
	PlayTrigger = "(longSlip factor [-0.12,-0.13])";
	volumeFactor = 1;
};
class RHSUSF_tankRattling_1_soundSet: RHSUSF_armor_Int_Base_SoundSet {
	soundShaders[] = {"RHSUSF_tankRattling_1_soundShader"}; 
	volumeFactor = 0.93;
}; 
class RHSUSF_curveStress_1_soundSet: RHSUSF_armor_Int_Base_SoundSet {
	soundShaders[] = {"RHSUSF_curveStress_1_soundShader"}; 
	volumeFactor = 0.93;
}; 






/* BoatStuff */
// heavyBoat
class RHSUSF_heavyBoat_water_idle_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_heavyBoat_water_idle_soundShader"};
}; 
class RHSUSF_heavyBoat_water_slow_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_heavyBoat_water_slow_soundShader"};
}; 
class RHSUSF_heavyBoat_water_mid_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_heavyBoat_water_mid_soundShader"};
}; 
class RHSUSF_heavyBoat_water_fast_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_heavyBoat_water_fast_soundShader"};
}; 
class RHSUSF_heavyBoat_landScrub_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_heavyBoat_landScrub_soundShader"};
}; 	
class RHSUSF_heavyBoat_int_stress_soundSet: RHSUSF_armor_Int_Base_SoundSet {
	soundShaders[] = {"RHSUSF_heavyBoat_int_stress_soundShader"}; 
	volumeFactor = 0.93;
}; 

// boat
class RHSUSF_boat_water_idle_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_boat_water_idle_soundShader"};
}; 
class RHSUSF_boat_water_slow_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_boat_water_slow_soundShader"};
}; 
class RHSUSF_boat_water_mid_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_boat_water_mid_soundShader"};
}; 
class RHSUSF_boat_water_fast_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_boat_water_fast_soundShader"};
}; 
class RHSUSF_boat_landScrub_soundSet: RHSUSF_waterNoise_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_boat_landScrub_soundShader"};
}; 	
class RHSUSF_boat_int_stress_soundSet: RHSUSF_armor_Int_Base_SoundSet {
	soundShaders[] = {"RHSUSF_boat_int_stress_soundShader"}; 
	volumeFactor = 0.93;
}; 