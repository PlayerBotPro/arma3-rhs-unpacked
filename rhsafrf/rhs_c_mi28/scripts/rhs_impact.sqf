params["_vehicle"];

_vehicle allowDamage false;
_vehicle spawn {sleep 0.01;_this allowDamage true};
systemChat format["bla %1",_this];