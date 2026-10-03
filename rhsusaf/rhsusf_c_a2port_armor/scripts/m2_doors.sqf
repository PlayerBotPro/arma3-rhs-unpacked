/*
a: reyhard

door handling script
while doors are opened by action make sure they stay in such state
*/

if(_this select 1 == "cargo")then
{
	private["_v"];
	_v = _this select 0;

	if(_v getVariable ["ramp_handler",0] ==1)then
	{
		_v animateDoor ["ramp",1];
	}else{
		if(_v doorPhase "ramp" !=0)then
		{
			[_v,"ramp"] spawn rhs_fnc_doorHandler;
		};
	};
};