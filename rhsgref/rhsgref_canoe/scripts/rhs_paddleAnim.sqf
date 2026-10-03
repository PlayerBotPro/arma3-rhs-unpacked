params["_unit","_state"];

if(_state)then
{
	private _pfh = "rhs_pfh_paddle_" + str _unit;
	[_pfh, "onEachFrame", {
		params["_time","_unit","_pfh","_animate"];
		if(!isEngineOn _unit || driver _unit isEqualTo objNull)exitWith
		{
			[_pfh, "onEachFrame"] call BIS_fnc_removeStackedEventHandler;
		};

		private _animState = _unit animationSourcePhase "paddle_source";
		private _rpm = _unit getSoundController "rpm";
		if(_rpm > 45)then
		{
			if(_animState < (43/45))then
			{
				if(_animate)then{_unit animateSource ["paddle_source",1];_this set [3,false]};
			}else
			{
				_unit animateSource ["paddle_source",(3/45),true];
				_unit animateSource ["paddle_source",1];
				_this set [3,true];
			};
		}else
		{
			if(_animState > 0 || _animState < 1)then
			{
				_unit animateSource ["paddle_source",1];
				_this set [3,true];
			}else
			{
				if(_animState != 0)then{_unit animateSource ["paddle_source",0,true];_this set [3,true];};
			};
		};
	}, [time,_unit,_pfh,true]] call BIS_fnc_addStackedEventHandler;
};