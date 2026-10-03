_c = _this select 0;

while{alive _c}
do{
	_n=floor(random(35))+1;
	if(_n<=9)then{_n=format["0%1",_n]};
	_c say3d format["rhs_rus_land_rc_%1",_n];
	sleep (8+random(15));
};