/*
a: reyhard
attached object paradrop script
whatever is attached to c130 with attachTo command may be later droped by that script

_v - vehicle wich we want to perform para drop from
_number - optional. specify which units should be paradroped. it's a number which selects from attachedObjects array

*/
params["_v",["_number",-1]];

private _anim = getText (configFile >> "cfgVehicles" >> typeOf _v >> "rhs_paraRamp");
private _offset = getNumber (configFile >> "cfgVehicles" >> typeOf _v >> "rhs_paraOff");

//open ramp
_v animateSource [_anim,1];
waitUntil {_v animationSourcePhase _anim==1};

sleep (random 4);

//find vehicle to paradrop
private _arr = (attachedObjects _v);
private _k = objNull;

{
	if(_x getVariable ["rhs_paradrop",false] OR !(_x isKindOf "LandVehicle" OR _x isKindOf "Thing" OR _x isKindOf "Air"))then{_arr = _arr - [_x]};
}foreach _arr;

if(_arr isEqualTo [])exitWith{};
if(_number >= 0)then{
	_k = (_arr select _number);
}else{
	_k = _arr select 0;
};
_k setVariable ["rhs_paradrop",true,true];
//systemChat format["%1 %2",_k,_arr];


private _p = _v worldToModelVisual [getPosATL _k select 0, getPosATL _k select 1,(getPosATL _k select 2)-((_k worldToModelVisual (getposatl _k)) select 2)];

//disable collision
_k setOwner (owner _v);
_k disableCollisionWith _v;

//move vehicle to the rear of ramp
_k attachTo [_v,[0,_offset,0]];
sleep 0.1;

//detach
detach _k;

//wait till plane moves away & create parachute
waitUntil {_v distance _k > 25};
_k enableCollisionWith _v;
_para = "B_Parachute_02_F" createVehicle [0, 0, 100];
_para setposASL (getPosASL _k);
_para setVelocity (velocity _k);
_k attachTo [_para,[0,0,-.5]];
_k setVariable ["rhs_paradrop",false,true];

//wait till vehicle lands
waitUntil {(getposatl _k select 2)<1};
detach _k;
sleep 0.1;
deleteVehicle _para;

//close ramp
if( !(isPlayer driver _k) )then{
	_v animateSource [_anim,0];
}