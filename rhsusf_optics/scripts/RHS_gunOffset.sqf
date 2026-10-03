/*
gunner view & barrel offset adjustment
a: reyhard

i:
	_v - vehicle
	_d - distance to target
o: ---
*/

_v=_this select 0;
_d=_this select 1;

if(_d==0)exitWith{_v animate ["offset",0]};

private _cfgTurret = configFile >> "CfgVehicles" >> typeOf _v >> "Turrets" >> "MainTurret";
private _angle =  _v animationPhase  (getText (_cfgTurret >> "gun")) ;

private _pos_gView = _v selectionPosition ( (getText (_cfgTurret >> "memoryPointGunnerOptics")) );
private _pos_gGun = _v selectionPosition  ( (getText (_cfgTurret >> "gunEnd")) );

{_x set [2,0]}foreach [_pos_gView,_pos_gGun];

_pos_target = [cos(_angle)*_d,sin(_angle)*_d,0 ] vectorAdd _pos_gView;
_pos_X = [cos(_angle)*_d,sin(_angle)*_d,0 ] vectorAdd _pos_gGun;

_oa= _pos_X distance  _pos_target;
_ob= _pos_X distance _pos_gGun;
_oc= _pos_gGun distance _pos_target;


_r1=acos ( (_ob^2+_oa^2-_oc^2)/(2*_oa*_ob));
_r3=acos ( (_oc^2+_oa^2-_ob^2)/(2*_oa*_oc));
//strange workaround for scalar NaN
_r2= 180-( floor(_r1*10000)+floor(_r3*10000))/10000;

//_pitch = (( (call rhsusf_fnc_findPlayer) call BIS_fnc_getPitchBank) select 1);
//if(abs (_pitch) > 3)then{_r2=_r2-_pitch/100};

[_v, ["offset",-rad(_r2)*10000]] remoteExecCall ["animateSource",_v];

//hint format["%1 \nr:\n%2\n%3\n%4",_deg, _r1,_r2,_r3];
//diag_log format["acos ( (%2^2+%3^2-%1^2)/(2*%3*%2) )",_oa,_ob,_oc];
