/*
	a: reyhard

	open 1v528 ballistic menu
*/

params ["_gui","_v"];
private _player = call rhs_fnc_findPlayer;

if(inputAction rhs_key_opn_cmp_GLB > 0 && !(isTurnedOut _player) )then
{
	_d = createDialog "RHS_1g42_1v528_computer";
	{ctrlShow [_x, false]}foreach [1206,1207,1208];
	//override default state in case values were changed before
	if(rhs_1v528_r100!=0)then
	{
		[(format["%1",rhs_1v528_r100]),0] call rhs_fnc_1v528_setRange;
	};
	if(rhs_1v528_r1000!=-1)then
	{
		 [(format["%1",rhs_1v528_r1000]),1] call rhs_fnc_1v528_setRange;
	};
	if(rhs_1v528_dk)then
	{
		ctrlShow [1203, false];
	}else{
		ctrlShow [1205, false];
	};

	//wait for dialog close and set params after that
	waitUntil {not dialog};

	if(rhs_1v528_r1000 > -1)then
	{
		_t = rhs_1v528_r1000 + rhs_1v528_r100;
		_fnc=rhs_fnc_sight_1g42_setElev;
		if(_gui == "RHS_essa_Ctrl")then{_fnc=rhs_fnc_sight_essa_elev};
		if(count _this >2)then{
			[_v,_t,_gui,1] call _fnc;
		}else{
			[_v,_t,_gui] call _fnc;
		};
	};
};
