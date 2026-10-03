/*
	SPO-15 Beryoza - Aircraft Radar Warning System
	Detects incoming missiles, planes with radars, radars & SPAAGs
	Not 100% realistic (since I scalled some stuff to arma realms) but it should be quite authentic in current state
	Could be worth to investigate compatibility with maybe pook sam pack?

	i: display id [idd] passed from onLoad display EH
	o: -

	a: reyhard
*/
if(not( isNull (uiNameSpace getVariable ["rhs_spo15_ctrl",displayNull]))) exitWith{};

uiNameSpace setVariable ["rhs_spo15_ctrl",_this select 0];

if(isNil "RHS_Radars")then{
	RHS_Radars = [];
};

private _v = vehicle (call rhs_fnc_findPlayer);
private _threats = [
	[],
	[],
	[],
	[],
	[],
	[]
];
private _secAnims =
[
	"rwr_lights_lock_s_awacs",
	"rwr_lights_lock_s_radar",
	"rwr_lights_lock_s_aa",
	"rwr_lights_lock_s_sam",
	"rwr_lights_lock_s_lr",
	"rwr_lights_lock_s_air"
];
private _tick=10;
private _time = 0;
private _maxRange = 10000;
private _threatLevel = 0;
private _lockHeight = -1;
private _lockHeightOld = -2;
private _arrAnimOld = [];

// add event handler for incoming missile
if(!isnil "rhs_spo15_incomingmissile_eh")then{_v removeEventHandler ["IncomingMissile", rhs_spo15_incomingmissile_eh];};
rhs_spo15_incomingmissile_eh =  _v addEventHandler ["IncomingMissile",{_this call rhs_fnc_rwr_spo15_eh}];

// function to calculate direction to target
_calcSide =  {
	params["_d"];
	private _o = [];

	if( (_d>355 OR _d < 25)  	)then{_o pushback "rwr_lights_10RS";};
	if( (_d>15 AND _d < 45)  	)then{_o pushback "rwr_lights_30RS";};
	if( (_d>35 AND _d < 85)  	)then{_o pushback "rwr_lights_50RS";};
	if( (_d>65 AND _d < 105)  	)then{_o pushback "rwr_lights_90RS";};
	if( (_d>95 AND _d < 195)  	)then{_o pushback "rwr_lights_RS";};
	if( (_d>165 AND _d < 270)  	)then{_o pushback "rwr_lights_LS";};
	if( (_d>260 AND _d < 295)  	)then{_o pushback "rwr_lights_90LS";};
	if( (_d>290 AND _d < 315)  	)then{_o pushback "rwr_lights_50LS";};
	if( (_d>310 AND _d < 345)  	)then{_o pushback "rwr_lights_30LS";};
	if( (_d>335 OR _d < 5)  	)then{_o pushback "rwr_lights_10LS";};

	_o
};

while{ not(isNull ( (uiNamespace getVariable "rhs_spo15_ctrl") displayCtrl 8655)) }do{
	_v = vehicle (call rhs_fnc_findPlayer);
	private _locked = false;
	private _threats = [
		[],
		[],
		[],
		[],
		[],
		[]
	];
	private _threatsTypes = [];


	private _targets = vehicles select {_v distance _x < _maxRange};
	_targets deleteAt (_targets find _v);
	// prv-13 will be also detected
	private _radars = [];
	{
		// clean up the array in case radar was destroyed or deleted
		if(!alive _x)then{
			RHS_Radars = RHS_Radars - [_x];
		};
		// add to array if radar is below maxRange
		if(_x distance _v < _maxRange)then{_radars pushback _x}
	}forEach RHS_Radars;
	// radar guided missiles are also detected. data supplied by incomingMissile EH
	private _missiles = _v getVariable ["rhs_rwr_detectedMissiles",[]];
	private _vPositon = (getPosASLVisual _v) vectorAdd [0,0,-2];

	// search for valid targets
	{
		private _radarTrue = isVehicleRadarOn _x;
		// eliminate from calculations vehicles without crew & with turned off radar
		if((isVehicleRadarOn _x) && {alive _x})then
		{
			private _posx = getPosASLVisual _x vectorAdd [0,0,2];
			// check if there is contact between those 2 units
			if((count (lineIntersectsObjs [_vPositon, _posx, _x]) <= 1)  && !(terrainIntersectASL [_vPositon, _posx]))then
			{
				if(_x aimedAtTarget [_v] > 0)then{
					_locked = true;
				};
				switch(true)do{
					case(_x isKindOf "Plane"):{
						if(isEngineOn _x)then{
							_threatsTypes pushBackUnique (_secAnims select 5);
							(_threats select 5) pushBackUnique 6;
							(_threats select 5) pushBack [_x distance _v,_x];
						};
					};
					case(_x isKindOf "Helicopter"):{
						if(isEngineOn _x)then{
							_threatsTypes pushBackUnique (_secAnims select 5);
							(_threats select 5) pushBackUnique 6;
							(_threats select 5) pushBack [_x distance _v,_x];
						};
					};
					case(_x isKindOf "Car"):{
						_threatsTypes pushBackUnique (_secAnims select 2);
						(_threats select 2) pushBackUnique 3;
						(_threats select 2) pushBack [_x distance _v,_x];
					};
					case(_x isKindOf "Tank"):{
						_threatsTypes pushBackUnique (_secAnims select 2);
						(_threats select 2) pushBackUnique 3;
						(_threats select 2) pushBack [_x distance _v,_x];
					};
					case(_x isKindOf "StaticWeapon"):{
						_threatsTypes pushBackUnique (_secAnims select 5);
						(_threats select 1) pushBackUnique 2;
						(_threats select 1) pushBack [_x distance _v,_x];
					};
				};
			};
		};
	}forEach _targets;
	{
		private _posx = getPosASLVisual _x vectorAdd [0,0,2];
		// check if there is contact between those 2 units
		if((count (lineIntersectsObjs [_vPositon, _posx, _v]) <= 1) && !(terrainIntersectASL [_vPositon, _posx]))then{
			_threatsTypes pushBackUnique (_secAnims select 1);
			(_threats select 1) pushBackUnique 2;
			(_threats select 1) pushBack [_x distance _v,_x];
		};
	}foreach _radars;
	{
		if(alive _x)then{
			private _mRelDir = _x getRelDir _v;
			// made here a nasty asumption that all missiles are radio guided which is mostly false for AA ones. yet, it's here to give some indication of prelaunch target locking
			// i guess, it should be replaced with some more realistic solution but as always, some more time & thinking is required
			// radio guided missiles has usually 60 deg con for radio seeking - beyond that range beryoza wont see anything too. this condition also deletes missiles that passed our plane from threat calculations
			if((_mRelDir > 300) OR (_mRelDir < 60))then{
				private _posx = getPosASLVisual _x vectorAdd [0,0,2];
				// check if there is contact between those 2 units
				if((count (lineIntersectsObjs [_vPositon, _posx, _v]) <= 1) && !(terrainIntersectASL [_vPositon, _posx]))then{
					_threatsTypes pushBackUnique (_secAnims select 5);
					(_threats select 5) pushBackUnique 6;
					(_threats select 5) pushBack [_x distance _v,_x];
				};
			};
		};
	}foreach _missiles;




	if(_v getVariable ["rhs_rwr_incomingMissile",false])then{
		if(_v animationSourcePhase "rwr_lights_lock" isEqualTo 1)then{
			_v setVariable ["rhs_rwr_incomingMissile",false];
		};
	}else{
		if(_locked)then{
			if(time >_time)then{
				playsound ["rhs_rwr_beep_long",true];
				_time = time +1.61;
			};
			if(_v animationPhase "rwr_lights_lock" != 0.99)then{
				_v animateSource ["rwr_lights_lock",0.99,true];
			};
		}else{
			if(_v animationPhase "rwr_lights_lock" != 0)then{
				_v animateSource ["rwr_lights_lock",0,true];
			};
		};
	};

	_threats = _threats - [[]];
	sleep 0.25;
	// if there are threats detected then lit some lamps in cockpit
	if(count _threats > 0)then{

		if(_tick > (5 + random(5)))then{playsound ["rhs_rwr_beep_short",true];_tick=0};
		_tick=_tick+1;

		if(cameraView == "Internal")then{
			// unhide lights
			if(_v animationPhase "rwr_lights_hide" isEqualTo 1)then{_v animate ["rwr_lights_hide",0,true]};

			//primary threats calculations
			_threats sort false;
			_threatLevel = (_threats select 0) select 0;
			_threats apply {_x deleteAt 0};
			(_threats select 0) sort true;

			private _primaryTargetIdx = ((_threats select 0 ) select 0);
			private _primaryTarget = _primaryTargetIdx select 1;
			private _dirToPrimary = _v getRelDir _primaryTarget;
			private _radarStrenght = (getNumber (configFile >> "cfgVehicles" >> typeOf _primaryTarget >> "Components" >> "SensorsManagerComponent" >> "Components" >> "ActiveRadarSensorComponent" >> "AirTarget" >> "maxRange"));
			if(_radarStrenght != 0)then{_radarStrenght = _radarStrenght /10000}else{_radarStrenght=1};


			_v animateSource ["rwr_lock_primary",_threatLevel,true];
			_v animateSource ["rwr_lock_dir_primary",_dirToPrimary/100,true];
			_v animateSource ["rwr_signal_strenght",(1/((_primaryTarget distance _v)/(1000*_radarStrenght))) min 1,true];
			_h1 = (getPosASLVisual _v) select 2;
			_h2 = (getPosASLVisual _primaryTarget) select 2;

			// simple height comparsion between player vehicle & target wouldn't do the trick when pitch or yaw is different from 0
			// checking angle to target solves that issue. if angle is from -5 to 5 range both lamps (up & low) are lit
			private _angleToTarget = 90 - acos((vectorUpVisual _v) vectorCos (_vPositon vectorfromto (getposasl _primaryTarget)));
			switch (true) do{
				case (abs(_angleToTarget)<5): {	_lockHeight = 0	};
				case (_angleToTarget<0): 	{	_lockHeight = 1	};
				default 					{	_lockHeight = 2	};
			};
			if(_lockHeight != _lockHeightOld)then{
				switch (_lockHeight) do{
					case 0: 	{	{_v animate [_x,1]}foreach ["rwr_lights_lock_down","rwr_lights_lock_up"];	};
					case 1: 	{	_v animate ["rwr_lights_lock_down",1];_v animate ["rwr_lights_lock_up",0];	};
					default 	{ 	_v animate ["rwr_lights_lock_down",0];_v animate ["rwr_lights_lock_up",1];	};
				};
				_lockHeightOld = _lockHeight;
			};


			// secondary threat calculations
			{_threats = _threats - [_x];_threats append _x}forEach _threats;
			// removing primary target from calculations
			// then picking up to 10 targets for secondary tracking
			_threats = _threats - [_primaryTargetIdx];
			_threats sort true;

			_arrAnim = [_dirToPrimary] call _calcSide;
			_arrAnim append _threatsTypes;

			for "_i" from 0 to ((count _threats - 1) min 9) do{
				{_arrAnim pushBackUnique _x}forEach ([_v getRelDir ((_threats select _i) select 1)] call _calcSide);
			};
			{if(_v animationPhase _x isEqualTo 1)then{_v animate [_x,0,true]}}foreach (_arrAnimOld - _arrAnim);
			{if(_v animationPhase _x isEqualTo 0)then{_v animate [_x,1,true]}}foreach (_arrAnim);
			_arrAnimOld = _arrAnim;
			//systemChat format["%1 %2 %3",_missiles,_threatLevel,time];
			//hint format["%1 %2 \n%3 %4\ndistance:%5 %6\nlock:%7\n%8",typeOf _primaryTarget,_dirToPrimary,_angleToTarget,abs(_h1-_h2),_v distance _primaryTarget,(1/((_primaryTarget distance _v)/(1000*_radarStrenght))) min 1,_radarStrenght,_v call BIS_fnc_getPitchBank];
		};
	}else{
		//hide lights - no targets
		if((_v animationPhase "rwr_lights_hide") isEqualTo 0)then{_v animate ["rwr_lights_hide",1,true];_tick=10};
	};

	sleep 0.25;
};

_v removeEventHandler ["IncomingMissile", rhs_spo15_incomingmissile_eh];
uiNameSpace setVariable ["rhs_spo15_ctrl",displayNull];
rhs_spo15_incomingmissile_eh = nil;
//systemChat "koniec";