/*
	rhs_fnc_heli_wheelBrakes
	Turn on/off helicopter breaks in SFM
	
	i: vehicle name
	
	a: reyhard
*/

params["_vehicle"];

disableSerialization;

private _brakes		= _vehicle animationSourcePhase "Helicopter_Brakes";
private _control	= (uiNamespace getVariable "RscUnitInfo") displayCtrl 10101;

// Animate wheels
_vehicle animateSource ["Helicopter_Brakes",abs(_brakes-1)];

// Change control
if(_brakes isEqualTo 0)then
{
	_control ctrlSetTextColor
	[
		(profilenamespace getvariable ['IGUI_TEXT_RGB_R',0]),
		(profilenamespace getvariable ['IGUI_TEXT_RGB_G',1]),
		(profilenamespace getvariable ['IGUI_TEXT_RGB_B',1]),
		(profilenamespace getvariable ['IGUI_TEXT_RGB_A',0.8])
	];
}else
{
	_control ctrlSetTextColor [1,1,1,0.15];
};