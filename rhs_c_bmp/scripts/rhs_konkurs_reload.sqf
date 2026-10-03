/*
	unhide used at14 cover upon reload
	a: reyhard
*/

params["_v","_w"];

if(_w == "rhs_weap_9m113")then{
	_v spawn {
		_this animateSource ["launcher_reload",1];
		sleep 13;
		_this animateSource ["launcher_reload",0];
		_this animate ["caps_hide",0];
	};
};