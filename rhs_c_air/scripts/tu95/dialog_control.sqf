#include "defs.hpp"
#include "defs_ui.hpp"

#define GET_DISPLAY (findDisplay tu95_main_IDD)
#define GET_CTRL(a) (GET_DISPLAY displayCtrl ##a)

params["_mode"];

//if (_mode==0) then {tu95_set(veh,(vehicle (call rhs_fnc_findPlayer)))};
_vehicle = vehicle (call rhs_fnc_findPlayer);
_weapon = "rhs_weap_kh55sm_Launcher";
_target_marker_name = "tu95_target_marker";
_launcher_marker_name = "tu95_launcher_marker_name";


_disable_buttons = {
	{ctrlEnable [_x,false];} forEach [tu95_bay_open_btn_IDC,tu95_bay_close_btn_IDC,tu95_launch_btn_IDC];
};

//ctrlSetText [tu95_ammo_IDC, format["%1",getText (configFile >> "cfgMagazines" >> currentMagazine _vehicle >> "displayName")]];

_check_buttons = {
	_vehicle = _this;
	_bay_open = vehget(bay_open);
	_target_designated = vehget(target_designated);
	_target = vehget(target);
	_lpos = getPosASL _vehicle;
	_isGround = !(surfaceIsWater [_lpos select 0, _lpos select 1]);

	_result = [false,false,_isGround];
	if (vehget(inprogress)) exitWith {[true,true,_isGround]};
	_dist_check = {
		params["_tpos","_vehicle"];
		_lpos = getPosASL _vehicle;
		_result = false;
		if ((_lpos distance2d _tpos) > 500) then {
			_result = true;
		};
		_result
	};

	_angular_check = {
		params["_tpos","_vehicle"];
		_result = false;
		_reldir = _vehicle getRelDir _tpos;
		if (_reldir>180) then {_reldir = _reldir - 360};
		if (abs(_reldir) < 45) then {
			_result = true;
		};
		_result
	};

	ctrlEnable [tu95_bay_open_btn_IDC,(!_bay_open)];
	ctrlEnable [tu95_bay_close_btn_IDC,_bay_open];
	private _ammo = 0;
	for "_i" from 1 to 6 do {_ammo = _ammo + (_vehicle ammoOnPylon _i)};
	ctrlSetText [tu95_ammo_count_IDC, format["%1",_ammo]];

	if _target_designated then {
		_ang_result = [_target,_vehicle] call _angular_check;
		_dist_result = [_target,_vehicle] call _dist_check;
		ctrlEnable [tu95_launch_btn_IDC,_ang_result&&_dist_result&&_bay_open];
		_result = [_ang_result,_dist_result,_isGround];
	}else{
		ctrlEnable [tu95_launch_btn_IDC,false];
	};

	lbClear tu95_ammo_IDC;
	{
		private _ammoText = "EMPTY";
		if(_vehicle ammoOnPylon (_foreachIndex+1) > 0 )then{_ammoText = getText (configFile >> "cfgMagazines" >> _x >> "displayName")};
		lbAdd [tu95_ammo_IDC,format["%1: %2",_foreachIndex+1,_ammoText]];
	}foreach (GetPylonMagazines _vehicle);

	if(_bay_open && (_ammo > 0))then{
		_currentAmmo = getText (configFile >> "cfgMagazines" >> currentMagazine _vehicle >> "displayName");
		{
			if((getText (configFile >> "cfgMagazines" >> _x >> "displayName") isEqualTo _currentAmmo) && {_vehicle ammoOnPylon (_foreachIndex + 1)> 0})exitWith{
				lbSetCurSel [tu95_ammo_IDC,_foreachIndex];
			};
		}foreach (GetPylonMagazines _vehicle);
	};
	_result
};

_fill_coords = {
	_vehicle = _this;
	_target = vehget(target);
	_target_marker_name = "tu95_target_marker";
	_launcher_marker_name = "tu95_launcher_marker_name";
	deleteMarkerLocal _target_marker_name;
	deleteMarkerLocal _launcher_marker_name;

	_lpos = getPosASL (_vehicle);
	ctrlSetText [tu95_status_IDC, ((localize "STR_RHS_ss21_status_position")+" . . . "+(localize "STR_RHS_ss21_status_done"))];
	_marker_vehicle = createMarkerLocal [_launcher_marker_name, _lpos];
	_marker_vehicle setMarkerShapeLocal "ICON";
	_marker_vehicle setMarkerTypeLocal "o_art";
	ctrlSetText [tu95_vehicle_x_IDC, str round(_lpos select 0)];
	ctrlSetText [tu95_vehicle_y_IDC, str round(_lpos select 1)];
	ctrlSetText [tu95_vehicle_z_IDC, str round(_lpos select 2)];

	if vehget(target_designated) then {
		_marker_target = createMarkerLocal [_target_marker_name, _target];
		_marker_target setMarkerShapeLocal "ICON";
		_marker_target setMarkerTypeLocal "mil_destroy";
		_marker_target setMarkerTextLocal format ["%1, %2",round(_target select 0),round(_target select 1)];
		ctrlSetText [tu95_target_x_IDC, str round(_target select 0)];
		ctrlSetText [tu95_target_y_IDC, str round(_target select 1)];
		ctrlSetText [tu95_target_z_IDC, str round(_target select 2)];

		_dirtotarget = (_vehicle getRelDir _target);
		if(_dirtotarget > 180)then{_dirtotarget = _dirtotarget - 360};

		ctrlSetText [tu95_rel_dir_IDC, str round(_dirtotarget)];
		ctrlSetText [tu95_rel_dist_IDC, str round(_target distance _lpos)];
		ctrlSetText [tu95_rel_elev_IDC, str round((_target select 2)-(_lpos select 2))];
	};
};

_update_coords = {
	_vehicle = _this;
	_target_marker_name = "tu95_target_marker";
	_launcher_marker_name = "tu95_launcher_marker_name";
	while{dialog}do{
		_lpos = getPosASL (_vehicle);
		_launcher_marker_name setMarkerPos _lpos;
		ctrlSetText [tu95_vehicle_x_IDC, str round(_lpos select 0)];
		ctrlSetText [tu95_vehicle_y_IDC, str round(_lpos select 1)];
		ctrlSetText [tu95_vehicle_z_IDC, str round(_lpos select 2)];

		if vehget(target_designated) then {
			_target = vehget(target);
			_dirtotarget = (_vehicle getRelDir _target);
			if(_dirtotarget > 180)then{_dirtotarget = _dirtotarget - 360};

			ctrlSetText [tu95_rel_dir_IDC, str round(_dirtotarget)];
			ctrlSetText [tu95_rel_dist_IDC, str round(_target distance _lpos)];
			ctrlSetText [tu95_rel_elev_IDC, str round((_target select 2)-(_lpos select 2))];
		};
		sleep 0.5;
	};
};

_set_status = {
	_string = _this select 0;
	_done = _this select 1;
	_isDisplay = !isNull(findDisplay tu95_main_IDD);
	_loc_string = (localize _string);
	if _done then {
		_loc_string = _loc_string + " . . . " + (localize "STR_RHS_ss21_status_done");
	};
	if _isDisplay then {
		ctrlSetText [tu95_status_IDC,_loc_string];
	};
};

switch _mode do {
	case 0: {//onLoad
			waitUntil {!isNull (findDisplay tu95_main_IDD)};
			_result = _vehicle call _check_buttons;
			_vehicle call _fill_coords;
			if (vehget(inprogress)) exitWith {[] call _disable_buttons;};
			ctrlSetText [tu95_status_IDC, localize "STR_RHS_ss21_status_position"];
			_vehicle call _update_coords;
			sleep 1;
			switch true do {
				case isNil{(magazines _vehicle) select 0} : {ctrlSetText [tu95_status_IDC, (localize "STR_RHS_ss21_no_ammo")];};
				case (!vehget(target_designated)) : {ctrlSetText [tu95_status_IDC, (localize "STR_RHS_ss21_select_target")];};
				case (vehget(target_designated)&&!(_result select 0)) : {ctrlSetText [tu95_status_IDC, (localize "STR_RHS_tu95_status_ang_error")];};
				case (vehget(target_designated)&&!(_result select 1)) : {ctrlSetText [tu95_status_IDC, (localize "STR_RHS_ss21_status_dist_error")];};
				case (vehget(target_designated)&&!(_result select 2)) : {ctrlSetText [tu95_status_IDC, (localize "STR_RHS_ss21_status_water_error")];};
				default {ctrlSetText [tu95_status_IDC, (localize "STR_RHS_ss21_ready")]};
			};
		};
	case 1: {//onUnLoad
			onMapSingleClick '';
			deleteMarkerLocal _target_marker_name;
			deleteMarkerLocal _launcher_marker_name;
		};
	case 4: {//bay close
			[] call _disable_buttons;
			["STR_RHS_ss21_status_bay_close",false] call _set_status;
			[0,0,_vehicle] call rhs_fnc_tu95_anim;
			["STR_RHS_ss21_status_bay_close",true] call _set_status;
			_vehicle call _check_buttons;
		};
	case 5: {//bay open
			[] call _disable_buttons;
			["STR_RHS_ss21_status_bay_open",false] call _set_status;
			[0,1,_vehicle] call rhs_fnc_tu95_anim;
			["STR_RHS_ss21_status_bay_open",true] call _set_status;
			_vehicle call _check_buttons;
		};
	case 6: {//listbox with magazines changed
			_bay_open = vehget(bay_open);
			if(_bay_open)then{
				_wantedAmmo = lbText [tu95_ammo_IDC,_this select 1];
				{
					private _selectedAmmo = format["%1: %2",_foreachIndex + 1 ,getText (configFile >> "cfgMagazines" >> _x >> "displayName")];
					if(_selectedAmmo isEqualTo _wantedAmmo)then{
						if(_vehicle ammoOnPylon (_foreachIndex + 1)> 0)then{ 
							//_vehicle loadMagazine [[4],currentWeapon _vehicle,_x];
							//systemChat format["%1 %2",_foreachIndex,_x];
						};
					};
				}foreach (GetPylonMagazines _vehicle);
			}else{lbSetCurSel [tu95_ammo_IDC,0];};
		};
	case 10: {//set target position [ASL]
			onMapSingleClick {[11,ATLToASL _pos] spawn rhs_fnc_tu95_dialog_control;onMapSingleClick "";true;};
		};
	case 11: {//set target position - onMapSingleClick
			_target = _this select 1; // target position
			vehset(target,_target);
			vehset(target_designated,true);
			ctrlSetText [tu95_status_IDC, (localize "STR_RHS_ss21_status_coord_loaded")];
			_vehicle call _fill_coords;
			if (vehget(inprogress)) exitWith {[] call _disable_buttons;};
			_result = (_vehicle call _check_buttons);
			sleep 3;
			if !(_result select 0) exitWith {
				ctrlSetText [tu95_status_IDC, (localize "STR_RHS_tu95_status_ang_error")];
				vehset(target_designated_valid,false);
				sleep 3;
			};
			if !(_result select 1) exitWith {
				ctrlSetText [tu95_status_IDC, (localize "STR_RHS_ss21_status_dist_error")];
				vehset(target_designated_valid,false);
				sleep 3;
			};
			vehset(target_designated_valid,true);
		};
	case 12: {//launch

			_result = (_vehicle call _check_buttons);
			if !(_result select 0) exitWith {
				ctrlSetText [tu95_status_IDC, (localize "STR_RHS_tu95_status_ang_error")];
				vehset(target_designated_valid,false);
				sleep 3;
			};
			if !(_result select 1) exitWith {
				ctrlSetText [tu95_status_IDC, (localize "STR_RHS_ss21_status_dist_error")];
				vehset(target_designated_valid,false);
				sleep 3;
			};

			if ((_vehicle ammo _weapon) > 0) then {
				//_vehicle selectWeapon _weapon;
				sleep 0.1;
				(gunner _vehicle) forceWeaponFire [_weapon,_weapon];
				vehset(target_designated,false);
				sleep .1;

				private _ammo = 0;
				for "_i" from 1 to 6 do {_ammo = _ammo + (_vehicle ammoOnPylon _i)};
				ctrlSetText [tu95_ammo_count_IDC, format["%1",_ammo]];
				(_vehicle call _check_buttons);
			};
		};
	default {};
};