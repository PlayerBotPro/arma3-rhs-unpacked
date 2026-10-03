if(end1 or end2)then{
	if(alive officer AND end1)then{
		if( not([(units nikolaj)+[officer],baza] call RDS_ArrayCheck) )exitWith{hint localize "STR_Hint7"};
		[["end1",true],"RDS_Koniec"] call BIS_fnc_MP;
	}else{
		if(not([units nikolaj,baza] call RDS_ArrayCheck))exitWith{hint localize "STR_Hint8"};
		if(end2)then{[["end2",true],"RDS_Koniec"] call BIS_fnc_MP;}else{[["end4",false],"RDS_Koniec"] call BIS_fnc_MP;};
	};
}ELSE{hint localize "STR_Hint9"};
