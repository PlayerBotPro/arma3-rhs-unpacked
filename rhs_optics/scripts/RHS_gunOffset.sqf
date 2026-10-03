/*
gunner view & barrel offset adjustment
a: reyhard

i:
	_v - vehicle
	_d - distance to target
o: ---
*/
params["_v","_d","_c"];

if(_d==0)exitWith{_v animate ["offset",0]};

private _cfgTurret = configFile >> "CfgVehicles" >> typeOf _v >> "Turrets" >> "MainTurret";
private _angle =  _v animationPhase  (getText (_cfgTurret >> "gun")) ;

private _pos_gView = _v selectionPosition ( (getText (_cfgTurret >> "memoryPointGunnerOptics")) );
private _pos_gGun = _v selectionPosition  ( (getText (_cfgTurret >> "gunEnd")) );

{_x set [2,0]}foreach [_pos_gView,_pos_gGun];

private _pos_target = [cos(_angle)*_d,sin(_angle)*_d,0 ] vectorAdd _pos_gView;
private _pos_X = [cos(_angle)*_d,sin(_angle)*_d,0 ] vectorAdd _pos_gGun;

private _oa= _pos_X distance  _pos_target;
private _oc= _pos_gGun distance _pos_target;
private _r = _oa atan2 _oc;

[_v,["offset",(rad(_r)/_c)*10000]] remoteExecCall ["animateSource",_v];

//diag_log format["acos ( (%2^2+%3^2-%1^2)/(2*%3*%2) )",_oa,_ob,_oc];
