
// 		AFM and RotorLib Heli_Transport_03 (Huron)
// now from CH49 mohawk

// 		'class RotorLibHelicopterProperties;' must be set in 'class Helicopter_Base_H' in 'cfgVehicles.h'


simulation = "helicopterrtd";

class RotorLibHelicopterProperties: RotorLibHelicopterProperties
{
	RTDconfig = "rhsusf\addons\rhsusf_c_ch53\RTD_CH53E2.xml";
	autoHoverCorrection[] = {4.7, 3.8, 0};
	defaultCollective = 0.665;
	retreatBladeStallWarningSpeed = 87.4556;
	maxTorque = 4900;
	stressDamagePerSec = 0.00333333;
	maxHorizontalStabilizerLeftStress = 10000;
	maxHorizontalStabilizerRightStress = 10000;
	maxVerticalStabilizerStress = 10000;
	horizontalWingsAngleCollMin = 0;
	horizontalWingsAngleCollMax = 0;
	maxMainRotorStress = 570000;
	maxTailRotorStress = 120000;
};