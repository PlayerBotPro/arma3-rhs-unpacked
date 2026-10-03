/*
	When units with

	_v - vehicle. variable _this in config
	_s - animation state, 0,1. variable _value in config
	_n - propery name, contains animation name. variable %s in config
	_m - mode, default -1, 0 - enable habar completly, 1 disable habar completly

	a: reyhard
*/
params["_v","_s","_n",["_m",-1]];

//diag_log format["eden time: %1,frame %2 %3 v: %4, s: %5, m:%6",time,diag_frameNo,is3DEN, _v,_s,_n];
//Just animation
if(_m isEqualTo -1)then{
	_v animate [_n,_s,true];
}else{
//Disable/Enable all habar animations

	//get list of randomized attributes
	private _attributeList = getArray (configFile >> "CfgVehicles" >> typeOf _v >> "rhs_randomizedHabar" );
	{
		//animate model
		_v animate [_x,_m,true];
		//set eden attributes
		if(is3DEN)then{
			_v set3DENAttribute [_x,_m];
		};
	}foreach _attributeList;
};