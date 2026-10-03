_a=_this select 0;
_t=_this select 1;
_s=true;
_i = (count _a)-1;
while{_i >= 0}do{
	if(( (_a select _i) distance _t)>340)then{_s=false;_i=-1};
	_i=_i-1;
};
_s
