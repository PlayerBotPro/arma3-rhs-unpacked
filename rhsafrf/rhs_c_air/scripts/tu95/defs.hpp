#define __quoted(str) #str
#define __uiGet(name) (uiNamespace getVariable __quoted(name))
#define __uiSet(name,value) uiNamespace setVariable [__quoted(name),value]

#define tu95_get(name) (RHS_tu95_logic getVariable __quoted(name))
#define tu95_set(name,value) RHS_tu95_logic setVariable [__quoted(name),value,true]

#define vehget(name) (_vehicle getVariable [__quoted(name),false])
#define vehset(name,value) _vehicle setVariable [__quoted(name),value,true]

#define tu95_main_IDD 61461

#define tu95_map_IDC (tu95_main_IDD + 1)
#define tu95_status_IDC (tu95_main_IDD + 2)
#define tu95_target_x_IDC (tu95_main_IDD + 3)
#define tu95_target_y_IDC (tu95_main_IDD + 4)
#define tu95_target_z_IDC (tu95_main_IDD + 5)
#define tu95_vehicle_x_IDC (tu95_main_IDD + 6)
#define tu95_vehicle_y_IDC (tu95_main_IDD + 7)
#define tu95_vehicle_z_IDC (tu95_main_IDD + 8)
#define tu95_rel_dir_IDC (tu95_main_IDD + 9)
#define tu95_rel_dist_IDC (tu95_main_IDD + 10)
#define tu95_rel_elev_IDC (tu95_main_IDD + 11)
#define tu95_ammo_IDC (tu95_main_IDD + 12)
#define tu95_ammo_count_IDC (tu95_main_IDD + 13)
#define tu95_bay_open_btn_IDC (tu95_main_IDD + 14)
#define tu95_bay_close_btn_IDC (tu95_main_IDD + 15)
#define tu95_pylon_down_btn_IDC (tu95_main_IDD + 16)
#define tu95_pylon_up_btn_IDC (tu95_main_IDD + 17)
#define tu95_firing_position_btn_IDC (tu95_main_IDD + 18)
#define tu95_launch_btn_IDC (tu95_main_IDD + 19)
#define tu95_running_position_btn_IDC (tu95_main_IDD + 20)



