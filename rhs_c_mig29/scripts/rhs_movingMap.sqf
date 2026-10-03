if(!isnil "map")then{deleteVehicle map};
map = "rhs_cockpitMap_waypoints" createVehicleLocal getpos player;
timeTick = time;
angle =0;
onEachFrame 
{
	if(time > timeTick)then
	{
		
		_wp1_pos = [random(1),random(1),0];
		_wp2_pos = [random(1),random(1),0];
		_wp3_pos = [random(1),random(1),0];
		_wp4_pos = [random(1),random(1),0];
		_wp5_pos = [random(1),random(1),0];
		_wp6_pos = [random(1),random(1),0];
		_wp7_pos = [random(1),random(1),0];
		_wp8_pos = [random(1),random(1),0];
		_wp9_pos = [random(1),random(1),0];
		_wp10_pos = [random(1),random(1),0];
		//_wp2_pos = [0.5,0.5,0];
		//_wp3_pos = [0.5+0.5*cos(angle),0.5+0.5*sin(angle),0];
		// X/Y coordinates are encoded as a single number with 5 digits precision each
		map animateSource ["wp1",	round((_wp1_pos select 0)*10000)			+(_wp1_pos select 1),true];
		map animateSource ["wp2",	round((_wp2_pos select 0)*10000)			+(_wp2_pos select 1),true];
		map animateSource ["wp3",	round((_wp3_pos select 0)*10000)			+(_wp3_pos select 1),true];
		map animateSource ["wp4",	round((_wp4_pos select 0)*10000)			+(_wp4_pos select 1),true];
		map animateSource ["wp5",	round((_wp5_pos select 0)*10000)			+(_wp5_pos select 1),true];
		map animateSource ["wp6",	round((_wp6_pos select 0)*10000)			+(_wp6_pos select 1),true];
		map animateSource ["wp7",	round((_wp7_pos select 0)*10000)			+(_wp7_pos select 1),true];
		map animateSource ["wp8",	round((_wp8_pos select 0)*10000)			+(_wp8_pos select 1),true];
		map animateSource ["wp9",	round((_wp9_pos select 0)*10000)			+(_wp9_pos select 1),true];
		map animateSource ["wp10",	round((_wp10_pos select 0)*10000)			+(_wp10_pos select 1),true];
		//_wp1_pos = _wp1_pos vectorMultiply 100;
		//_wp2_pos = _wp2_pos vectorMultiply 100;
		_dir1 = _wp1_pos getDir _wp2_pos;
		_dir2 = _wp2_pos getDir _wp3_pos;
		_dir3 = _wp3_pos getDir _wp4_pos;
		_dir4 = _wp4_pos getDir _wp5_pos;
		_dir5 = _wp5_pos getDir _wp6_pos;
		_dir6 = _wp6_pos getDir _wp7_pos;
		_dir7 = _wp7_pos getDir _wp8_pos;
		_dir8 = _wp8_pos getDir _wp9_pos;
		_dir9 = _wp9_pos getDir _wp10_pos;
		systemChat format["%1 %2",_dir, _dir + (90*sin(4*(_dir)-90)) max 0];
		map animateSource ["wp1_rot", _dir1 ,true];
		map animateSource ["wp2_rot", _dir2 ,true];
		map animateSource ["wp3_rot", _dir3 ,true];
		map animateSource ["wp4_rot", _dir4 ,true];
		map animateSource ["wp5_rot", _dir5 ,true];
		map animateSource ["wp6_rot", _dir6 ,true];
		map animateSource ["wp7_rot", _dir7 ,true];
		map animateSource ["wp8_rot", _dir8 ,true];
		map animateSource ["wp9_rot", _dir9 ,true];
		timeTick = time + 0.8;
		angle = angle + 1;
		if(angle > 360)then{angle =0};
	};

};
