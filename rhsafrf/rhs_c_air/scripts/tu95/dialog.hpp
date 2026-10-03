#include "defs.hpp"
#include "defs_ui.hpp"



class RscMapControl;
class RscShortcutButton;
class RscButton;
class RscPicture;
class RscCombo;
class RscText;
class RscListBox;
class RscEdit;

class tu95_main_dialog
{
	idd = tu95_main_IDD;
	name = "tu95_main_dialog";
	movingEnable = false;

	onLoad = "[0] spawn rhs_fnc_tu95_dialog_control";
	onUnload = "[1] call rhs_fnc_tu95_dialog_control";

	controlsBackground[] = {tu95_backgroundCover,tu95_background};
	objects[] = {};
	controls[] = {
					tu95_map,
					tu95_label,
					tu95_status,
					tu95_coord_control_group,
					tu95_btn_control_group
				};
	/////////////
	#include "defs_base_control.hpp"
	/////////////
	class tu95_backgroundCover : RHS_tu95_text {
		h = "SafeZoneH";
		w = "SafeZoneW";
		x = "SafeZoneX";
		y = "SafeZoneY";
		colorBackground[] = {0, 0, 0, 1};
		text = "";
	};
//	class tu95_backgroundImg : RHS_tu95_text {
	//	h = 1.3; // h = "0.86*SafeZoneW"
	//	w = 1.3; //w = "0.64*SafeZoneW";
//		x = "0.354-((0.638*SafeZoneW)/2)";
	//	y = "0.487-((0.86*SafeZoneW)/2)"; //86
	//	style = ST_PICTURE;
	//	colorBackground[] = {1, 1, 1, 0.0};
	//	colorText[] = {1, 1, 1, 1};
	//	text = "\rhs_tu95\data\veh\interior\rhs_tu95dialog_co.paa";
	//};
	class tu95_background
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

	class tu95_label : RHS_tu95_text{
		style = ST_CENTER;
		x = safezoneX;
		w = display_weight - column_div;
		y = 0.05;
		h = 0.05;
		sizeEx = 0.05;
		text = "Tu-95MS-6 Launch Platform";
		//text = $STR_RHS_ss21_label;
	};

	//mini-map in display
	class tu95_map : RHS_tu95_map {
		idc = tu95_map_IDC;
		x = safezoneX;
		w = column_weight*2 - column_div;
		y = safezoneY + offset_top;
		h = display_height - (safezoneY + offset_top*2) + str_height;
	};

	class tu95_status : RHS_tu95_text_border{
		idc = tu95_status_IDC;
		x = safezoneX;
		w = display_weight - column_div;
		y = display_height-safezoneY- offset_bottom;
		text = "--";
	};

	class tu95_coord_control_group : RHS_tu95_control_group {
		x = 0.1;
		w = 1;
		y = safezoneY+0.025;
		h = str_height*5;
		class Controls {
			class tu95_coord_desc : RHS_tu95_text{
				style = ST_RIGHT;
				x = 0;
				w = coord_weight - column_div;
				y = 0;
				text = $STR_RHS_ss21_coord_desc;
			};
			class tu95_latitude_desc : RHS_tu95_text{
				style = ST_RIGHT;
				x = 0;
				w = coord_weight - column_div;
				y = str_height;
				text = $STR_RHS_ss21_latitude_desc;
			};
			class tu95_longitude_desc : RHS_tu95_text{
				style = ST_RIGHT;
				x = 0;
				w = coord_weight - column_div;
				y = str_height*2;
				text = $STR_RHS_ss21_longitude_desc;
			};
			class tu95_elevation_desc : RHS_tu95_text{
				style = ST_RIGHT;
				x = 0;
				w = coord_weight - column_div;
				y = str_height*3;
				h = str_height;
				text = $STR_RHS_ss21_elevation_desc;
			};
			//target position
			class tu95_target_desc : RHS_tu95_text{
				x = coord_weight;
				w = coord_weight - column_div;
				y = 0;
				text = $STR_RHS_ss21_target_desc;
			};
			class tu95_target_x : RHS_tu95_text_border{
				idc = tu95_target_x_IDC;
				x = coord_weight;
				w = coord_weight - column_div;
				y = str_height*1;
				text = "--";
			};
			class tu95_target_y : RHS_tu95_text_border{
				idc = tu95_target_y_IDC;
				x = coord_weight;
				w = coord_weight - column_div;
				y = str_height*2;
				text = "--";
			};
			class tu95_target_z : RHS_tu95_text_border{
				idc = tu95_target_z_IDC;
				x = coord_weight;
				w = coord_weight - column_div;
				y = str_height*3;
				text = "--";
			};

			//tu95_position
			class tu95_tochka_desc : RHS_tu95_text{
				x = coord_weight*2;
				w = coord_weight - column_div;
				y = 0;
				text = $STR_RHS_ss21_tochka_desc;
			};
			class tu95_tochka_x : RHS_tu95_text_border{
				idc = tu95_vehicle_x_IDC;
				x = coord_weight*2;
				w = coord_weight - column_div;
				y = str_height*1;
				text = "--";
			};
			class tu95_tochka_y : RHS_tu95_text_border{
				idc = tu95_vehicle_y_IDC;
				x = coord_weight*2;
				w = coord_weight - column_div;
				y = str_height*2;
				text = "--";
			};
			class tu95_tochka_z : RHS_tu95_text_border{
				idc = tu95_vehicle_z_IDC;
				x = coord_weight*2;
				w = coord_weight - column_div;
				y = str_height*3;
				text = "--";
			};
			//relative position
			class tu95_rel_desc : RHS_tu95_text{
				style = ST_CENTER;
				x = coord_weight*4.3 - 0.03;
				w = coord_weight - column_div + 0.03;
				y = 0;
				text = $STR_RHS_ss21_rel_desc;
			};
			class tu95_dir_desc : RHS_tu95_text{
				style = ST_RIGHT;
				x = coord_weight*3.3;
				w = coord_weight - column_div;
				y = str_height;
				text = $STR_RHS_ss21_dir_desc;
			};
			class tu95_dist_desc : RHS_tu95_text{
				style = ST_RIGHT;
				x = coord_weight*3.3;
				w = coord_weight - column_div;
				y = str_height*2;
				text = $STR_RHS_ss21_dist_desc;
			};
			class tu95_elevation_rel_desc : RHS_tu95_text{
				style = ST_RIGHT;
				x = coord_weight*3.3;
				w = coord_weight - column_div;
				y = str_height*3;
				text = $STR_RHS_ss21_elevation_desc;
			};
			class tu95_rel_dir : RHS_tu95_text_border{
				idc = tu95_rel_dir_IDC;
				x = coord_weight*4.3;
				w = coord_weight - column_div;
				y = str_height*1;
				text = "--";
			};
			class tu95_rel_dist : RHS_tu95_text_border{
				idc = tu95_rel_dist_IDC;
				x = coord_weight*4.3;
				w = coord_weight - column_div;
				y = str_height*2;
				text = "--";
			};
			class tu95_rel_elev : RHS_tu95_text_border{
				idc = tu95_rel_elev_IDC;
				x = coord_weight*4.3;
				w = coord_weight - column_div;
				y = str_height*3;
				text = "--";
			};
		};
	};//end RHS_tu95_coord_control_group;

	class tu95_btn_control_group : RHS_tu95_control_group {
		x = safezoneX + column_weight*2;
		w = column_weight;
		y = safezoneY + offset_top - 0.05;
		h = display_height;
		class Controls {
			class tu95_ammo_desc : RHS_tu95_text{
				style = ST_CENTER;
				x = 0;
				w = column_weight ;
				y = btn_height*1 + 0.032;
				text = "Missile type";
			};
			class tu95_ammo_text : RscCombo{
				idc = tu95_ammo_IDC;
				style = ST_CENTER;
				x = 0;
				w = column_weight ;
				y = btn_height*2 + 0.032;
				text = "Kh-55Sh HE";
				font = "PuristaSemibold";
				onLBSelChanged = "[6,_this select 1] spawn rhs_fnc_tu95_dialog_control";
			};
			class tu95_ammo_count_desc : RHS_tu95_text{
				style = ST_CENTER;
				x = 0;
				w = column_weight ;
				y = btn_height*3 + 0.032;
				text = "Total ammo count";
			};
			class tu95_ammo_count_text : RHS_tu95_text{
				idc = tu95_ammo_count_IDC;
				style = ST_CENTER;
				x = 0;
				w = column_weight ;
				y = btn_height*4 + 0.032;
				text = "6";
				font = "PuristaSemibold";
			};
			//bay
			class tu95_bay_desc : RHS_tu95_text{
				style = ST_CENTER;
				x = 0;
				w = column_weight ;
				y = btn_height*7 + 0.032;
				text = $STR_RHS_ss21_bay_desc;
			};
			class tu95_bay_close_btn : RHS_tu95_btn
			{
				idc = tu95_bay_close_btn_IDC;
				x = 0;
				w = column_weight/2 ;
				y = btn_height*8;
				text = $STR_RHS_ss21_bay_close_btn;
				action = "[4] spawn rhs_fnc_tu95_dialog_control";
			};
			class tu95_bay_open_btn : RHS_tu95_btn
			{
				idc = tu95_bay_open_btn_IDC;
				x = column_weight/2;
				w = column_weight/2 ;
				y = btn_height*8;
				text = $STR_RHS_ss21_bay_open_btn;
				action = "[5] spawn rhs_fnc_tu95_dialog_control";
			};
			//
			class tu95_designate_target_btn : RHS_tu95_btn
			{
				x = 0;
				w = column_weight;
				y = 0.35+btn_height*1;
				text = $STR_RHS_ss21_designate_target_btn;
				action = "[10] call rhs_fnc_tu95_dialog_control";
			};
			class tu95_launch_btn : RHS_tu95_btn
			{
				idc = tu95_launch_btn_IDC;
				x = 0;
				w = column_weight;
				y = 0.35+btn_height*2;
				text = $STR_RHS_ss21_launch_btn;
				action = "[12] spawn rhs_fnc_tu95_dialog_control";
			};
			class tu95_close_btn : RHS_tu95_btn
			{
				x = 0;
				w = column_weight;
				y = 0.35+btn_height*4;
				text = $STR_RHS_ss21_close_btn;
				action = "closeDialog 0";
			};
		};
	};//end tu95_btn_control_group
};