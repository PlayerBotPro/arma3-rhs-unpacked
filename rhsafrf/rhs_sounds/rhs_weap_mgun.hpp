// YakB
class gatling_30mm;

class rhs_weap_yakB : gatling_30mm
{
	class manual: Mode_FullAuto
	{
		sounds[] = {"StandardSound"};	
		class StandardSound
		{
			soundSetShot[] = {"RHS_yakb_Shot_SoundSet","RHS_yakb_Int_Shot_SoundSet","RHS_sniper1_Tail_SoundSet"};
		};
		soundburst = 0;
		soundcontinuous = 0;
	};
};