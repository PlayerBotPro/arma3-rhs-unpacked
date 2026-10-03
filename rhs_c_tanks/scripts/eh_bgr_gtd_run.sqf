/*
Created by Vadim Shchemelinin aka badger 
2010 St.Petersburg

Script for T-80 by RHS 
*/
//if !(local _t80) exitWith {};
if (isnil 'rhs_t80_bgr_gtd') then 
{
	if (!isServer) exitWith {};

	private ["_t80","_eng","_dir","_pos","_rvd","_rvu"];

	_t80 = _this select 0;
	_eng = _this select 1;


	if ((_eng)and(abs (speed _t80) < 1)and(_t80 getVariable "bgr_rhs_t80_gtd" == 0)) then {
		_t80 setVariable ["bgr_rhs_t80_gtd",1,false];
		_t80 vehicleChat localize "STR_RHS_T80_GTD_STARTING";
		_eng = 0;
		_dir = fuel _t80;
		_t80 say "rhs_t80_engine_start";
		_t80 engineOn false;
		_t80 setFuel 0;
		sleep 4;
		
		/*while {_eng < 40} do  {
			_t80 setFuel 0;
			_t80 engineOn true;
			sleep 0.1; 
			_eng = _eng + 1; 
		};*/
		_t80 setFuel _dir;
		_t80 engineOn true;
		_t80 vehicleChat localize "STR_RHS_T80_GTD_READY";
		sleep 0.1;
		_t80 setVariable ["bgr_rhs_t80_gtd",0,false];
	};
};