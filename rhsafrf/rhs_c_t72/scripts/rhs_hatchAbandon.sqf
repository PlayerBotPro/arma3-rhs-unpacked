/*
	If hitHull is damaged over 0.9 (meaning delayed explosion is already triggered) then randomly keep hatch open when crew is leaving it's vehicle.
	a: reyhard
*/

params["_v","","","_t"];

if((_v getHitPointDamage "HitHull" > 0.9) OR ((_v getHitPointDamage "HitEngine") isEqualTo 1))then
{
	private _cfg = configFile >> "cfgVehicles" >> typeOf _v;
	// -1 is equal to driver
	if(_t isEqualTo [])then
	{
		// Try to get gunnerDoor parameter
		private _doorAnim = getText (_cfg >> "driverDoor");
		if(_doorAnim != "")then
		{
			if(random(100) > 60)exitWith
			{
				_v animateDoor [_doorAnim,1];
			};
		};
	}else{
		// Find gunner turret config
		{
			_cfg = (_cfg >> "Turrets") select _x;
		}forEach _t;
		// Try to get gunnerDoor parameter
		private _doorAnim = getText (_cfg >> "gunnerDoor");
		// If parameter is present, randomly leave hatch open
		if(_doorAnim != "")then
		{
			if(random(100) > 60)exitWith
			{
				_v animateDoor [_doorAnim,1];
			};
		};
	};
}; 