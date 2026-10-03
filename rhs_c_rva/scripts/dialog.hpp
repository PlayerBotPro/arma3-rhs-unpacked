#include "defs.hpp"
#include "defs_ui.hpp"



class RscMapControl;
class RscShortcutButton;
class RscButton;
class RscPicture;
class RscText;
class RscListBox;
class RscEdit;

class ss21_main_dialog
{
	idd = ss21_main_IDD;
	name = "ss21_main_dialog";
	movingEnable = false;

	onLoad = "[0] spawn rhs_fnc_ss21_dialog_control";
	onUnload = "[1] call rhs_fnc_ss21_dialog_control";

	controlsBackground[] = {ss21_backgroundCover,ss21_background};
	objects[] = {};
	controls[] = {
					ss21_map,
					ss21_label,
					ss21_status,
					ss21_coord_control_group,
					ss21_btn_control_group
				};
	/////////////
	#include "defs_base_control.hpp"
	/////////////
	class ss21_backgroundCover : RHS_ss21_text {
		h = "SafeZoneH";
		w = "SafeZoneW";
		x = "SafeZoneX";
		y = "SafeZoneY";
		colorBackground[] = {0, 0, 0, 1};
		text = "";
	};

	class ss21_background
	{
		idc = -1;
		type = CT_STATIC;
		style = ST_PICTURE;
		x = safezoneX-border_offsetX; w = column_weight*3 + border_offsetX*4;
		y = 0; h = display_height+border_offsetY*2+btn_height*4;
		colorText[] = {1, 1, 1, 1};
		colorBackground[] = {0,0,0,0};
			text = "#(argb,8,8,3)color(0,0,0,1)";
		font = "PuristaMedium";
		sizeEx = 0.032;
	};

	class ss21_label : RHS_ss21_text{
		style = ST_CENTER;
		x = safezoneX;
		w = display_weight - column_div;
		y = 0.05;
		h = 0.05;
		sizeEx = 0.05;
		text = $STR_RHS_ss21_label;
	};

	//mini-map in display
	class ss21_map : RHS_ss21_map {
		idc = ss21_map_IDC;
		x = safezoneX;
		w = column_weight*2 - column_div;
		y = safezoneY + offset_top;
		h = display_height - (safezoneY + offset_top*2) + str_height;
	};

	class ss21_status : RHS_ss21_text_border{
		idc = ss21_status_IDC;
		x = safezoneX;
		w = display_weight - column_div;
		y = display_height-safezoneY- offset_bottom;
		text = "--";
	};

	class ss21_coord_control_group : RHS_ss21_control_group {
		x = 0.1;
		w = 1;
		y = safezoneY+0.025;
		h = str_height*5;
		class Controls {
			class ss21_coord_desc : RHS_ss21_text{
				style = ST_RIGHT;
				x = 0;
				w = coord_weight - column_div;
				y = 0;
				text = $STR_RHS_ss21_coord_desc;
			};
			class ss21_latitude_desc : RHS_ss21_text{
				style = ST_RIGHT;
				x = 0;
				w = coord_weight - column_div;
				y = str_height;
				text = $STR_RHS_ss21_latitude_desc;
			};
			class ss21_longitude_desc : RHS_ss21_text{
				style = ST_RIGHT;
				x = 0;
				w = coord_weight - column_div;
				y = str_height*2;
				text = $STR_RHS_ss21_longitude_desc;
			};
			class ss21_elevation_desc : RHS_ss21_text{
				style = ST_RIGHT;
				x = 0;
				w = coord_weight - column_div;
				y = str_height*3;
				h = str_height;
				text = $STR_RHS_ss21_elevation_desc;
			};
			//target position
			class ss21_target_desc : RHS_ss21_text{
				x = coord_weight;
				w = coord_weight - column_div;
				y = 0;
				text = $STR_RHS_ss21_target_desc;
			};
			class ss21_target_x : RHS_ss21_text_border{
				idc = ss21_target_x_IDC;
				x = coord_weight;
				w = coord_weight - column_div;
				y = str_height*1;
				text = "--";
			};
			class ss21_target_y : RHS_ss21_text_border{
				idc = ss21_target_y_IDC;
				x = coord_weight;
				w = coord_weight - column_div;
				y = str_height*2;
				text = "--";
			};
			class ss21_target_z : RHS_ss21_text_border{
				idc = ss21_target_z_IDC;
				x = coord_weight;
				w = coord_weight - column_div;
				y = str_height*3;
				text = "--";
			};

			//ss21_position
			class ss21_tochka_desc : RHS_ss21_text{
				x = coord_weight*2;
				w = coord_weight - column_div;
				y = 0;
				text = $STR_RHS_ss21_tochka_desc;
			};
			class ss21_tochka_x : RHS_ss21_text_border{
				idc = ss21_tochka_x_IDC;
				x = coord_weight*2;
				w = coord_weight - column_div;
				y = str_height*1;
				text = "--";
			};
			class ss21_tochka_y : RHS_ss21_text_border{
				idc = ss21_tochka_y_IDC;
				x = coord_weight*2;
				w = coord_weight - column_div;
				y = str_height*2;
				text = "--";
			};
			class ss21_tochka_z : RHS_ss21_text_border{
				idc = ss21_tochka_z_IDC;
				x = coord_weight*2;
				w = coord_weight - column_div;
				y = str_height*3;
				text = "--";
			};
			//relative position
			class ss21_rel_desc : RHS_ss21_text{
				style = ST_CENTER;
				x = coord_weight*4.3 - 0.03;
				w = coord_weight - column_div + 0.03;
				y = 0;
				text = $STR_RHS_ss21_rel_desc;
			};
			class ss21_dir_desc : RHS_ss21_text{
				style = ST_RIGHT;
				x = coord_weight*3.3;
				w = coord_weight - column_div;
				y = str_height;
				text = $STR_RHS_ss21_dir_desc;
			};
			class ss21_dist_desc : RHS_ss21_text{
				style = ST_RIGHT;
				x = coord_weight*3.3;
				w = coord_weight - column_div;
				y = str_height*2;
				text = $STR_RHS_ss21_dist_desc;
			};
			class ss21_elevation_rel_desc : RHS_ss21_text{
				style = ST_RIGHT;
				x = coord_weight*3.3;
				w = coord_weight - column_div;
				y = str_height*3;
				text = $STR_RHS_ss21_elevation_desc;
			};
			class ss21_rel_dir : RHS_ss21_text_border{
				idc = ss21_rel_dir_IDC;
				x = coord_weight*4.3;
				w = coord_weight - column_div;
				y = str_height*1;
				text = "--";
			};
			class ss21_rel_dist : RHS_ss21_text_border{
				idc = ss21_rel_dist_IDC;
				x = coord_weight*4.3;
				w = coord_weight - column_div;
				y = str_height*2;
				text = "--";
			};
			class ss21_rel_elev : RHS_ss21_text_border{
				idc = ss21_rel_elev_IDC;
				x = coord_weight*4.3;
				w = coord_weight - column_div;
				y = str_height*3;
				text = "--";
			};
		};
	};//end RHS_ss21_coord_control_group;

	class ss21_btn_control_group : RHS_ss21_control_group {
		x = safezoneX + column_weight*2;
		w = column_weight;
		y = safezoneY + offset_top - 0.05;
		h = display_height;
		class Controls {
			//stables, bay, pylon
			//stables
			class ss21_stable_desc : RHS_ss21_text{
				style = ST_CENTER;
				x = 0;
				w = column_weight ;
				y = btn_height*1 + 0.032;
				text = $STR_RHS_ss21_stable_desc;
			};
			class ss21_stable_up_btn : RHS_ss21_btn
			{
				idc = ss21_stable_up_btn_IDC;
				x = 0;
				w = column_weight/2 ;
				y = btn_height*2;
				text = $STR_RHS_ss21_stable_up_btn;
				action = "[2] spawn rhs_fnc_ss21_dialog_control";
			};
			class ss21_stable_down_btn : RHS_ss21_btn
			{
				idc = ss21_stable_down_btn_IDC;
				x = column_weight/2;
				w = column_weight/2 ;
				y = btn_height*2;
				text = $STR_RHS_ss21_stable_down_btn;
				action = "[3] spawn rhs_fnc_ss21_dialog_control";
			};
			//bay
			class ss21_bay_desc : RHS_ss21_text{
				style = ST_CENTER;
				x = 0;
				w = column_weight ;
				y = btn_height*3 + 0.032;
				text = $STR_RHS_ss21_bay_desc;
			};
			class ss21_bay_close_btn : RHS_ss21_btn
			{
				idc = ss21_bay_close_btn_IDC;
				x = 0;
				w = column_weight/2 ;
				y = btn_height*4;
				text = $STR_RHS_ss21_bay_close_btn;
				action = "[4] spawn rhs_fnc_ss21_dialog_control";
			};
			class ss21_bay_open_btn : RHS_ss21_btn
			{
				idc = ss21_bay_open_btn_IDC;
				x = column_weight/2;
				w = column_weight/2 ;
				y = btn_height*4;
				text = $STR_RHS_ss21_bay_open_btn;
				action = "[5] spawn rhs_fnc_ss21_dialog_control";
			};
			//pylon
			class ss21_pylon_desc : RHS_ss21_text{
				style = ST_CENTER;
				x = 0;
				w = column_weight ;
				y = btn_height*5 + 0.032;
				text = $STR_RHS_ss21_pylon_desc;
			};
			class ss21_pylon_down_btn : RHS_ss21_btn
			{
				idc = ss21_pylon_down_btn_IDC;
				x = 0;
				w = column_weight/2 ;
				y = btn_height*6;
				text = $STR_RHS_ss21_pylon_down_btn;
				action = "[6] spawn rhs_fnc_ss21_dialog_control";
			};
			class ss21_pylon_up_btn : RHS_ss21_btn
			{
				idc = ss21_pylon_up_btn_IDC;
				x = column_weight/2;
				w = column_weight/2 ;
				y = btn_height*6;
				text = $STR_RHS_ss21_pylon_up_btn;
				action = "[7] spawn rhs_fnc_ss21_dialog_control";
			};
			//
			class ss21_designate_target_btn : RHS_ss21_btn
			{
				x = 0;
				w = column_weight;
				y = 0.35;
				text = $STR_RHS_ss21_designate_target_btn;
				action = "[10] call rhs_fnc_ss21_dialog_control";
			};
			class ss21_firing_position_btn : RHS_ss21_btn
			{
				idc = ss21_firing_position_btn_IDC;
				x = 0;
				w = column_weight ;
				y = 0.35+btn_height*1;
				text = $STR_RHS_ss21_firing_position_btn;
				action = "[8] spawn rhs_fnc_ss21_dialog_control";
			};
			class ss21_launch_btn : RHS_ss21_btn
			{
				idc = ss21_launch_btn_IDC;
				x = 0;
				w = column_weight;
				y = 0.35+btn_height*2;
				text = $STR_RHS_ss21_launch_btn;
				action = "[12] spawn rhs_fnc_ss21_dialog_control";
			};
			class ss21_running_position_btn : RHS_ss21_btn
			{
				idc = ss21_running_position_btn_IDC;
				x = 0;
				w = column_weight;
				y = 0.35+btn_height*3;
				text = $STR_RHS_ss21_running_position_btn;
				action = "[9] spawn rhs_fnc_ss21_dialog_control";
			};
			class ss21_close_btn : RHS_ss21_btn
			{
				x = 0;
				w = column_weight;
				y = 0.35+btn_height*4;
				text = $STR_RHS_ss21_close_btn;
				action = "closeDialog 0";
			};
		};
	};//end ss21_btn_control_group
};