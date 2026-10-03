
class rhs_ammo_20mm_AP;
class rhs_ammo_20x139mm_AP : rhs_ammo_20mm_AP
{
	hit = 60;
	explosive = 0;
	indirectHit = 1;
	indirectHitRange = 0.3;
	typicalSpeed = 1050;
	RHA(46,1050)

	dangerRadiusBulletClose = 16;
	dangerRadiusHit = 40;
	suppressionRadiusBulletClose = 10;
	suppressionRadiusHit = 14;

	model = "\A3\Weapons_f\Data\bullettracer\tracer_white";
	tracerEndTime = 1.5;

	class CamShakeHit
	{
		power = 20;
		duration = "((round (20^0.25))*0.2 max 0.2)";
		frequency = 20;
		distance = 1;
	};
	class CamShakeFire
	{
		power = "(19^0.25)";
		duration = "((round (19^0.5))*0.2 max 0.2)";
		frequency = 20;
		distance = "((19^0.5)*8)";
	};
	class CamShakePlayerFire
	{
		power = 0.01;
		duration = 0.1;
		frequency = 20;
		distance = 1;
	};
};

class rhs_ammo_20x139mm_HE : rhs_ammo_20x139mm_AP
{
	hit = 20;
	explosive = 0.8;
	indirectHit = 4;
	indirectHitRange = 6.9;
	typicalSpeed = 1100;
	caliber = 1.4;

	dangerRadiusBulletClose = 20;
	dangerRadiusHit = 60;
	suppressionRadiusBulletClose = 12;
	suppressionRadiusHit = 24;

	tracerEndTime = 2;

	class CamShakeExplode
	{
		power = "(19*0.2)";
		duration = "((round (19^0.5))*0.2 max 0.2)";
		frequency = 20;
		distance = "((2 + 19^0.5)*8)";
	};
	class CamShakeHit
	{
		power = 19;
		duration = "((round (19^0.25))*0.2 max 0.2)";
		frequency = 20;
		distance = 1;
	};
};
class SubmunitionBase;
class rhs_ammo_20x139mm_mixed: SubmunitionBase
{
	cost				= 10;
	model 				= "\A3\Weapons_f\empty";
	submunitionAmmo[]	= {"rhs_ammo_20x139mm_AP",0.8,"rhs_ammo_20x139mm_HE",0.2};
	weaponType			= "cannon";
	simulation			= "shotSubmunitions";
	triggerTime			= 0.01;
};

