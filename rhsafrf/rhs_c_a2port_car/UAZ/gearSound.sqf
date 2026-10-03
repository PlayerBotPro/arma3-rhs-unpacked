/*
	shifting gear sound handler
*/
params["_v","_s"];
if(_s && local _v)then{
	_v spawn {
		private _gear = 0;
		private _gearOld = 0;
		while{isEngineOn _this}do
		{
			_gear = _this getSoundController "gear";
			if(_gear != _gearOld)then{
				_this animateDoor ["gearbox",1-(_this animationPhase "gearbox")];
				_gearOld = _gear;
				sleep 1;
			};
			sleep 2;
		};
	};
};