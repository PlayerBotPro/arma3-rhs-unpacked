class CfgAnimationSourceSounds
{
	class RHS_PSzNR5
	{
		class Deploy_Radar
		{
			loop		= 0;
			terminate	= 0;
			trigger		= "direction";
			sound0[]	= {"rhsafrf\addons\rhs_bmp\sounds\TallMike_deploy.wav",1,1,25};
			sound[]		= {"sound0",1};
		};
		class Retract_Radar
		{
			loop		= 0;
			terminate	= 0;
			trigger		= "(1 - direction)";
			sound0[]	= {"rhsafrf\addons\rhs_bmp\sounds\TallMike_hide.wav",1,1,25};
			sound[]		= {"sound0",1};
		};
	};
};