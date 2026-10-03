class CfgSoundShaders {
	#include "rhs_weaponSoundShaders.hpp"
	#include "rhs_tailSoundShaders.hpp"
	class rhs_nuke_explosion_soundshader
	{
		samples[] = {{"rhsafrf\addons\rhs_c_heavyweapons\sounds\nuke",1}};
		volume = 1.12202;
		range = 8000;
		rangeCurve[] = {{0,1},{100,1},{300,1},{8000,1}};
	};
	class rhs_gp25_closeShot_SoundShader
	{
		samples[] = {{"rhsafrf\addons\rhs_sounds\ugl\GP-25_1",1},{"rhsafrf\addons\rhs_sounds\ugl\GP-25_2",1}};
		volume = 1;
		range = 30;
		rangeCurve = "closeShotCurve";
	};
	class rhs_afganitaps_closeShot_SoundShader
	{
		samples[] = {{"rhsafrf\addons\rhs_sounds\afganit\afganitAPS_closeShot01",1}};
		volume = 1;
		range = 300;
		rangeCurve[] = {{0,1},{30,1},{300,0}};
	};
	class rhs_afganitaps_distShot_SoundShader
	{
		samples[] = {{"rhsafrf\addons\rhs_sounds\afganit\afganitAPS_distShot01",1}};
		volume = 1.99526;
		range = 4000;
		rangeCurve[] = {{0,0},{30,0},{300,1},{4000,1}};
	};
};