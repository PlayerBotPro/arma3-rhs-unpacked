_r = _this select 0;
_n=[1201,1202,1203,1204];


if(_r<10)then
{
	if(ctrlVisible 1205)then
	{
		if(count rhsusf_m1_range_ccp < 5)then
		{
			rhsusf_m1_range_ccp pushback _r;
			_i=count rhsusf_m1_range_ccp-1;
			{
				ctrlSetText [_n select _i,format["rhsusf\addons\rhsusf_c_m1a1\data\numbers\red_%1.paa",_x]];
				ctrlShow [_n select _i,true];
				_i=_i-1;

				//player globalChat format["%1 %2",_r,rhsusf_m1_range_ccp];
			}foreach rhsusf_m1_range_ccp;
		};
	};
}else{

	switch(_r)do
	{
		//enter
		case 11:
		{
			_d="";
			{
				_d = _d + format["%1",_x];
			}foreach rhsusf_m1_range_ccp;

			_d = parseNumber _d;
			//player globalChat format["%1", _d];

			if(_d>5000 or _d <200)exitWith{playSound ["RHSUSF_Error",true];};
			rhsusf_m1_range=_d;
			[_d] call rhsusf_fnc_rf_m1_elev;
		};
		//clear
		case 12:
		{
			if(ctrlVisible 1205)then
			{
				{ctrlShow [_x,false]}foreach _n;
				rhsusf_m1_range_ccp=[];
				rhsusf_m1_range=0;
				vehicle player animate["elev",0];
				[0] spawn RHSUSF_fnc_rf_M1_digit;
			};
		};

		//manual range input switch
		case 13:
		{
			//if on then switch it on, else switch it off
			if(ctrlVisible 1205)then
			{
				ctrlShow [1205,false];
				{ctrlShow [_x,false]}foreach _n;
				rhsusf_m1_range_ccp=[];
			}else{
				ctrlShow [1205,true];
			};

		};
		default {};
	};
};