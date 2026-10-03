{
    if(side _x == independent) then {
    _x unassignItem "NVGoggles_INDEP";
    _x removeItem "NVGoggles_INDEP";
    };
} foreach (allUnits); 

{
    if(side _x == opfor) then {
    _x unassignItem "NVGoggles_OPFOR";
    _x removeItem "NVGoggles_OPFOR";
    };
} foreach (allUnits); 

{
    if(side _x == blufor) then {
    _x unassignItem "NVGoggles";
    _x removeItem "NVGoggles";
    };
} foreach (allUnits);  