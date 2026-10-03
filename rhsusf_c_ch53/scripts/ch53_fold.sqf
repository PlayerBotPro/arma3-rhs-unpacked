params["_v","_p",["_t",false]];

if(_p == 1)then{
	_v animateDoor ['mainRotor_folded',1,_t];
	_v setVariable ['rhs_fuelLevel',fuel _v,true];
	_v setFuel 0;
}else{
	_v animateDoor ['mainRotor_folded',0,_t];
	if(_t)then
	{
		_v setFuel (_v getVariable ['rhs_fuelLevel',1])
	}else{
		_v spawn {sleep 10;_this setFuel (_this getVariable ['rhs_fuelLevel',1])};
	};
};