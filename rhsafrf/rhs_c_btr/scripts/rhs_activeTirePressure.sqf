
if ((profilenamespace getvariable ['rhs_activeTirePressure',1])==0) exitWith {};

params["_mas","_time","_delta","_maxdemag","_mindemag"];
_mas params ["_unit","_selectionName","_damage","_source","_projectile","_hitPartIndex"];

//systemChat format["%1",_selectionName];

//for BIS vehicle:
private _selectionsArray = ["wheel_1_1_steering","wheel_2_1_steering","wheel_1_2_steering","wheel_2_2_steering","wheel_1_3_steering","wheel_2_3_steering","wheel_1_4_steering","wheel_2_4_steering"];
private _wheelNumber = _selectionsArray find _selectionName;

private _caliber = 0;
if(_wheelNumber>-1)then{
	if (rhs_TypeTirePressure == 1) then {

		if (_projectile == "") then {
			_caliber = 0.5;
		} else {	//if falling damage
			if (_projectile isKindOf "BulletBase") then {
				_caliber = getNumber (configFile >> "CfgAmmo" >> _projectile >> "caliber");
				//hintC format ["b2 %1",_caliber];
			} else { //if not bullet
				_caliber = 100;
			};
		};
	} else {
		sleep _time;
	};
};

if ((_wheelNumber > -1) and (_caliber < 2)) then {

	private _kolesoproverkadam = _unit getHitIndex _hitPartIndex;

	while {(_kolesoproverkadam >= _mindemag) and  (_kolesoproverkadam < _maxdemag) and  (alive _unit)} do {

			private _kolesoproverkadam = _unit getHitIndex _hitPartIndex;
			if(_kolesoproverkadam isEqualTo _mindemag)exitWith{};

			waitUntil {(isEngineOn _unit) OR !(alive _unit)};

			private _kolesoproverkadam = _unit getHitIndex _hitPartIndex;;
			private _Ddammage = _kolesoproverkadam;

			if (_kolesoproverkadam < _maxdemag) then {_Ddammage = _kolesoproverkadam - _delta};
			if (_Ddammage < _mindemag) then {_Ddammage = _mindemag};

			_unit setHitIndex [_hitPartIndex, _Ddammage];
			//player globalChat format["%1 %2",_kolesoproverkadam,_Ddammage];
			sleep _time;
    };
    //systemChat "exit";
};

