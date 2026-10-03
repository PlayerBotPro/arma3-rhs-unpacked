/*
	loading boats on Mark V
*/

params["_v","_b","_t"];


_b setdir 0;
rhs_markv_loading = true;
ctrlEnable [1600,false];
if(rhs_markv_load_mode isEqualTo 0)then{
	ctrlSetText [1600,"Loading in progress..."];
}else{
	ctrlSetText [1600,"Unloading in progress..."];
};

switch(_t)do{
	case 1 : {
		if(_v animationSourcePhase "attach_load_1" == 0)then{

			_v setVariable ["rhs_boat_slot1",_b,true];
			_b attachto [_v,[0,0,1.15],"attach_load_1_point"];
			_v animateSource ["attach_load_1",1];
			sleep 0.01;
			_b setVectorUp  [0.004215,-0.366606,0.91];
			sleep 2.7;
			_i = 0;
			while{_i < 7}do{
				_i = _i +0.1;
				_b setVectorUp  [0.004215,-0.366606,_i + 0.91];
				sleep 0.001;
			};
			_b setdir 0;
			sleep 1;
		}else{
			_v setVariable ["rhs_boat_slot1",objNull,true];
			_v animateSource ["attach_load_1",0];
			sleep 2.5;
			_i = 2.9;
			while{_i > 0}do{
				_i = _i -.1;
				_b setVectorUp  [0.004215,-0.366606,_i + 0.91];
				sleep 0.001;
			};
			sleep 2;
			detach _b;
			_b setVelocity [(velocity _b select 0) - sin(getdir _b)*2,(velocity _b select 0) - cos(getdir _b)*2,0];
		};
	};
	case 2 : {
		if(_v animationSourcePhase "attach_load_2" == 0)then{

			_v setVariable ["rhs_boat_slot2",_b,true];
			_b attachto [_v,[0.25,0,1.15],"attach_load_2_point"];
			_v animateSource ["attach_load_2",1];
			sleep 0.01;
			_b setVectorUp  [0.004215,-0.366606,0.91];
			sleep 2.7;
			_i = 0;
			while{_i < 7}do{
				_i = _i +0.1;
				_b setVectorUp  [0.004215,-0.366606,_i + 0.91];
				sleep 0.001;
			};
			_b setdir 0;
			sleep 1;
		}else{
			_v setVariable ["rhs_boat_slot2",objNull,true];
			_v animateSource ["attach_load_2",0];
			sleep 2.5;
			_i = 2.9;
			while{_i > 0}do{
				_i = _i -.1;
				_b setVectorUp  [0.004215,-0.366606,_i + 0.91];
				sleep 0.001;
			};
			sleep 2;
			detach _b;
			_b setVelocity [(velocity _b select 0) - sin(getdir _b)*2,(velocity _b select 0) - cos(getdir _b)*2,0];
		};
	};
	case 3 : {
		if(_v animationSourcePhase "attach_load_3" == 0)then{

			_v setVariable ["rhs_boat_slot3",_b,true];
			_b attachto [_v,[0.0,0,1.05],"attach_load_3_point"];
			_v animateSource ["attach_load_3",1];
			sleep 0.01;
			_b setVectorUp  [0.004215,-0.366606,1.41];
			sleep 3;
		}else{
			_v setVariable ["rhs_boat_slot3",objNull,true];
			_v animateSource ["attach_load_3",0];
			_b setVectorUp  [0.004215,-0.366606,1.21];
			sleep 3;
			detach _b;
			_b setVelocity [(velocity _b select 0) - sin(getdir _b)*2,(velocity _b select 0) - cos(getdir _b)*2,0];
		};
	};
	case 4 : {
		if(_v animationSourcePhase "attach_load_4" == 0)then{

			_v setVariable ["rhs_boat_slot4",_b,true];
			_b attachto [_v,[0.25,-0.5,1.05],"attach_load_4_point"];
			_v animateSource ["attach_load_4",1];
			sleep 1;
			_i = 2.9;
			while{_i > 0}do{
				_i = _i -.1;
				_b setVectorUp  [0.004215,-0.366606,_i + 0.91];
				sleep 0.001;
			};
			_i = 0;
			while{_i < .8}do{
				_i = _i +0.01;
				_b setVectorUp  [0.004215,-0.366606,_i + 0.41];
				sleep 0.001;
			};
			sleep 1;
		}else{
			_v setVariable ["rhs_boat_slot4",objNull,true];
			_v animateSource ["attach_load_4",0];
			_b setVectorUp  [0.004215,-0.366606,1.41];
			sleep 3;
			_i = 0;
			while{_i < 7}do{
				_i = _i +0.1;
				_b setVectorUp  [0.004215,-0.366606,_i + 0.91];
				sleep 0.001;
			};
			detach _b;
			_b setVelocity [(velocity _b select 0) - sin(getdir _b)*2,(velocity _b select 0) - cos(getdir _b)*2,0];
		};
	};
	case 5 : {
		if(_v animationSourcePhase "attach_load_4" == 0)then{

			_v setVariable ["rhs_boat_slot5",_b,true];
			_b attachto [_v,[0.0,0,1.45],"attach_load_4_point"];
			_v animateSource ["attach_load_4",1];
			sleep 0.01;
			_b setVectorUp  [0.004215,-0.366606,1.41];
		}else{
			_v setVariable ["rhs_boat_slot5",objNull,true];
			_v animateSource ["attach_load_4",0];
			_b setVectorUp  [0.004215,-0.366606,1.21];
			sleep 3;
			_i = 0;
			while{_i < 7}do{
				_i = _i +0.1;
				_b setVectorUp  [0.004215,-0.366606,_i + 0.91];
				sleep 0.001;
			};
			detach _b;
			_b setVelocity [(velocity _b select 0) - sin(getdir _b)*2,(velocity _b select 0) - cos(getdir _b)*2,0];
		};
	};
};

if(dialog)then{
	if(rhs_markv_load_mode isEqualTo 0)then{
		ctrlSetText [1600,"Load boat"];
	}else{
		ctrlSetText [1600,"Unload boat"];
	};
	rhs_markv_loading = false;
};