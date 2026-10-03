
if(_this select 1 != "rhs_weap_2p130")exitWith{};

[_this select 0] spawn
{
	_v = _this select 0;

	_a= deg (_v animationPhase "RHS_BMP1_2P130_mortar");

	_v animate ["RHS_BMP1_2P130_mortar_load",rad(90-_a)];
	_v animate ["RHS_BMP1_2P130_mortar_main_load",rad(90*1.35-_a)];
	_v animate ["RHS_BMP1_2P130_part1_load",-rad(90-_a)];

	sleep 3.2;
	_v animateDoor ["s_2p130_load_shell",1];
	sleep 1;
	_v animateDoor ["s_2p130_load_shell",0,true];

	{_v animate [_x,0]}foreach ["RHS_BMP1_2P130_mortar_load","RHS_BMP1_2P130_mortar_main_load","RHS_BMP1_2P130_part1_load"];
};