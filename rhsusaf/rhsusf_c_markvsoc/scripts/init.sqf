params["_asdg_mkvsoc"];

_asdg_mkvsoc animate ["c_instr_illum",1];
_asdg_mkvsoc animate ["c_eng_ctrl_illum",1];
_asdg_mkvsoc animate ["c_displays_illum",1];
// _ladder1 = "Land_MkV_ladder" createVehicle [0,0,0];
// _ladder1 attachTo [_asdg_mkvsoc, [0,0,0], "mP_p_ladder"];
// _ladder1 setDir 180;
// _ladder1 setPos getPos _ladder1;
// sleep 1;

if(is3DEN)exitWith{};

_rw = "Land_MkV_Roadway" createVehicle [0,0,0];
_asdg_mkvsoc disableCollisionWith _rw;
_rw attachTo [_asdg_mkvsoc, [-0.16,-1.475,-1.8]];
_rw setDir 180;
_rw setPos getPos _rw;

{
    _x addEventHandler ["CuratorObjectDeleted", {
         diag_log str(_this);
         params["_curator","_object"];
         diag_log str(_object);
         diag_log str(_curator);
         if ("ASH_MKVSOC" == typeOf _object) then {

             {
                 diag_log str(_x);
                 deleteVehicle _x;
             } foreach (attachedObjects _object);
         } else {
             //hint "Not a boat";
         };
     }];
} foreach allCurators;

// hint "Its a boat!"
// diag_log str(attachedObjects _object);
// _compLights = "Land_MkV_compLights" createVehicle [0,0,0];
// _compLights attachTo [_asdg_mkvsoc, [0,0,0], "memP_comp_lights"];
// _compLights setDir 180;
// _compLights setPos getPos _compLights;