/*
Created by Vadim Shchemelinin aka badger 
2010 St.Petersburg

Script for T-80 by RHS 
*/
//if !(local _t80) exitWith {};
if (!isServer) exitWith {};

private ["_t80","_EngineScr"];

_t80 = _this;

_t80 setVariable ["bgr_rhs_t80_gtd",0,false]; 
_EngineScr = _t80 addEventHandler ["Engine", "_this execVM '\rhsafrf\addons\rhs_c_tanks\scripts\eh_bgr_gtd_run.sqf'"];