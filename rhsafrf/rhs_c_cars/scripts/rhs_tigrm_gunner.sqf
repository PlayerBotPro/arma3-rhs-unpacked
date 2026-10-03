/*
LRF script

a: reyhard
*/
_this spawn
{

	private["_k"];
	_k=format["RHS_%1_ctrl",_this select 1];

	if(isNull (uiNamespace getVariable [_k,displayNull]))then
	{
		uiNameSpace setVariable [_k,_this select 0];

		private["_c","_z","_h"];
		disableSerialization;
		_c = uiNamespace getVariable _k;
		_z = (_c displayCtrl 168);

		_p=(call rhs_fnc_findPlayer);
		_v = vehicle _p;
		_w=true;

		while{(_v turretUnit [0]) isEqualTo _p}do
		{
			_p=(call rhs_fnc_findPlayer);
			sleep 0.1;
			if(_v animationPhase "Hatch_1" > 0.5)then
			{
				if (not(_w)) then
				{
					_v animateDoor ["hatch_gunner_h",1,true];
					_w =true;
				};
			}else{
				if(_w)then
				{
					_v animateDoor ["hatch_gunner_h",0,true];
					_w=false;
				};
			};
		};
		//systemChat "koniec";
		uiNameSpace setVariable [_k,displayNull];
	};
};

