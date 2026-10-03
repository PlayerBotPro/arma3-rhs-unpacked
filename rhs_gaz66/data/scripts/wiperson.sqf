private ["_gaz66", "_loop"];

_gaz66 = _this select 0;

_gaz66 animate ["wipers", 1]; 

while {(alive _gaz66)} do {
if (_gaz66 animationPhase "wipers" == 1) then {
_gaz66 say "RHS_GAZ66_wipers";
_gaz66 animate ["wiper_loop",1];
_gaz66 animate ["wiper2_loop",1];
sleep 1.5;
_gaz66 animate ["wiper_loop",0];
_gaz66 animate ["wiper2_loop",0];
sleep 1.5;
};
};
exit


