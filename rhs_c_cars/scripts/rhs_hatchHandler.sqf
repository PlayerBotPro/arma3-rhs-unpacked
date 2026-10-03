/*
handling hatch animations

a: reyhard
*/

params ["_V"];
private["_hatchFront","_hatchBack"];
_hatchFront=true;
_hatchBack=true;

while{alive _v}do{

	if(_v animationPhase "hatch_front" > 0)then{
		if(_hatchFront && !( isnull (_V turretUnit [0])) )then{
			_v animateDoor ["hatch_front_door",1];
			_hatchFront=false;
		};
	}else{
		if(!_hatchFront)then{
			_v animateDoor ["hatch_front_door",0];
			_hatchFront=true;
		};
	};


	if(_v animationPhase "hatch_back" > 0)then{
		if(_hatchBack && !( isnull (_V turretUnit [1])) )then{
			_v animateDoor ["hatch_back_door",1];
			_hatchBack=false;
		};
	}else{
		if(!_hatchBack)then{
			_v animateDoor ["hatch_back_door",0];
			_hatchBack=true;
		};
	};
	sleep 0.5;
};