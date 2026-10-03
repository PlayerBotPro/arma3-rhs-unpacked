
class CfgAmmo  
{
	class rhs_ammo_agm65; 
	
	class RHS_ammo_BGM109  : rhs_ammo_agm65
	{
		hit = 1500;
		indirectHit = 1000;
		indirectHitRange = 50;
		airFriction = 0;
		sideAirFriction = 0.08;
		model = "\rhsusf\addons\rhsusf_a2port_air2\CruiseMissile\cruisemissile3";
		initTime = 0;
		timeToLive = 300;
		cost = 400;
		maxSpeed = 700;
		thrustTime = 25;
		thrust = 80;
		fuseDistance = 5;
		CraterEffects = "ArtyShellCrater";

		ExplosionEffects = "VehicleExplosionEffectsBig";
		//ExplosionEffects = "ArtyShellExplosion";
		effectsMissile = "missile5";
		whistleOnFire = 2;
		whistleDist = 60;
	};
	
};