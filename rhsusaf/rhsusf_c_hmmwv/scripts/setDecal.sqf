/*
a: reyhard

window handling in m1025
*/
params["_v","_t","_tex"];

_n = (getArray (configfile >> "cfgVehicles" >> typeOf _v >> "hiddenSelections")) find _t;

_v setObjectTextureGlobal [_n, format['rhsusf\addons\rhsusf_hmmwv\unitdecals\%1.paa',_tex] ];


