/*
	unhide used at14 cover upon reload
	a: reyhard
*/

params["_v","_w"];

if(_w == "rhs_weap_9k133")then{
	_v spawn {
		sleep 30;
		_this animate ["at14_l_hide",0];
		_this animate ["at14_r_hide",0];
	};
};