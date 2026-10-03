private ["_obj","_day","_light"];

if (!hasInterface) exitWith {};

_obj = (_this nearestObject "rhs_ammo_an_m14_th3");
	
_day = sunOrMoon;
	
_light = "#lightpoint" createVehicleLocal [0,0,0];
_light setLightIntensity (300 + (_day * _day) * 40000);
_light setLightAmbient [0.025 / (_day * 2 + 1), 0.014 / (_day * 2 + 1), 0.015 / (_day * 2 + 1)]; 
_light setLightColor [1.0, 0.80, 0.75];
_light setLightUseFlare true;
_light setLightDayLight true;
_light setLightFlareSize (1 + _day * 3);
_light setLightFlareMaxDistance 300;
_light lightAttachObject [_obj, [0,0,0.15]];

sleep 0.3;

_light setLightIntensity (3000 + (_day * _day) * 2000000);
_light setLightFlareSize (3 + _day * 3);

sleep 15;

_light setLightIntensity (300 + (_day * _day) * 40000);
_light setLightFlareSize (1 + _day * 3);

sleep 0.5;

deletevehicle _light;