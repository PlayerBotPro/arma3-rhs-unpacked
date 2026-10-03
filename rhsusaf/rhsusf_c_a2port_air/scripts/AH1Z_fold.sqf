_ah1z= _this select 0;
_position = _this select 1;
_ah1z animate ["mainrotor_folded",1-_position];
_ah1z animate ["mainrotor_unfolded",_position];
_ah1z animate ["rotorshaft_unfolded",_position];   