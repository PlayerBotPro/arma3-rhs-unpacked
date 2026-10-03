
class CfgSoundSets
{
	class RHSUSF_M1_Engine_RMP0_EXT_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M1_Engine_RMP0_EXT_SoundShader"
		};
		volumeFactor=3.5;
		spatial=1;
		loop=1;
	};
	class RHSUSF_M1_Engine_RMP1_EXT_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M1_Engine_RMP1_EXT_SoundShader"
		};
		volumeFactor=1.5;
		spatial=1;
		loop=1;
	};
	class RHSUSF_M1_Engine_RMP2_EXT_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M1_Engine_RMP2_EXT_SoundShader"
		};
		volumeFactor=1.5;
		spatial=1;
		loop=1;
	};
	class RHSUSF_M1_Engine_RMP3_EXT_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M1_Engine_RMP3_EXT_SoundShader"
		};
		volumeFactor=1.5;
		spatial=1;
		loop=1;
	};
	class RHSUSF_M1_Engine_RMP4_EXT_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M1_Engine_RMP4_EXT_SoundShader"
		};
		volumeFactor=1.5;
		spatial=1;
		loop=1;
	};
	class RHSUSF_M1_EngineBurst_EXT_SoundSet
	{
		soundShaders[]=
		{
			"RHSUSF_M1_EngineBurst_EXT_SoundShader"
		};
		volumeFactor=1;
		playTrigger="thrust * (angVelocity factor[0.1,0]) * (speed factor[5,4.9]) - 0.1";
		spatial=1;
		loop=0;
	};
};
class cfgSoundShaders
{

	class RHSUSF_M1_Engine_RMP0_EXT_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_m1a1\sounds\m1eng_high",
				1
			}
		};
		frequency="1 * (1 + 1 * ((rpm factor [1300,	3300]) - 0))";
		volume="engineOn * 1.7 * (rpm factor [600,	1200])* (rpm interpolate [1600,2500,1,0.3])";
		range=100;
	};
	class RHSUSF_M1_Engine_RMP1_EXT_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_m1a1\sounds\extm1rumble",
				1
			}
		};
		frequency="1 * (1 + 1 * ((rpm factor [1200,	3300]) - (1800 - 1100)/(3300 - 1100)))";
		volume="engineOn * 2 * (((rpm factor [1200,	3300]) factor[ 0 + (((1800 - 1100)/(3300 - 1100) - 0) - (1 * (((1800 - 1100)/(3300 - 1100) - 0)))) / 2, (1800 - 1100)/(3300 - 1100) - (((1800 - 1100)/(3300 - 1100) - 0) - (1 * (((1800 - 1100)/(3300 - 1100) - 0)))) / 2]) * ((rpm factor [1200,	3300]) factor[ (2200 - 1100)/(3300 - 1100) - (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2, (1800 - 1100)/(3300 - 1100) + (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2]))";
		range=300;
	};
	class RHSUSF_M1_Engine_RMP2_EXT_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_m1a1\sounds\extm1rumble",
				1
			}
		};
		frequency="1 * (1 + 1 * ((rpm factor [1200,	3300]) - (2200 - 1100)/(3300 - 1100)))";
		volume="engineOn * 2 * (((rpm factor [1200,	3300]) factor[ (1800 - 1100)/(3300 - 1100) + (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2, (2200 - 1100)/(3300 - 1100) - (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100)) - (1 * (((2200 - 1100)/(3300 - 1100) - (1800 - 1100)/(3300 - 1100))))) / 2]) * ((rpm factor [1200,	3300]) factor[ (3000 - 1100)/(3300 - 1100) - (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2, (2200 - 1100)/(3300 - 1100) + (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2]))";
		range=325;
	};
	class RHSUSF_M1_Engine_RMP3_EXT_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_m1a1\sounds\extm1rumble",
				1
			}
		};
		frequency="1 * (1 + 1 * ((rpm factor [1200,	3300]) - (3000 - 1100)/(3300 - 1100)))";
		volume="engineOn * 2 * (((rpm factor [1200,	3300]) factor[ (2200 - 1100)/(3300 - 1100) + (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2, (3000 - 1100)/(3300 - 1100) - (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100)) - (1 * (((3000 - 1100)/(3300 - 1100) - (2200 - 1100)/(3300 - 1100))))) / 2]) * ((rpm factor [1200,	3300]) factor[ 1 - ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2, (3000 - 1100)/(3300 - 1100) + ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2]))";
		range=325;
	};
	class RHSUSF_M1_Engine_RMP4_EXT_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_m1a1\sounds\extm1rumble",
				1
			}
		};
		frequency="1 * (1 + 1 * ((rpm factor [1200,	3300]) - 1))";
		volume="engineOn * 2 * ((rpm factor [1200,	3300]) factor[ (3000 - 1100)/(3300 - 1100) + ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2, 1 - ((1 - (3000 - 1100)/(3300 - 1100)) - (1 * ((1 - (3000 - 1100)/(3300 - 1100))))) / 2])";
		range=350;
	};
	class RHSUSF_M1_EngineBurst_EXT_SoundShader
	{
		samples[]=
		{
			
			{
				"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm1",
				1
			},
			
			{
				"rhsusf\addons\rhsusf_m1a1\sounds\ABRAMS_exhaust_ext_rpm1",
				1
			}
		};
		frequency=1;
		volume=1;
		range=250;
	};
};