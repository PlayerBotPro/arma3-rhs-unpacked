// Bases
class RHSUSF_Abrams_ext_base_SoundSet { 
	spatial = 1; 
	loop = 1; 
	occlusionObstruction = 1; 
	occlusionFactor = 0.2; 
	obstructionFactor = 0.2; 
	sound3DProcessingType = "RHSUSF_armor_ext_base_3DProcessingType";
	volumeFactor = 0.71;
	volumeCurve = "InverseSquare2Curve";
}; 
class RHSUSF_Abrams_dist_base_SoundSet { 
	spatial = 1; 
	loop = 1; 
	occlusionObstruction = 1; 
	occlusionFactor = 0.95; 
	obstructionFactor = 1; 
	sound3DProcessingType = "RHSUSF_armor_ext_base_3DProcessingType";
	volumeFactor = 0.5;
	volumeCurve = "InverseSquare2Curve";
}; 
class RHSUSF_Abrams_ext_exhaust_base_SoundSet { 
	spatial = 1; 
	loop = 1; 
	occlusionObstruction = 1; 
	occlusionFactor = 0.2; 
	obstructionFactor = 0.2; 
	sound3DProcessingType = "RHSUSF_armor_exhaust_ext_base_3DProcessingType";
	volumeFactor = 0.93;
	volumeCurve = "InverseSquare2Curve";
	shape = "RHSUSF_Abrams_exhaust_rearSemispace";
}; 
class RHSUSF_Abrams_Int_Base_SoundSet { 
	spatial = 0; 
	loop = 1;
	sound3DProcessingType = "VehicleInt_Middle_3DProcessingType";
	volumeFactor = 0.9;
};

// EngineStuff
/* Internal */
class RHSUSF_Abrams_int_idle_soundSet: RHSUSF_Abrams_Int_Base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_int_idle_soundShader"}; 
}; 
class RHSUSF_Abrams_int_slow_soundSet: RHSUSF_Abrams_Int_Base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_int_slow_soundShader"}; 
}; 
class RHSUSF_Abrams_int_mid_soundSet: RHSUSF_Abrams_Int_Base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_int_mid_soundShader"}; 
}; 
class RHSUSF_Abrams_int_fast_soundSet: RHSUSF_Abrams_Int_Base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_int_fast_soundShader"}; 
}; 
class RHSUSF_Abrams_int_acce_soundSet: RHSUSF_Abrams_Int_Base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_int_acce_soundShader"}; 
	playTrigger = "((thrust * (angVelocity factor[0.3,0.1]) * engineOn ) - 0.1)";
	loop = false;
}; 

class RHSUSF_Abrams_exhaust_int_idle_SoundSet: RHSUSF_Abrams_Int_Base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_exhaust_int_idle_SoundShader"};
	sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
	volumeFactor = 0.8;
}; 
class RHSUSF_Abrams_exhaust_int_slow_SoundSet: RHSUSF_Abrams_Int_Base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_exhaust_int_slow_SoundShader"};
	sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
	volumeFactor = 0.8;
}; 
class RHSUSF_Abrams_exhaust_int_mid_SoundSet: RHSUSF_Abrams_Int_Base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_exhaust_int_mid_SoundShader"};
	sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
	volumeFactor = 0.8;
}; 
class RHSUSF_Abrams_exhaust_int_fast_SoundSet: RHSUSF_Abrams_Int_Base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_exhaust_int_fast_soundShader"};
	sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
	volumeFactor = 0.8;
}; 

// Rain
class RHSUSF_Abrams_int_rain_soundSet: RHSUSF_Abrams_Int_Base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_int_rain_soundShader"}; 
}; 	


/* External */
class RHSUSF_Abrams_ext_idle_SoundSet: RHSUSF_Abrams_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_ext_idle_SoundShader"};
	posOffset[] = {0,0,0};
}; 
class RHSUSF_Abrams_ext_slow_SoundSet: RHSUSF_Abrams_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_ext_slow_SoundShader"};
	posOffset[] = {0,0,0};		
}; 
class RHSUSF_Abrams_ext_mid_SoundSet: RHSUSF_Abrams_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_ext_mid_SoundShader"};
	posOffset[] = {0,0,0};
}; 
class RHSUSF_Abrams_ext_fast_SoundSet: RHSUSF_Abrams_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_ext_fast_SoundShader"};
	posOffset[] = {0,0,0};
}; 

class RHSUSF_Abrams_exhaust_ext_idle_SoundSet: RHSUSF_Abrams_ext_exhaust_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_exhaust_ext_idle_SoundShader"};
	posOffset[] = {0,-1.8,0};
}; 
class RHSUSF_Abrams_exhaust_ext_slow_SoundSet: RHSUSF_Abrams_ext_exhaust_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_exhaust_ext_slow_SoundShader"};
	posOffset[] = {0,-1.8,0};	
}; 
class RHSUSF_Abrams_exhaust_ext_mid_SoundSet: RHSUSF_Abrams_ext_exhaust_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_exhaust_ext_mid_SoundShader"};
	posOffset[] = {0,-1.8,0};
}; 
class RHSUSF_Abrams_exhaust_ext_fast_SoundSet: RHSUSF_Abrams_ext_exhaust_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_exhaust_ext_fast_soundShader"};
	posOffset[] = {0,-1.8,0};
}; 
//Tracks
class RHSUSF_Abrams_ext_tracks_slow_soundSet: RHSUSF_Abrams_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_ext_tracks_slow_soundShader"};
	posOffset[] = {0,0,0};
	volumeFactor = 0.95;
}; 
class RHSUSF_Abrams_ext_tracks_mid_soundSet: RHSUSF_Abrams_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_ext_tracks_mid_soundShader"};
	posOffset[] = {0,0,0};
	volumeFactor = 0.95;
}; 
class RHSUSF_Abrams_ext_tracks_fast_soundSet: RHSUSF_Abrams_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_ext_tracks_fast_soundShader"};
	posOffset[] = {0,0,0};
	volumeFactor = 0.95;
}; 
// Rumbling
class RHSUSF_Abrams_ext_rumble_soundSet: RHSUSF_Abrams_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_ext_rumble_soundShader"};
	posOffset[] = {0,0,-1};
	volumeFactor = 0.9;
}; 
// Dist
class RHSUSF_Abrams_dist_slow_SoundSet: RHSUSF_Abrams_dist_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_dist_slow_SoundShader"};
}; 
class RHSUSF_Abrams_dist_mid_SoundSet: RHSUSF_Abrams_dist_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_dist_mid_SoundShader"};
}; 
class RHSUSF_Abrams_dist_fast_SoundSet: RHSUSF_Abrams_dist_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_dist_fast_SoundShader"};
}; 

//Acce
class RHSUSF_Abrams_ext_acce_soundSet: RHSUSF_Abrams_ext_exhaust_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_ext_acce_soundShader"};
	posOffset[] = {0,-1.8,0};
	loop = false;
	playTrigger = "((thrust * (angVelocity factor[0.2,0.12]) * engineOn) - 0.1)";
}; 
class RHSUSF_Abrams_ext_acce_high_soundSet: RHSUSF_Abrams_ext_exhaust_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_ext_acce_high_soundShader"};
	posOffset[] = {0,-1.8,0};
	loop = false;
	playTrigger = "((thrust * (angVelocity factor[0.3,0.1]) * engineOn ) - 0.1)";
}; 

//Rain
class RHSUSF_Abrams_ext_rain_SoundSet: RHSUSF_Abrams_ext_base_SoundSet {
	soundShaders[] = {"RHSUSF_Abrams_ext_rain_SoundShader"};
	posOffset[] = {0,0,0};
}; 