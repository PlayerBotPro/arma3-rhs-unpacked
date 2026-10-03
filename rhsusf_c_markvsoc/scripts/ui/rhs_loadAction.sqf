/*
	Mark V options menu init

	a: reyhard
*/
params["_t"];

switch(_t)do{
	// select  first position
	case 1: {
		// cannot select position during loading/unloading sequence
		if(rhs_markv_loading)exitWith{};


		rhs_sign_pos1 setObjectTexture [0,"#(argb,8,8,3)color(0,0.66,0.02,1)"];
		rhs_sign_pos2 setObjectTexture [0,"#(argb,8,8,3)color(0.99,0.9,0,1)"];
		if(rhs_markv_load_mode isEqualTo 0)then{
			if(isNull(rhs_markv_load getVariable ["rhs_boat_slot1",objNull]))then{
				rhs_selected_pos = 1;
			}else{
				rhs_selected_pos = 2;
			};
		}else{
			if(isNull(rhs_markv_load getVariable ["rhs_boat_slot2",objNull]))then{
				rhs_selected_pos = 1;
			}else{
				rhs_selected_pos = 2;
			};
		};

		if(rhs_markv_load_mode isEqualTo 1 and !(isNull rhs_markv_load_boat))then{
		}else{ctrlEnable [1600,true];};
	};
	// select second position
	case 2: {
		// cannot select position during loading/unloading sequence
		if(rhs_markv_loading)exitWith{};

		rhs_sign_pos2 setObjectTexture [0,"#(argb,8,8,3)color(0,0.66,0.02,1)"];
		rhs_sign_pos1 setObjectTexture [0,"#(argb,8,8,3)color(0.99,0.9,0,1)"];
		if(rhs_markv_load_mode isEqualTo 0)then{
			if(isNull(rhs_markv_load getVariable ["rhs_boat_slot3",objNull]))then{
				rhs_selected_pos = 3;
			}else{
				rhs_selected_pos = 4;
			};
		}else{
			if(isNull(rhs_markv_load getVariable ["rhs_boat_slot4",objNull]))then{
				rhs_selected_pos = 3;
			}else{
				rhs_selected_pos = 4;
			};
		};
		if(rhs_markv_load_mode isEqualTo 1 and !(isNull rhs_markv_load_boat))then{
		}else{ctrlEnable [1600,true];};
		if(rhs_markv_load_mode isEqualTo 1)then{
			if( (rhs_markv_load getVariable ["rhs_boat_slot5",objNull]) isKindOf "SDV_01_base_F")then{rhs_selected_pos=5;};
		};
		if(rhs_markv_load_boat isKindOf "SDV_01_base_F")then{rhs_selected_pos=5;};
	};

	// switch between load/unload mode
	case 3: {
		if(rhs_markv_load_mode isEqualTo 0)then{
			ctrlSetText [1601,"Switch to load mode"];
			ctrlSetText [1600,"Unload boat"];
			rhs_markv_load_mode = 1;
		}else{
			ctrlSetText [1601,"Switch to unload mode"];
			ctrlSetText [1600,"Load boat"];
			rhs_markv_load_mode = 0;
		};
		ctrlEnable [1600,false];
		rhs_sign_pos1 setObjectTexture [0,"#(argb,8,8,3)color(0.99,0.9,0,1)"];
		rhs_sign_pos2 setObjectTexture [0,"#(argb,8,8,3)color(0.99,0.9,0,1)"];
		{detach _x;_x setpos [0,0,100]}foreach [rhs_sign_boat,rhs_sign_pos1,rhs_sign_pos2];
	};
	// load/unload boat
	case 4: {
		if(rhs_selected_pos isEqualTo -1)exitWith{systemChat "No position selected!"};

		if(rhs_markv_load_mode isEqualTo 0)then{
			[rhs_markv_load,rhs_markv_load_boat,rhs_selected_pos] spawn rhsusf_fnc_markvsoc_loadBoat;

					if(isNull(rhs_markv_load getVariable ["rhs_boat_slot5",objNull]))then{
						if( isNull(rhs_markv_load getVariable ["rhs_boat_slot3",objNull]) && isNull(rhs_markv_load getVariable ["rhs_boat_slot2",objNull]) )then{
							rhs_sign_pos1 attachto [rhs_markv_load,[-0.2,-6,0.7]];
						}else{
							ctrlShow [2400,false];
							detach rhs_sign_pos1;
							rhs_sign_pos1 setpos [0,0,100];
						};
						if(isNull(rhs_markv_load getVariable ["rhs_boat_slot4",objNull]))then{
							rhs_sign_pos2 attachto [rhs_markv_load,[-0.2,-11,0]];
						}else{
							ctrlShow [2401,false];
							detach rhs_sign_pos2;
							rhs_sign_pos2 setpos [0,0,100];
						};
						if(rhs_selected_pos isEqualTo 4)then{
							ctrlShow [2401,false];
							detach rhs_sign_pos2;
							rhs_sign_pos2 setpos [0,0,100];
						};
					};
		}else{
			private _boat = rhs_markv_load getVariable [format["rhs_boat_slot%1",rhs_selected_pos],objNull];
			[rhs_markv_load,_boat,rhs_selected_pos] spawn rhsusf_fnc_markvsoc_loadBoat;
		};
		rhs_sign_pos1 setObjectTexture [0,"#(argb,8,8,3)color(0.99,0.9,0,1)"];
		rhs_sign_pos2 setObjectTexture [0,"#(argb,8,8,3)color(0.99,0.9,0,1)"];
		rhs_selected_pos = -1;
		ctrlEnable [1600,false];
	};
};