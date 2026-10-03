#include "defs.hpp"
#include "defs_ui.hpp"

#define GET_DISPLAY (findDisplay ss21_main_IDD)
#define GET_CTRL(a) (GET_DISPLAY displayCtrl ##a)

params["_mode"];

//if (_mode==0) then {ss21_set(veh,(vehicle (call rhs_fnc_findPlayer)))};
_tochka = vehicle (call rhs_fnc_findPlayer);
_weapon = "RHS_9M79_1Launcher";
_target_marker_name = "ss21_target_marker";
_launcher_marker_name = "ss21_launcher_marker_name";


_disable_buttons = {
	{ctrlEnable [_x,false];} forEach [ss21_stable_down_btn_IDC,ss21_stable_up_btn_IDC,ss21_bay_open_btn_IDC,ss21_bay_close_btn_IDC,ss21_pylon_up_btn_IDC,ss21_pylon_down_btn_IDC,ss21_firing_position_btn_IDC,ss21_running_position_btn_IDC,ss21_launch_btn_IDC];
};

_check_buttons = {
	_tochka = _this;
	_stable_down = vehget(stable_down);
	_bay_open = vehget(bay_open);
	_pylon_up = vehget(pylon_up);
	_target_designated = vehget(target_designated);
	_target = vehget(target);
	_lpos = getPosASL _tochka;
	_isGround = !(surfaceIsWater [_lpos select 0, _lpos select 1]);

	_result = [false,false,_isGround];
	if (vehget(inprogress)) exitWith {[true,true,_isGround]};
	_dist_check = {
		params["_tpos","_tochka"];
		_lpos = getPosASL _tochka;
		_result = false;
		if ((_lpos distance _tpos) > 500) then {
			_result = true;
		};
		_result
	};

	_angular_check = {
		params["_tpos","_tochka"];
		_result = false;
		_reldir = _tochka getRelDir _tpos;
		if (_reldir>180) then {_reldir = _reldir - 360};
		if (abs(_reldir) < 30) then {
			_result = true;
		};
		_result
	};

	ctrlEnable [ss21_stable_down_btn_IDC,(!_stable_down)&&_isGround];
	ctrlEnable [ss21_stable_up_btn_IDC,_stable_down&&(!_bay_open)];
	ctrlEnable [ss21_bay_open_btn_IDC,(!_bay_open)&&_stable_down];
	ctrlEnable [ss21_bay_close_btn_IDC,_bay_open&&(!_pylon_up)];
	ctrlEnable [ss21_pylon_up_btn_IDC,(!_pylon_up)&&_bay_open];
	ctrlEnable [ss21_pylon_down_btn_IDC,_pylon_up];
	ctrlEnable [ss21_firing_position_btn_IDC,((!_stable_down)||(!_bay_open)||(!_pylon_up))&&_isGround];
	ctrlEnable [ss21_running_position_btn_IDC,_stable_down||_bay_open||_pylon_up];

	if _target_designated then {
		_ang_result = [_target,_tochka] call _angular_check;
		_dist_result = [_target,_tochka] call _dist_check;
		ctrlEnable [ss21_launch_btn_IDC,_ang_result&&_dist_result&&_pylon_up&&_isGround];
		_result = [_ang_result,_dist_result,_isGround];
	}else{
		ctrlEnable [ss21_launch_btn_IDC,false];
	};
	_result
};

_fill_coords = {
	_tochka = _this;
	_target = vehget(target);
	_target_marker_name = "ss21_target_marker";
	_launcher_marker_name = "ss21_launcher_marker_name";
	deleteMarkerLocal _target_marker_name;
	deleteMarkerLocal _launcher_marker_name;

	_lpos = getPosASL (_tochka);
	ctrlSetText [ss21_status_IDC, ((localize "STR_RHS_ss21_status_position")+" . . . "+(localize "STR_RHS_ss21_status_done"))];
	_marker_tochka = createMarkerLocal [_launcher_marker_name, _lpos];
	_marker_tochka setMarkerShapeLocal "ICON";
	_marker_tochka setMarkerTypeLocal "o_art";
	ctrlSetText [ss21_tochka_x_IDC, str round(_lpos select 0)];
	ctrlSetText [ss21_tochka_y_IDC, str round(_lpos select 1)];
	ctrlSetText [ss21_tochka_z_IDC, str round(_lpos select 2)];

	if vehget(target_designated) then {
		_marker_target = createMarkerLocal [_target_marker_name, _target];
		_marker_target setMarkerShapeLocal "ICON";
		_marker_target setMarkerTypeLocal "mil_destroy";
		_marker_target setMarkerTextLocal format ["%1, %2",round(_target select 0),round(_target select 1)];
		ctrlSetText [ss21_target_x_IDC, str round(_target select 0)];
		ctrlSetText [ss21_target_y_IDC, str round(_target select 1)];
		ctrlSetText [ss21_target_z_IDC, str round(_target select 2)];

		_dirtotarget = (_tochka getRelDir _target);
		if(_dirtotarget > 180)then{_dirtotarget = _dirtotarget - 360};

		ctrlSetText [ss21_rel_dir_IDC, str round(_dirtotarget)];
		ctrlSetText [ss21_rel_dist_IDC, str round(_target distance _lpos)];
		ctrlSetText [ss21_rel_elev_IDC, str round((_target select 2)-(_lpos select 2))];
	};
};

_set_status = {
	_string = _this select 0;
	_done = _this select 1;
	_isDisplay = !isNull(findDisplay ss21_main_IDD);
	_loc_string = (localize _string);
	if _done then {
		_loc_string = _loc_string + " . . . " + (localize "STR_RHS_ss21_status_done");
	};
	if _isDisplay then {
		ctrlSetText [ss21_status_IDC,_loc_string];
	};
};

switch _mode do {
	case 0: {//onLoad
			waitUntil {!isNull (findDisplay ss21_main_IDD)};
			_result = _tochka call _check_buttons;
			_tochka call _fill_coords;
			if (vehget(inprogress)) exitWith {[] call _disable_buttons;};
			ctrlSetText [ss21_status_IDC, localize "STR_RHS_ss21_status_position"];
			sleep 1;
			switch true do {
				case isNil{(magazines _tochka) select 0} : {ctrlSetText [ss21_status_IDC, (localize "STR_RHS_ss21_no_ammo")];};
				case (!vehget(target_designated)) : {ctrlSetText [ss21_status_IDC, (localize "STR_RHS_ss21_select_target")];};
				case (vehget(target_designated)&&!(_result select 0)) : {ctrlSetText [ss21_status_IDC, (localize "STR_RHS_ss21_status_ang_error")];};
				case (vehget(target_designated)&&!(_result select 1)) : {ctrlSetText [ss21_status_IDC, (localize "STR_RHS_ss21_status_dist_error")];};
				case (vehget(target_designated)&&!(_result select 2)) : {ctrlSetText [ss21_status_IDC, (localize "STR_RHS_ss21_status_water_error")];};
				default {ctrlSetText [ss21_status_IDC, (localize "STR_RHS_ss21_ready")]};
			};
		};
	case 1: {//onUnLoad
			onMapSingleClick '';
			deleteMarkerLocal _target_marker_name;
			deleteMarkerLocal _launcher_marker_name;
		};
	case 2: {//stable up
			[] call _disable_buttons;
			["STR_RHS_ss21_status_stable_up",false] call _set_status;
			[0,0,_tochka] call rhs_fnc_ss21_anim;
			["STR_RHS_ss21_status_stable_up",true] call _set_status;
			_tochka call _check_buttons;
		};
	case 3: {//stable down
			[] call _disable_buttons;
			["STR_RHS_ss21_status_stable_down",false] call _set_status;
			[0,1,_tochka] call rhs_fnc_ss21_anim;
			["STR_RHS_ss21_status_stable_down",true] call _set_status;
			_tochka call _check_buttons;
		};
	case 4: {//bay close
			[] call _disable_buttons;
			["STR_RHS_ss21_status_bay_close",false] call _set_status;
			[1,0,_tochka] call rhs_fnc_ss21_anim;
			["STR_RHS_ss21_status_bay_close",true] call _set_status;
			_tochka call _check_buttons;
		};
	case 5: {//bay open
			[] call _disable_buttons;
			["STR_RHS_ss21_status_bay_open",false] call _set_status;
			[1,1,_tochka] call rhs_fnc_ss21_anim;
			["STR_RHS_ss21_status_bay_open",true] call _set_status;
			_tochka call _check_buttons;
		};
	case 6: {//pylon down
			[] call _disable_buttons;
			["STR_RHS_ss21_status_pylon_down",false] call _set_status;
			[2,0,_tochka] call rhs_fnc_ss21_anim;
			["STR_RHS_ss21_status_pylon_down",true] call _set_status;
			_tochka call _check_buttons;
		};
	case 7: {//pylon up
			[] call _disable_buttons;
			["STR_RHS_ss21_status_pylon_up",false] call _set_status;
			[2,1,_tochka] call rhs_fnc_ss21_anim;
			["STR_RHS_ss21_status_pylon_up",true] call _set_status;
			_tochka call _check_buttons;
		};
	case 8: {//firing position
			[] call _disable_buttons;
			vehset(inprogress,true);
			while {((call rhs_fnc_findPlayer) in (crew _tochka))&&(!vehget(pylon_up))} do {
				_stable_down = vehget(stable_down);
				_bay_open = vehget(bay_open);
				_pylon_up = vehget(pylon_up);
				switch true do {
					case (!_stable_down) : {
							["STR_RHS_ss21_status_stable_down",false] call _set_status;
							[0,1,_tochka] call rhs_fnc_ss21_anim;
							["STR_RHS_ss21_status_stable_down",true] call _set_status;
							sleep 1;
						};
					case (_stable_down&&!(_bay_open)) : {
							["STR_RHS_ss21_status_bay_open",false] call _set_status;
							[1,1,_tochka] call rhs_fnc_ss21_anim;
							["STR_RHS_ss21_status_bay_open",true] call _set_status;
							sleep 1;
						};
					case (_bay_open&&(!_pylon_up)) : {
							["STR_RHS_ss21_status_pylon_up",false] call _set_status;
							[2,1,_tochka] call rhs_fnc_ss21_anim;
							["STR_RHS_ss21_status_pylon_up",true] call _set_status;
							sleep 1;
						};
					default {};
				};
			};
			vehset(inprogress,false);
			_tochka call _check_buttons;
		};
	case 9: {//running position
			[] call _disable_buttons;
			vehset(inprogress,true);
			while {((call rhs_fnc_findPlayer) in (crew _tochka))&&(vehget(stable_down))} do {
				_stable_down = vehget(stable_down);
				_bay_open = vehget(bay_open);
				_pylon_up = vehget(pylon_up);
				switch true do {
					case (_pylon_up) : {
							["STR_RHS_ss21_status_pylon_down",false] call _set_status;
							[2,0,_tochka] call rhs_fnc_ss21_anim;
							["STR_RHS_ss21_status_pylon_down",true] call _set_status;
							sleep 1;
						};
					case (_bay_open&&!(_pylon_up)) : {
							["STR_RHS_ss21_status_bay_close",false] call _set_status;
							[1,0,_tochka] call rhs_fnc_ss21_anim;
							["STR_RHS_ss21_status_bay_close",true] call _set_status;
							sleep 1;
						};
					case (_stable_down&&(!_bay_open)) : {
							["STR_RHS_ss21_status_stable_up",false] call _set_status;
							[0,0,_tochka] call rhs_fnc_ss21_anim;
							["STR_RHS_ss21_status_stable_up",true] call _set_status;
							sleep 1;
						};
					default {};
				};
			};
			vehset(inprogress,false);
			_tochka call _check_buttons;
		};
	case 10: {//set target position [ASL]
			onMapSingleClick {[11,ATLToASL _pos] spawn rhs_fnc_ss21_dialog_control;onMapSingleClick "";true;};
		};
	case 11: {//set target position - onMapSingleClick
			_target = _this select 1; // target position
			vehset(target,_target);
			vehset(target_designated,true);
			ctrlSetText [ss21_status_IDC, (localize "STR_RHS_ss21_status_coord_loaded")];
			_tochka call _fill_coords;
			if (vehget(inprogress)) exitWith {[] call _disable_buttons;};
			_result = (_tochka call _check_buttons);
			sleep 3;
			if !(_result select 0) then {
				ctrlSetText [ss21_status_IDC, (localize "STR_RHS_ss21_status_ang_error")];
				sleep 3;
			};
			if !(_result select 1) then {
				ctrlSetText [ss21_status_IDC, (localize "STR_RHS_ss21_status_dist_error")];
				sleep 3;
			};
		};
	case 12: {//launch
			if ((_tochka ammo _weapon) > 0) then {
				_fired_EH = _tochka addEventHandler ["fired",{_this call rhs_fnc_ss21_missile_control}];

				[_tochka,_weapon] remoteExec ["selectWeapon",_tochka];
				_tochka setOwner clientOwner;
				sleep 0.5;
				if (local _tochka) then {
					_tochka selectWeapon _weapon;
					sleep 0.1;
					_tochka fire _weapon;
				}else{
					hint "Vehicle is not local to the gunner! Due to Arma limitation you have to change seat to driver pos & get back to gunner seat again to fire missile.";
				};
				vehset(target_designated,false);
				sleep 1;
				_tochka removeEventHandler ["fired",_fired_EH];
			};
		};
	default {};
};