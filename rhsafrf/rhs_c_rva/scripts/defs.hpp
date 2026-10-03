#define __quoted(str) #str
#define __uiGet(name) (uiNamespace getVariable __quoted(name))
#define __uiSet(name,value) uiNamespace setVariable [__quoted(name),value]

#define ss21_get(name) (RHS_SS21_logic getVariable __quoted(name))
#define ss21_set(name,value) RHS_SS21_logic setVariable [__quoted(name),value,true]

#define vehget(name) (_tochka getVariable [__quoted(name),false])
#define vehset(name,value) _tochka setVariable [__quoted(name),value,true]

#define ss21_main_IDD 61461

#define ss21_map_IDC (ss21_main_IDD + 1)
#define ss21_status_IDC (ss21_main_IDD + 2)
#define ss21_target_x_IDC (ss21_main_IDD + 3)
#define ss21_target_y_IDC (ss21_main_IDD + 4)
#define ss21_target_z_IDC (ss21_main_IDD + 5)
#define ss21_tochka_x_IDC (ss21_main_IDD + 6)
#define ss21_tochka_y_IDC (ss21_main_IDD + 7)
#define ss21_tochka_z_IDC (ss21_main_IDD + 8)
#define ss21_rel_dir_IDC (ss21_main_IDD + 9)
#define ss21_rel_dist_IDC (ss21_main_IDD + 10)
#define ss21_rel_elev_IDC (ss21_main_IDD + 11)
#define ss21_stable_up_btn_IDC (ss21_main_IDD + 12)
#define ss21_stable_down_btn_IDC (ss21_main_IDD + 13)
#define ss21_bay_open_btn_IDC (ss21_main_IDD + 14)
#define ss21_bay_close_btn_IDC (ss21_main_IDD + 15)
#define ss21_pylon_down_btn_IDC (ss21_main_IDD + 16)
#define ss21_pylon_up_btn_IDC (ss21_main_IDD + 17)
#define ss21_firing_position_btn_IDC (ss21_main_IDD + 18)
#define ss21_launch_btn_IDC (ss21_main_IDD + 19)
#define ss21_running_position_btn_IDC (ss21_main_IDD + 20)



