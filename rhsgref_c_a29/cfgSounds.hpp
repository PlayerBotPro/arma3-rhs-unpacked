class CfgSounds
{
	class RHS_JST_Ejection_Sound
	{
		sound[]=
		{
			"A3\sounds_f\weapons\launcher\nlaw_final_2",
			3.1622777,
			1,
			1400
		};
		name="F35_ejection_sound";
		titles[]={};
		duration=3;
	};
};
class CfgSoundShapes
{
	class RHS_JST_A29_Plane_Whistle_SoundShape
	{
		type		= "cone";
		innerVolume	= 1;
		outerVolume	= 0.2;
		innerAngle	= 160;
		outerAngle	= 280;
		azimuth		= 0;
		elevation	= 0;
	};
	class RHS_JST_A29_Plane_Whistle_Rear_SoundShape
	{
		type		= "cone";
		innerVolume	= 1;
		outerVolume	= 0.2;
		innerAngle	= 160;
		outerAngle	= 280;
		azimuth		= -180;
		elevation	= 0;
	};
};
class CfgSoundShaders
{
	class RHS_JST_A29_Ext_Taxi_SoundShader
	{
		samples[]=
		{
			
			{
				"\rhsgref\addons\rhsgref_a29\sounds\A_29_Ext_Taxi.wav",
				1
			}
		};
		frequency	= "0.9*engineOn*(camPos)*(0.8+(.2*thrust))";
		volume		= "1*engineOn*camPos*(rpm factor[0,1])*(thrust factor[0.5,0])";
		range		= 750;
	};
	class RHS_JST_A29_Ext_High_SoundShader
	{
		samples[]=
		{
			
			{
				"\rhsgref\addons\rhsgref_a29\sounds\A_29_Ext_High.wav",
				1
			}
		};
		frequency	= "engineOn*(camPos)*(0.8+(0.4*thrust))";
		volume		= "2.0*camPos*(rpm factor[0.7,1])*(thrust factor[0,0.5])";
		range		= 750;
	};
	class RHS_JST_A29_Ext_Whistle_SoundShader
	{
		samples[]=
		{
			
			{
				"\rhsgref\addons\rhsgref_a29\sounds\A_29_Whistle.wav",
				1
			}
		};
		frequency	= 0.55;
		volume		= "0.2*camPos*(speed factor [46, 100])*(distance interpolate [3,50,0.3,1])";
		range		= 750;
	};
	class RHS_JST_A29_Ext_Whistle_Rear_SoundShader
	{
		samples[]=
		{
			
			{
				"\rhsgref\addons\rhsgref_a29\sounds\A_29_Whistle_Rear.wav",
				1
			}
		};
		frequency	= 2.5;
		volume		= "0.15*camPos*(speed factor [46, 100])*(distance interpolate [3,50,0.3,1])";
		range		= 750;
	};
	class RHS_JST_A29_Ext_Flyby_SoundShader
	{
		samples[]=
		{
			
			{
				"\rhsgref\addons\rhsgref_a29\sounds\A_29_Flyby.wav",
				1
			}
		};
		frequency	= "0.8 min (rpm + 0.5)*(rpm factor[0.5, 1.1])";
		volume		= "2.0*camPos*(speed factor [46, 100])";
		range		= 750;
		rangeCurve[] = 
		{
			{0,0},
			{15,0.1},
			{30,1},
			{750,0}
		};
	};
	class RHS_JST_A29_Ext_Flyby_Rumble_SoundShader
	{
		samples[]=
		{
			
			{
				"\rhsgref\addons\rhsgref_a29\sounds\A_29_Flyby_Rumble.wav",
				1
			}
		};
		frequency	= "1.0 min (rpm + 0.5)*(rpm factor[0.5, 1.1])";
		volume		= "0.9*camPos*(speed factor [46, 100])";
		range		= 750;
	};
	class RHS_JST_A29_Ext_Dist_Front_SoundShader
	{
		samples[]=
		{
			
			{
				"\rhsgref\addons\rhsgref_a29\sounds\A_29_Dist_Front.wav",
				1
			}
		};
		frequency	= "engineOn*(camPos)*(1+(.2*thrust))";
		volume		= "1.5 *camPos*(rpm factor[0.5, 1])*(speed factor [-30, 46])";
		range		= 3000;
	};
	class RHS_JST_A29_Ext_Dist_Rear_SoundShader
	{
		samples[]=
		{
			
			{
				"\rhsgref\addons\rhsgref_a29\sounds\A_29_Dist_Rear.wav",
				1
			}
		};
		frequency	= "engineOn*(camPos)*(1+(.2*thrust))";
		volume		= "1 *camPos*(rpm factor[0.5, 1])";
		range		= 3000;
	};
	class RHS_JST_A29_snd_int_jet
	{
		samples[]=
		{
			{
				"rhsgref\addons\rhsgref_a29\sounds\int_jet_2.wav",
				1
			}
		};
		frequency	=1;
		volume		="engineOn*(1-camPos)*(rpm factor [0.3, .95])";
	};
	class RHS_JST_A29_snd_int_prop
	{
		samples[]=
		{
			{
				"rhsgref\addons\rhsgref_a29\sounds\ext_prop_close_2.wav",
				1
			}
		};
		frequency	="engineOn*(1-camPos)*(0.95+(.2*thrust))";
		volume		="engineOn*(1-camPos)*(rpm factor [0.3, .95])";
	};
};
class CfgSoundSets
{
	class RHS_JST_A29_Ext_Taxi_SoundSet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_Ext_Taxi_SoundShader"
		};
		volumeFactor			= 1;
		spatial					= 1;
		loop					= 1;
		volumeCurve				= "LinearCurve";
		sound3DProcessingType	= "JetExt_Close_3DProcessingType";
		occlusionFactor			= 0.445;
		obstructionFactor		= 0.35;
	};
	class RHS_JST_A29_Ext_High_SoundSet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_Ext_High_SoundShader"
		};
		volumeFactor			= 1;
		spatial					= 1;
		loop					= 1;
		volumeCurve				= "LinearCurve";
		sound3DProcessingType	= "JetExt_Close_3DProcessingType";
		occlusionFactor			= 0.445;
		obstructionFactor		= 0.35;
		speedOfSound			= 0;
	};
	class RHS_JST_A29_Ext_Whistle_SoundSet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_Ext_Whistle_SoundShader"
		};
		volumeFactor			= 1;
		spatial					= 1;
		loop					= 1;
		shape					= "RHS_JST_A29_Plane_Whistle_SoundShape";
		volumeCurve				= "LogReverse1Curve";
		sound3DProcessingType	= "JetExt_Close_3DProcessingType";
	};
	class RHS_JST_A29_Ext_Whistle_Rear_SoundSet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_Ext_Whistle_Rear_SoundShader"
		};
		volumeFactor			= 1;
		spatial					= 1;
		loop					= 1;
		shape					= "RHS_JST_A29_Plane_Whistle_Rear_SoundShape";
		volumeCurve				= "LinearCurve";
		sound3DProcessingType	= "JetExt_Close_3DProcessingType";
	};
	class RHS_JST_A29_Ext_Flyby_SoundSet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_Ext_Flyby_SoundShader"
		};
		volumeFactor			= 1;
		spatial					= 1;
		loop					= 1;
		volumeCurve				= "LinearCurve";
		sound3DProcessingType	= "JetExt_Close_3DProcessingType";
		occlusionFactor			= 0.5;
		obstructionFactor		= 0;
	};
	class RHS_JST_A29_Ext_Flyby_Rumble_SoundSet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_Ext_Flyby_Rumble_SoundShader"
		};
		volumeFactor			= 1;
		spatial					= 1;
		loop					= 1;
		volumeCurve				= "LinearCurve";
		sound3DProcessingType	= "JetExt_Middle_3DProcessingType";
		occlusionFactor			= 0.5;
		obstructionFactor		= 0;
	};
	class RHS_JST_A29_Ext_Dist_Front_SoundSet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_Ext_Dist_Front_SoundShader"
		};
		volumeFactor			= 1.2;
		spatial					= 1;
		loop					= 1;
		volumeCurve				= "LinearCurve";
		shape					= "FrontSemispace10";
		sound3DProcessingType	= "JetExt_Distant_3DProcessingType";
		occlusionFactor			= 0.5;
		obstructionFactor		= 0;
		speedOfSound			= 0;
	};
	class RHS_JST_A29_Ext_Dist_Rear_SoundSet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_Ext_Dist_Rear_SoundShader"
		};
		volumeFactor			= 1.2;
		spatial					= 1;
		loop					= 1;
		volumeCurve				= "InverseSquare1Curve";
		shape					= "RearSemispace10";
		sound3DProcessingType	= "JetExt_Distant_3DProcessingType";
		occlusionFactor			= 0.5;
		obstructionFactor		= 0;
		speedOfSound			= 0;
	};
	class RHS_JST_A29_snd_int_jet
	{
		soundShaders[]=
		{
			"RHS_JST_A29_snd_int_jet"
		};
		volumeFactor			= 3;
		spatial					= 0;
		loop					= 1;
		sound3dProcessingType	= "none";
	};
	class RHS_JST_A29_snd_int_prop
	{
		soundShaders[]=
		{
			"RHS_JST_A29_snd_int_prop"
		};
		volumeFactor			= 3;
		spatial					= 0;
		loop					= 1;
		sound3dProcessingType	= "VehicleInt_Front_3DProcessingType";
	};
};