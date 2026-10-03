class CfgSoundSets {
	#include "rhsusf_weaponSoundSets.hpp"
	#include "rhsusf_tailSoundSets.hpp"
	#include "rhsusf_miscSoundSets.hpp"
	class Rifle_Shot_Base_SoundSet;
	class rhs_m203_shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"rhs_m203_closeShot_SoundShader","UGL_midShot_SoundShader","UGL_distShot_SoundShader"};
		volumeFactor = 1.4;
	};
	class rhs_m32gl_shot_SoundSet: Rifle_Shot_Base_SoundSet
	{
		soundShaders[] = {"rhs_m32gl_closure_SoundShader","rhs_m32gl_closeShot_SoundShader","UGL_midShot_SoundShader","UGL_distShot_SoundShader"};
		volumeFactor = 1.4;
	};
};