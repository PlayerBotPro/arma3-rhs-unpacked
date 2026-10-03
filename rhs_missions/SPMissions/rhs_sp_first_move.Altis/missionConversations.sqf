//**************
//Main
//**************

case "Beginning" : {
	
	Sleep 5;
	
	CPT vehicleRadio "radio1"; 
	
	Sleep 6;
	
	PY vehicleRadio "radio2"; 
	
	Sleep 4;
	
	CPT vehicleRadio "radio3"; 
	
	Sleep 5;
	
	CPT vehicleRadio "radio4"; 
	
	Sleep 5;
	
	PY vehicleRadio "radio5"; 
	
	Sleep 5;
	
	CPT vehicleRadio "radio6"; 
	
	Sleep 5;
	
	PY vehicleRadio "radio7"; 
	
	Sleep 5;
	
	CPT vehicleRadio "radio8"; 
	
	Sleep 20;
	
	Golf1 vehicleRadio "radio9";

};

case "Meeting" : {
	
	E2 say "voice1"; 
	
	Sleep 5;
	
	PY say "voice2"; 
	
	Sleep 5;
	
	PY say "voice3"; 
	
	Sleep 5;
	
	PY say "voice4"; 
	
	Sleep 4;
	
	E2 say "voice5"; 
	
	Sleep 6;
	
	PY say "voice6"; 

};

case "Radiolink" : {
	
	Sleep 5;
	
	PY sideRadio "radio10"; 
	
	Sleep 6;
	
	Zeus sideRadio "radio11"; 

};

case "Patrol" : {
	
	PY groupRadio "radio12"; 
	
	Sleep 6;
	
	Zeus sideRadio "radio13";  
	
	Sleep 6;
	
	PY sideRadio "radio14"; 

};

case "Warehouse" : {
	
	PY sideRadio "radio15"; 
	
	Sleep 6;
	
	PY sideRadio "radio16"; 

};

case "WarehouseReport" : {
	
	PY sideRadio "radio18"; 
	
	Sleep 6;
	
	PY sideRadio "radio19"; 

};

case "Assault" : {
	
	B1 sideRadio "radio20"; 
	
	Sleep 6;
	
	Zeus sideRadio "radio21"; 
	
	Sleep 6;
	
	PY sideRadio "radio22"; 
	
	Sleep 6;
	
	Zeus sideRadio "radio23"; 
	
	Sleep 6;
	
	PY sideRadio "radio24"; 
	
	Sleep 6;

};

case "AssaultReport" : {
	
	PY sideRadio "radio25"; 
	
	Sleep 6;
	
	Zeus sideRadio "radio26"; 

};

case "End" : {
	
	PY sideRadio "Radio27";
	
	Sleep 5;
	
	Zeus sideRadio "Radio28";
	
};