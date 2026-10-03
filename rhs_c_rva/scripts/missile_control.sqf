//executed from "fired" EH
#include "defs.hpp"
params["_tochka","_weapon","","","_ammo","","_missile"];

if (isNull _missile) then {
	_missile = (position _tochka nearObjects [_ammo,250]) select 0;
	if (isNull _missile) exitWith {diag_log "RHS_ss21 error in missile_control.sqf - cant track missile"};
};
_tochka animate ["RHS_SS21_missile_hide",1,true];

[_missile,_ammo,_tochka] spawn {
private ["_tpos","_target","_dir","_cdir","_ndir","_dirtotarget","_lastdir","_predictdir","_pitch","_cpitch","_npitch","_pitchtotarget","_lastpitch","_predictpitch", "_mode","_vel","_predictkoef","_tdist","_turnRate","_cTurnRate","_lasttime","_deltaT"];
params["_missile","_ammo","_tochka"];

_tpos =  vehget(target); //coordinates of designated target
_lpos = getPosASL _tochka; //launcher position
_idist = _tpos distance _tochka; //initial distance to target

_proximitydetonation = getNumber (configFile >> "cfgAmmo" >> _ammo >> "RHS_FuseRange");

//constants
_trackinterval = 0.05;
_turnRate = 40;// (deg/sec) (Max Turn Rate)
_angle_of_attack = 20;// (deg/sec) (Max angle of attack)
_mode = if (_idist>10000) then {0}else{1};
_vel = 500;
_cdir = 0;
_cpitch = 0;
_ndir = 0;
_npitch = 0;
_lastdir = 0;
_lastpitch = 0;
_predictdir = 0;
_predictpitch = 0;
_predictkoef = 6000 / (_vel * _trackinterval);
sleep 1;
_missile spawn {
	if (isNull (findDisplay ss21_main_IDD)) exitWith {};
	_missile = _this;
	_marker_missile = createMarkerLocal ["ss21_missile_marker", (getPos _missile)];
	_marker_missile setMarkerShapeLocal "ICON";
	_marker_missile setMarkerTypeLocal "mil_triangle";
	while {!isNull(findDisplay ss21_main_IDD)&&!(isNull _missile)} do {
		_marker_missile setMarkerPosLocal (getPos _missile);
		sleep 1;
	};
	deleteMarkerLocal _marker_missile;
};

["rhs_tochka_fuse","onEachFrame",
{
	params ["_ammo","_missile","_proximitydetonation","_tpos","_tochka"];
	//detonator
	if ((_tpos distance (getPosASLVisual _missile))<_proximitydetonation) then {
		[_ammo,_missile,_tochka] spawn rhs_fnc_ss21_missile_warhead;
		["rhs_tochka_fuse", "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
	};
},[_ammo,_missile,_proximitydetonation,_tpos,_tochka]] call BIS_fnc_addStackedEventHandler;

_lasttime = time;
while { ((!(isNull _missile))) } do {
	sleep _trackinterval;
	//collect data
	_deltaT = (time - _lasttime);
	_cTurnRate = _turnRate*_deltaT;
	_ppos = getPosASL _missile;

	_cdir = getDir _missile;
	_cpitch = asin(vectorDir _missile select 2);

	_velVector = velocity _missile;
	_vel = (_velVector distance [0,0,0]) max 10;
	_vdir = ((_velVector select 0) atan2 (_velVector select 1));
	_vpitch = ((_velVector select 2) atan2 ([_velVector select 0,_velVector select 1,0] distance [0,0,0]));

	_vecToTarget = [(_tpos select 0) - (_ppos select 0), (_tpos select 1) - (_ppos select 1), (_tpos select 2) - (_ppos select 2)+0];
	_dirtotarget = (( _vecToTarget select 0) atan2 (_vecToTarget select 1));
	_pitchtotarget = ((_vecToTarget select 2) atan2 ([_vecToTarget select 0,_vecToTarget select 1,0] distance [0,0,0]));

	_landdist = [_tpos select 0,_tpos select 1,0] distance [_ppos select 0,_ppos select 1,0];
	_tdist = _tpos distance _ppos;

	_predictkoef = 8000 / (_vel * _trackinterval);
	//flying mode
	_mode = switch true do {
		case ((_mode==0)&&((_ppos select 2)>2000)): {2};
		case ((_mode==1)&&((_ppos select 2)>4000)): {2};
		case ((_mode>1)&&(_vel<150)): {3};
		default {_mode};
	};

	//calculate needed azimuth and elevation
	switch _mode do {
		case 0: { //start
			_ndir = _dirtotarget;
			_npitch = _pitchtotarget + 30 + 50*(2000 -(_ppos select 2))/2000;
		};
		case 1: { //start to stars
			_ndir = _dirtotarget;
			_npitch = 80;
		};
		case 2: { //cruise mode
			_ndir = _dirtotarget;
			_npitch = _pitchtotarget+30*cos(_pitchtotarget);
		};
		case 3: { //direct
			_predictdir = _predictdir*0.9 + (_dirtotarget - _lastdir)*_deltaT*0.2;
			_ndir = _dirtotarget + _predictdir*_predictkoef;
			_predictpitch = _predictpitch*0.9 + (_pitchtotarget - _lastpitch)*_deltaT*0.2;
			_npitch = _pitchtotarget + _predictpitch*_predictkoef;
		};
	};

	//limit angle of attack
	_pitch_diff = _npitch - _vpitch;
	_npitch = _cpitch + ((_pitch_diff min _angle_of_attack) max -_angle_of_attack);
	//limit missile turnrate
	_dir_diff = _ndir - _cdir;
	while {(_dir_diff > 180)} do { _dir_diff = _dir_diff - 360;};
	while {(_dir_diff < -180)} do { _dir_diff = _dir_diff + 360;};
	_dir = if ((abs(_dir_diff)>90)&&(_landdist<500)) then {
		_cdir
	}else{
		_cdir+((_dir_diff min (_cTurnRate*abs(_cpitch))) max -_cTurnRate*abs(_cpitch))
	};
	_pitch_diff = _npitch - _cpitch;
	_pitch = _cpitch + ((_pitch_diff min _cTurnRate) max -_cTurnRate);

	_lastdir = _dirtotarget;
	_lastpitch = _pitchtotarget;
	_lasttime = time;
	//_missile setVelocity [(sin(_dir)*cos(_pitch))*_vel,(cos(_dir)*cos(_pitch))*_vel,(sin(_pitch))*_vel];
	_missile setVectorDirAndUp [[sin(_dir)*cos(_pitch),cos(_dir)*cos(_pitch),sin(_pitch)],[-sin(_dir)*sin(_pitch), -cos(_dir)*sin(_pitch), -cos(_pitch)]];
};

};
//RHS_SS21_logic setVariable ["missile_control",compile preprocessFileLineNumbers "\[soft]\Tools\rhs_ss21\scripts\missile_control.sqf"]