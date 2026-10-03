/*
	Ka-52 Ejection Script
	hooked to get out event handler

	_v - vehicle
	_type - position, "driver","gunner",etc.
	_u - unit which ejected
*/
params["_v", "_type","_u"];
//systemchat format["start %1 %2",_u,_v];

if( (getpos _u select 2) < 7)exitWith{};

// do operations only to local unit
if(not(local _u))exitWith{};

// enable damage for Ka-52 (if it's disabled) & make immortal our unit since disableCollisionWith seems to be bugged a little bit with vehicles which have "helicopterRTD" simulation
_v allowDamage true;
_u allowdamage false;

// Damage effects - should be played only once
if(_v animationSourcePhase "eject" isEqualTo 0)then{
	[_v,["hitglass3",1]] remoteExecCall ["setHitPointDamage",_v];
	[_v,["hitglass4",1]] remoteExecCall ["setHitPointDamage",_v];
	[_v,["HitVRotor",1]] remoteExecCall ["setHitPointDamage",_v];
	[_v,["HitTail",1]] remoteExecCall ["setHitPointDamage",_v];
	_v animateSource ["eject",1,true];
	_u disableCollisionWith _v;

	// "display_on" animation use "RPM" source. value can be usually from 0 to 10 max I think. Dictates blade ejection speed
	private _rpm = _v animationPhase "display_on";
	private _vel = velocity _v;
	{
		private _pos = format["%1_pos",_x];
		private _dir = format["%1_dir",_x];
		private _hit = format["hit%1",_x];

		_v setHitPointDamage [_hit,1];
		private _rotor = "rhs_ka52_blade" createVehicle [0,0,0];
		_rotor setposASL (AGLtoASL (_v modelToWorldVisual (_v selectionPosition _pos) ));
		private _dirRel = (((_v selectionPosition _pos)) getDir (_v selectionPosition _dir)) -180;
		_rotor setdir _dirRel;
		_rotor disableCollisionWith _v;

		private _vector =_vel vectorAdd ((((_v modelToWorldVisual (_v selectionPosition _pos)) vectorFromTo (_v modelToWorldVisual (_v selectionPosition _dir))) vectorMultiply 5*_rpm) vectorAdd [0,0,10]);
		_rotor setVelocity _vector;
	}foreach ["rotor1","rotor2","rotor3","rotor4","rotor5","rotor6"];
};

// is pilot or gunner ejecting?
_eject =  (_v selectionPosition "k37_pilot_pos");
_eject_rocket =  (_v selectionPosition "k37_pilot_rocket_pos");
_eject_rocket_dir =  (_v selectionPosition "k37_pilot_rocket_dir");
if(_type == "driver")then{
	// hide ejection rocket on model
	_v animateSource ["k37_pilot_rocket_hide",1,true];
	// eject copilot if present
	private _u2 = gunner _v;
	if( not(isnull _u2) )then{
		moveout _u2;
		//systemchat "waiting";
		waitUntil {not(_u2 in _v)};
	};
}else{
	// hide ejection rocket on model
	_v animateSource ["k37_gunner_rocket_hide",1,true];

	_eject =  (_v selectionPosition "k37_gunner_pos") ;
	_eject_rocket = (_v selectionPosition "k37_gunner_rocket_pos") ;
	_eject_rocket_dir =  (_v selectionPosition "k37_gunner_rocket_dir");
	// eject copilot if present
	private _u2 = driver _v;
	if(not(isnull _u2 ))then{
		moveout _u2;
		//systemchat "waiting";
		waitUntil {not(_u2 in _v)};
	};
};

// ejection vector
private _vector = ((  (_v modelToWorldVisual _eject_rocket) vectorFromTo (_v modelToWorldVisual _eject_rocket_dir)) vectorMultiply 36) vectorAdd [0,0,10];

// create ejection vest & move player to it
private _es = "rhs_ka52_ejection_vest" createVehicle [0,0,0];
_es disableCollisionWith _v;
_es allowDamage false;
_es setVectorDirAndUp [vectorDirVisual _v,vectorUpVisual _v];
_es setVelocity (velocity _v);
_u moveInCargo _es;

private _t = time +.3;
waitUntil {_es setposasl (AGLtoASL (_v modelToWorldVisual _eject ));_t < time};

// create ejection rocket
private _r = "rhs_ka52_rps_rocket" createVehicle [0,0,0];
_r disableCollisionWith _v;
_ejectC = AGLtoASL (_v modelToWorldVisual _eject_rocket );
_r setposASL (_ejectC vectorAdd [0,0,1.5]);
_r setVectorDirAndUp [vectorDirVisual _v,vectorUpVisual _v];
_r setVelocity (velocity _v vectorAdd _vector);
// unhide rocket flames
_r animate ["hide_booster",1,true];

// create smoke & fire particle effects for rocket boosters
private _smoke = "#particlesource" createVehicle [0,0,0];
_smoke setParticleClass "RHS_RPS_K37_800_Smoke";
_smoke attachto [_r,[0,0,-1]];

private _fire = "#particlesource" createVehicle [0,0,0];
_fire setParticleClass "RHS_ERA_Flash";
_fire attachto [_r,[0,0,-1]];

// create rope and attach it to unit
private _rope = ropeCreate [_r,"rope_attach",_es,"rope_attach",1];
_rope disableCollisionWith _v;

_t = time +.7;
// wait till rocket fly away from helicopter
waitUntil {_es setposasl (AGLtoASL (_v modelToWorldVisual _eject ));_es setVectorDirAndUp [vectorDirVisual _v,vectorUpVisual _v];_r distance _es > 7};

_u playmove "RHS_Ka52_Pilot_Eject";

_ejectC = AGLtoASL (_v modelToWorldVisual _eject );

_es setVectorDirAndUp [vectorDirVisual _v,vectorUpVisual _v];
_es setVelocity (velocity _v vectorAdd _vector);

// minimal wait time
waitUntil {sleep 0.1;_r setVelocity (velocity _r vectorAdd [3,3,5]);_t < time};
// hide booster fire anim & delete particle effects
_r animate ["hide_booster",0];
deleteVehicle _smoke;
deleteVehicle _fire;
_u ropeDetach _rope;
sleep 0.1;

//add backpack & eject unit from 'ejection vest'
_u addBackpack "rhs_d6_Parachute_backpack";
_u action ["eject",_es];
_u allowdamage true;

waitUntil {not(_u in _es)};
deleteVehicle _es;
_u action ["OpenParachute", _u];