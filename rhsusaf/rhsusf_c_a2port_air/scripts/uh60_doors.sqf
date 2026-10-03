/*
a: reyhard

door handling script
while doors are opened by action make sure they stay in such state
*/

if(_this select 1 == "cargo")then
{
	private["_v"];
	_v = _this select 0;

	if(_v animationPhase "doorhandler_R" ==1)then
	{
		_v animateDoor ["doorRB",1];
	}else{
		if(_v doorPhase "doorRB" !=0)then
		{
			[_v,"doorRB"] spawn rhs_fnc_doorHandler;
		};
	};
	if(_v animationPhase "doorhandler_L" ==1)then
	{
		_v animateDoor ["doorLB",1];
	}else{
		if(_v doorPhase "doorLB" !=0)then
		{
			[_v,"doorLB"] spawn rhs_fnc_doorHandler;
		};

	};

};