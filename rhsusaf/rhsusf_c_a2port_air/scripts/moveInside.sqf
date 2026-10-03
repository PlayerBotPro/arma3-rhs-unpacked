/*
a: reyhard
adds ability to move around flying c130 cargo bay
kind of attachToWithMovment but using attachTo command
*/

params["_v"];
private _p = call rhsusf_fnc_findPlayer;

_p action ["eject",_v];
rhs_vehicle_attached=true;

private _pos=  _v selectionPosition "moveInsidePos";
private _h = _pos select 2;
//[0,4,1.15];
private _posOld=_pos;

private _vc=[0,0,0];
private _h1=[0,0,0];
private _h2=[0,0,0];

private _dir=getdir _p;

hint format["to get back to seat press %1 [Lock Target Key]",actionKeysNames "LockTarget"];
_p forceWalk true;
_p attachTo [_v,_pos];

while{rhs_vehicle_attached}do
{
	if(inputAction "LockTarget" >0)then
	{
		detach _p;
		rhs_vehicle_attached=false;
		_p setVelocity [0,0,0];
		_p moveInCargo _v;
	};
	if(inputAction "moveForward" >0)then
	{
		_pos=_pos vectorAdd ( ([(vectorDir _p),getDirVisual _v] call BIS_fnc_rotateVector2D) vectorMultiply 0.05);
	};
	if(inputAction "moveBack" >0)then
	{
		_pos=_pos vectorAdd ( ([(vectorDir _p),getDirVisual _v] call BIS_fnc_rotateVector2D) vectorMultiply -(0.05));
	};
	if(inputAction "turnLeft" >0)then
	{
		_vc=[vectorDirVisual _p,(getDirVisual _v)-90] call BIS_fnc_rotateVector2D;
		_pos=_pos vectorAdd (  _vc vectorMultiply -0.05);
	};
	if(inputAction "turnRight" >0)then
	{
		_vc=[vectorDirVisual _p,(getDirVisual _v)+90] call BIS_fnc_rotateVector2D;
		_pos=_pos vectorAdd (  _vc vectorMultiply -(0.05) );
	};
	if(not(_pos isEqualTo _posOld))then
	{
		_pos set [2,_h];

		_h1=AGLtoASL(_v modelToWorldVisual [(_pos select 0 )*1.2,(_pos select 1)*1.2,(_pos select 2)+0.2]);
		_h2=AGLtoASL(_v modelToWorldVisual (_posOld vectorAdd [0,0,0.2]));

		if(not(lineIntersects [_h1,_h2]))then{_p attachTo [_v, _pos];_posOld=_pos;}else{_pos=_posOld};
		if((getpos _p select 2) >1)then{
			_p allowDamage false;
			detach _p;_p setVelocity [0,0,0];rhs_vehicle_attached=false;
			sleep 1;
			_p allowDamage true;
		};
	};
	if (inputAction "AimRight" >0) then {_dir=_dir+(2*(inputAction "AimRight"));_p setdir _dir;};
	if (inputAction "AimLeft" >0) then 	{_dir=_dir-(2*(inputAction "AimLeft"));_p setdir _dir;};
	sleep 0.01;
};

_p forceWalk false;
rhs_vehicle_attached=nil;