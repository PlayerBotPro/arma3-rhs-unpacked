params["_r","_t"];

switch(_t)do
{
	//1000
	case 0:
	{
		_d=format["rhsafrf\addons\rhs_optics\scripts\1v528\dist100\1v528_distS_%1.paa",_r];
		ctrlSetText [1201,_d];
		rhs_1v528_r100=parseNumber _r;
	};
	//100
	case 1:
	{
		_d=format["rhsafrf\addons\rhs_optics\scripts\1v528\dist1000\1v528_dist_%1.paa",_r];
		ctrlSetText [1202,_d];
		if(_r != "aw")then{rhs_1v528_r1000=parseNumber _r}else{rhs_1v528_r1000=-1};
	};
	//angle detection switch
	case 2:
	{
		//if on then switch it on, else switch it off
		if(ctrlVisible 1203)then
		{
			ctrlShow [1203,false];
			ctrlShow [1205,true];
			rhs_1v528_dk =true;
		}else{
			ctrlShow [1203,true];
			ctrlShow [1205,false];
			rhs_1v528_dk =false;
		};
	};

	//controls
	case 3:
	{
		[] spawn
		{
			_p = ctrlVisible 1205;
			{ctrlShow [_x, false]}foreach [1205,1206,1207,1208];
			sleep 0.5;
			{ctrlShow [_x, true];sleep 0.5;ctrlShow [_x, false];sleep 0.5}foreach [1206,1208,1207,1205];
			sleep 0.5;
			if(_p)then{ctrlShow [1205,true]};
		};
	};

	default {};
}