private ["_object","_curator"];

diag_log str(_this);

_object = _this select 1;
_curator = _this select 0;

diag_log str(_object);
diag_log str(_curator);

if ("ASH_MKVSOC" == typeOf _object) then {
      hint "Its a boat!"
     diag_log str(attachedObjects _object)'
      {
             diag_log str(_x);
              deleteVehicle _x;
      } foreach (attachedObjects _object);
} else {
     hint "Not a boat";
};

deleteVehicle _object;