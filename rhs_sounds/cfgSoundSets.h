class CfgSoundSets {
	#include "rhs_weaponSoundSets.hpp"
	#include "rhs_tailSoundSets.hpp"
	class rhs_nuke_explosion_soundset
	{
		soundShaders[]			= {rhs_nuke_explosion_soundshader};
		volumeFactor			= 1.5;
		volumeCurve				= "LinearCurve";
		spatial					= 1;
		doppler					= 0;
		loop					= 0;
		sound3DProcessingType	= "ExplosionHeavy3DProcessingType";
		distanceFilter			= "explosionDistanceFreqAttenuationFilter";
	};
	class Rifle_Shot_Base_SoundSet;
	class rhs_gp25_shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"rhs_gp25_closeShot_SoundShader","UGL_midShot_SoundShader","UGL_distShot_SoundShader"};
		volumeFactor = 1.4;
	};
	class rhs_afganitAPS_soundset
	{
		soundShaders[] = {"rhs_afganitaps_closeShot_SoundShader","rhs_Afganitaps_distShot_SoundShader","Launcher_Adds_Kick_SoundShader","Launcher_Adds_Metal_SoundShader"};
		volumeFactor = 1;
		volumeCurve = "LinearCurve";
		spatial = 1;
		doppler = 1;
		loop = 0;
		sound3DProcessingType = "Launcher3DProcessingType";
		distanceFilter = "explosionDistanceFreqAttenuationFilter";
	};
};