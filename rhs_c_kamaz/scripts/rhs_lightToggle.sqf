/*
	vehicle lights toggles
	i:
		_v - vehicle
		_m - mode, 0- main lights, 1- cabin lights, 2 - main lights without cabin lights toggle, 3 - search light
	a: reyhard
*/

params["_v","_m"];

switch(_m)do{

	case 0: {
		if(_v animationPhase "longlights_hide" > 0)then{
			_v animate ["longlights_hide",0,true];
			_v animate ["shortlights_hide",1,true];
		}else{
			if(_v animationPhase "lights_hide" > 0)then{
				_v animate ["longlights_hide",1,true];
				_v animate ["lights_hide",0,true];
			}else{
				if(_v animationPhase "cabinlights_hide" == 1)then{
					_v animate ["longlights_hide",1,true];
					_v animate ["shortlights_hide",0,true];
					_v animate ["lights_hide",0,true];
				}else{
					_v animate ["shortlights_hide",0,true];
					_v animate ["lights_hide",1,true];
				};
			};
		};
	};
	case 1: {
		_v animate ["cabinlights_hide",(1-(_v animationPhase "cabinlights_hide")),true];
	};
	case 2: {
		if(_v animationPhase "longlights_hide" > 0)then{
			_v animate ["longlights_hide",0,true];
			_v animate ["shortlights_hide",1,true];
		}else{
			_v animate ["longlights_hide",1,true];
			_v animate ["shortlights_hide",0,true];
		};
	};
	case 3: {
		_v animate ["searchlight_hide",(1-(_v animationPhase "searchlight_hide")),true];
	};
};