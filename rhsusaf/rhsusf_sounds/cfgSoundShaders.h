class CfgSoundShaders {
	#include "rhsusf_weaponSoundShaders.hpp"
	#include "rhsusf_tailSoundShaders.hpp"
	#include "rhsusf_miscSoundShaders.hpp"
	class rhs_m203_closeShot_SoundShader
	{
		samples[] = {{"rhsusf\addons\rhsusf_sounds\ugl\ugl_1",1},{"rhsusf\addons\rhsusf_sounds\ugl\ugl_2",1}};
		volume = 1;
		range = 30;
		rangeCurve = "closeShotCurve";
	};
	class rhs_m32gl_closeShot_SoundShader
	{
		samples[] = {{"rhsusf\addons\rhsusf_sounds\m32\m32_1",1},{"rhsusf\addons\rhsusf_sounds\m32\m32_2",1}};
		volume = 1;
		range = 30;
		rangeCurve = "closeShotCurve";
	};
	class rhs_m32gl_closure_SoundShader
	{
		samples[] = {{"rhsusf\addons\rhsusf_sounds\m32\Closure_1",1},{"rhsusf\addons\rhsusf_sounds\m32\Closure_2",1}};
		volume = 1;
		range = 35;
		rangeCurve = "closeShotCurve";
	};
};