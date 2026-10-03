/*
	static weapons rotation on left/right input using inputAction

	a: reyhard
*/

uiNameSpace setVariable ["RHS_staticWeapon_Ctrl",_this select 0];

[] spawn
{
	private ["_v","_c","_d","_k"];
	sleep 0.1;
	hint "Press left/right move key to rotate static weapon";

	_v = vehicle (call rhs_fnc_findPlayer);

	disableSerialization;
	_c = uiNamespace getVariable "RHS_staticWeapon_Ctrl";
	_k = (_c displayCtrl 168);

	while{not(isNull _k)}do
	{
		if(inputAction "turnLeft" > 0)then
		{
			_d = VectorDir _v;
			for "_i" from 0 to 50 do {
				_d =[_d,.4] call BIS_fnc_rotateVector2D;
				_v setVectorDir _d;
				sleep 0.01;
			};
		};

		if(inputAction "turnRight" > 0)then{
			_d = VectorDir _v;
			for "_i" from 0 to 50 do {
				_d =[_d,-.4] call BIS_fnc_rotateVector2D;
				_v setVectorDir _d;
				sleep 0.01;
			};
		};
		sleep 0.01;
	};
	uiNameSpace setVariable ["RHS_staticWeapon_Ctrl",displayNull];
};