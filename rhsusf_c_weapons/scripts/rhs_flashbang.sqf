/*
flashbang script - checking for effects
hooked to particles onDestruction event
in:
_p - position of explosion
_d - effective distance
out: none
a: reyhard
*/
params["_p","_d"];

private _u = _p nearEntities ["CAManBase", _d];
private _p2 = [_p select 0,_p select 1,(_p select 2)+0.4];

{
	//check if alive
	if(alive _x)then
	{
		private _e = eyePos _x;

		//check if there is line between units eyes and flashbang
		if (!lineIntersects [_e, AGLtoASL _p2,_x]) then
		{
			private _a = _x getRelDir _p;
			//explosion strenght - more distance less power
			private _s = (_d-(_x distance _p)*0.5)/_d;

			//action for player
			if (isPlayer _x) then
			{
				if (_a < 60 OR _a >290) then
				{
					//flash and whistle
					[_x,0,_s] remoteExec  ["rhs_fnc_usf_flashbang_effect",_x];
				} else {
					//only whistle
					[_x,1,_s] remoteExec  ["rhs_fnc_usf_flashbang_effect",_x];
				};
			}else{
			//action for AI
				if (_a < 60 OR _a >290) then
				{
					//flash and whistle
					[_x,2,_s] remoteExec  ["rhs_fnc_usf_flashbang_effect",_x];
				} else {
					//only whistle
					[_x,3,_s] remoteExec  ["rhs_fnc_usf_flashbang_effect",_x];
				};
			};
		};
	};
} foreach _u;