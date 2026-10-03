/*
Created by Vadim Shchemelinin aka badger
2010 St.Petersburg

Script for T-80 by RHS
*/
params["_t80","_man"];

private _anim = (_this select 3) select 0;
private _t80pos = getPosATL _t80;
private _freepos = "";
private _t802 = _t80;
private _upos = _t80 selectionPosition "snorkel_point";
private _udeg = 0;
private _udeg0 = 90;

if (_anim == 1) then {
	if (getDammage _t80 < 0.01) then {
		hint localize "STR_t80_snorkel_inst_start";
		_t80 animate ["snorkel_unhide",1];
		if (_man != vehicle _man) then {
			moveOut _man;
			sleep 0.2;
			waitUntil {_man == vehicle _man};
		};
		_man attachTo [_t80,_upos];
		_man SetDir (_udeg);
		_man playMove  'rhs_snorkel_mount';
		sleep 20;
		if (_t80 distance _t80pos > 5) exitwith {hint localize "STR_t80_snorkel_inst_fail"; detach _man;};
		_man playMove  'AinvPknlMstpSlayWrflDnon_medic';
		sleep 4;
		if (_t80 distance _t80pos > 5) exitwith {hint localize "STR_t80_snorkel_inst_fail"; detach _man;};
		detach _man;
		hint localize "STR_t80_snorkel_inst_finish";

		_eh_index = _t80 addEventHandler ["engine",{_this spawn rhs_fnc_t80_snorkel_eh}];
		_t80 setVariable ["rhs_snorkel_eh",_eh_index,true];

		_t80 animate ["snorkel_unhide2",1];
		_t80 animate ["snorkel_hide",0];
	} else {
		hint localize "STR_RHS_T80_snorkel_damage";
	};
} else {
	hint localize "STR_t80_snorkel_uninst_start";
	_t80 animate ["snorkel_hide",1];
	_t80 animate ["snorkel_unhide2",0];
	if (_man != vehicle _man) then {
		moveOut _man;
		sleep 0.2;
		waitUntil {_man == vehicle _man};
	};
	_man attachTo [_t80,_upos];
	_man SetDir (_udeg);
	_man playMove  'rhs_snorkel_mount';
	sleep 20;
	_man playMove  'AinvPknlMstpSlayWrflDnon_medic';
	if (_t80 distance _t80pos > 5) exitwith {hint localize "STR_t80_snorkel_uninst_fail"; detach _man;};
	detach _man;
	hint localize "STR_t80_snorkel_uninst_finish";

	_t80 animate ["snorkel_unhide",0];
	private _eh_index = _t80 getVariable ["rhs_snorkel_eh",-1];
	if(_eh_index >= 0)then{
		_t80 removeEventHandler ["engine",_eh_index];
	};

};