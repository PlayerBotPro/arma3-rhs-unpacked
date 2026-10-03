/*
a: reyhard

door handling script
creates delay between door closing
*/
params["_v","_a",["_d",2]];

private _t	= format["rhs_h_%1",_a];
private _h	= _v getVariable [_t,-1];

if(_h>0)then
{
	_v setVariable [_t,time+_d];
	_v animateDoor [_a,1];
}else{
	_v setVariable [_t,time+_d];
	_v animateDoor [_a,1];

	waitUntil {(_v getVariable [_t,-1])<time};

	_v animateDoor [_a,0];
	_v setVariable [_t,nil];
};