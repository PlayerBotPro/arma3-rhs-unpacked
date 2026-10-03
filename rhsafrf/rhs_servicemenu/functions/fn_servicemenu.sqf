/*
	Author: Karel Moricky
    Modified: RHS Team
	
	Description:
	RHS Vehicle service menu
	

	Parameter(s):

		0: STRING - mode
		1: ANY - params (see below)

	Modes:
		"Open" - Open the Arsenal
			0 (Optional): BOOL - true to open full Arsenal, with all categories and items available (default: false)

		"Preload" - Preload item configs for Arsenal (without preloading, configs are parsed the first time Arsenal is opened)
			No params

		"AmmoboxInit" - Add virtual ammobox. Action to access the Arsenal will be added automatically on all clients.
			0: OBJECT - ammobox
			1 (Optional): BOOL - true to make all weapons and items in the game available in the box (default: false)
			2 (Optional): Condition for showing the Arsenal action (default: {true})
				      Passed arguments are the same as in addAction condition, i.e., _target - the box, _this - caller

		"AmmoboxExit" - Remove virtual ammobox
			0: OBJECT - ammobox


	Returns:
	NOTHING
*/

#include "\A3\ui_f\hpp\defineDIKCodes.inc"
#include "\A3\Ui_f\hpp\defineResinclDesign.inc"

#define FADE_DELAY	0.1

disableserialization;

_mode = [_this,0,"Open",[displaynull,""]] call bis_fnc_param;
_this = [_this,1,[]] call bis_fnc_param;
_fullArsenal = missionnamespace getvariable ["rhs_fnc_servicemenu_fullArsenal",false];

#define IDCS_LEFT\
	IDC_RSCDISPLAYARSENAL_TAB_WEAPON

#define IDCS_RIGHT\
	IDC_RSCDISPLAYARSENAL_TAB_ITEMOPTIC

#define IDCS [IDCS_LEFT,IDCS_RIGHT]

#define INITTYPES\
		_types = [];\
		_types set [IDC_RSCDISPLAYARSENAL_TAB_WEAPON,[]];\
		_types set [IDC_RSCDISPLAYARSENAL_TAB_ITEMOPTIC,[]];

#define CONDITION(LIST)	(_fullArsenal || {"%ALL" in LIST} || {{_item == _x} count LIST > 0})
#define ERROR if !(_item in _disabledItems) then {_disabledItems set [count _disabledItems,_item];};

switch _mode do {

	///////////////////////////////////////////////////////////////////////////////////////////
	case "Open": {
		if !(isnull (uinamespace getvariable ["rhs_fnc_servicemenu_cam",objnull])) exitwith {"Arsenal Viewer is already running" call bis_fnc_logFormat;};
		missionnamespace setvariable ["rhs_fnc_servicemenu_fullArsenal",[_this,0,false,[false]] call bis_fnc_param];

		with missionnamespace do {
			rhs_fnc_servicemenu_cargo = [_this,1,objnull,[objnull]] call bis_fnc_param;
			rhs_fnc_servicemenu_center = [_this,2,vehicle player,[vehicle player]] call bis_fnc_param;
		};
		with uinamespace do {
			_displayMission = [] call (uinamespace getvariable "bis_fnc_displayMission");
			if !(isnull finddisplay 312) then {_displayMission = finddisplay 312;};
			_displayMission createdisplay "RSCDISPLAYRHSSERVICEMENU";
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "Init": {
		["rhs_fnc_servicemenu"] call bis_fnc_startloadingscreen;
		_display = _this select 0;
		rhs_fnc_servicemenu_display = _display;
		rhs_fnc_servicemenu_mouse = [0,0];
		rhs_fnc_servicemenu_buttons = [[],[]];
		rhs_fnc_servicemenu_action = "";
		_center = (missionnamespace getvariable ["rhs_fnc_servicemenu_center",vehicle player]);
		cuttext ["","plain"];
		showcommandingmenu "";

		_display displayaddeventhandler ["mousebuttondown","with uinamespace do {['MouseButtonDown',_this] call rhs_fnc_servicemenu;};"];
		_display displayaddeventhandler ["mousebuttonup","with uinamespace do {['MouseButtonUp',_this] call rhs_fnc_servicemenu;};"];
		_display displayaddeventhandler ["keydown","with (uinamespace) do {['KeyDown',_this] call rhs_fnc_servicemenu;};"];

		_ctrlMouseArea = _display displayctrl IDC_RSCDISPLAYARSENAL_MOUSEAREA;
		_ctrlMouseArea ctrladdeventhandler ["mousemoving","with uinamespace do {['Mouse',_this] call rhs_fnc_servicemenu;};"];
		_ctrlMouseArea ctrladdeventhandler ["mouseholding","with uinamespace do {['Mouse',_this] call rhs_fnc_servicemenu;};"];
		_ctrlMouseArea ctrladdeventhandler ["mousebuttonclick","with uinamespace do {['TabDeselect',[ctrlparent (_this select 0),_this select 1]] call rhs_fnc_servicemenu;};"];
		_ctrlMouseArea ctrladdeventhandler ["mousezchanged","with uinamespace do {['MouseZChanged',_this] call rhs_fnc_servicemenu;};"];
		ctrlsetfocus _ctrlMouseArea;

		_ctrlMouseBlock = _display displayctrl IDC_RSCDISPLAYARSENAL_MOUSEBLOCK;
		_ctrlMouseBlock ctrlenable false;
		_ctrlMouseBlock ctrladdeventhandler ["setfocus",{_this spawn {disableserialization; (_this select 0) ctrlenable false; (_this select 0) ctrlenable true;};}];

		_ctrlMessage = _display displayctrl IDC_RSCDISPLAYARSENAL_MESSAGE;
		_ctrlMessage ctrlsetfade 1;
		_ctrlMessage ctrlcommit 0;

		_ctrlInfo = _display displayctrl IDC_RSCDISPLAYARSENAL_INFO_INFO;
		_ctrlInfo ctrlsetfade 1;
		_ctrlInfo ctrlcommit 0;

		INITTYPES
		//["Preload"] call rhs_fnc_servicemenu;
		//["ListAdd",[_display]] call rhs_fnc_servicemenu;
		//["ListSelectCurrent",[_display]] call rhs_fnc_servicemenu;

		//--- UI event handlers
		_ctrlButtonInterface = _display displayctrl IDC_RSCDISPLAYARSENAL_CONTROLSBAR_BUTTONINTERFACE;
		_ctrlButtonInterface ctrladdeventhandler ["buttonclick","with uinamespace do {['buttonInterface',[ctrlparent (_this select 0)]] call rhs_fnc_servicemenu;};"];

		_ctrlButtonRandom = _display displayctrl IDC_RSCDISPLAYARSENAL_CONTROLSBAR_BUTTONRANDOM;
		_ctrlButtonRandom ctrladdeventhandler ["buttonclick","with uinamespace do {['buttonRandom',[ctrlparent (_this select 0)]] call rhs_fnc_servicemenu;};"];

		_ctrlButtonSave = _display displayctrl IDC_RSCDISPLAYARSENAL_CONTROLSBAR_BUTTONSAVE;
		_ctrlButtonSave ctrladdeventhandler ["buttonclick","with uinamespace do {['buttonSave',[ctrlparent (_this select 0)]] call rhs_fnc_servicemenu;};"];

		_ctrlButtonLoad = _display displayctrl IDC_RSCDISPLAYARSENAL_CONTROLSBAR_BUTTONLOAD;
		_ctrlButtonLoad ctrladdeventhandler ["buttonclick","with uinamespace do {['buttonLoad',[ctrlparent (_this select 0)]] call rhs_fnc_servicemenu;};"];

		_ctrlButtonExport = _display displayctrl IDC_RSCDISPLAYARSENAL_CONTROLSBAR_BUTTONEXPORT;
		_ctrlButtonExport ctrladdeventhandler ["buttonclick","with uinamespace do {['buttonExport',[ctrlparent (_this select 0),'init']] call rhs_fnc_servicemenu;};"];
		_ctrlButtonExport ctrlenable !ismultiplayer;

		_ctrlButtonImport = _display displayctrl IDC_RSCDISPLAYARSENAL_CONTROLSBAR_BUTTONIMPORT;
		_ctrlButtonImport ctrladdeventhandler ["buttonclick","with uinamespace do {['buttonImport',[ctrlparent (_this select 0)]] call rhs_fnc_servicemenu;};"];

		_ctrlButtonOK = _display displayctrl IDC_RSCDISPLAYARSENAL_CONTROLSBAR_BUTTONOK;
		_ctrlButtonOK ctrladdeventhandler ["buttonclick","with uinamespace do {['buttonOK',[ctrlparent (_this select 0)]] call rhs_fnc_servicemenu;};"];

		_ctrlArrowLeft = _display displayctrl IDC_RSCDISPLAYARSENAL_ARROWLEFT;
		_ctrlArrowLeft ctrladdeventhandler ["buttonclick","with uinamespace do {['buttonCargo',[ctrlparent (_this select 0),-1]] call rhs_fnc_servicemenu;};"];

		_ctrlArrowRight = _display displayctrl IDC_RSCDISPLAYARSENAL_ARROWRIGHT;
		_ctrlArrowRight ctrladdeventhandler ["buttonclick","with uinamespace do {['buttonCargo',[ctrlparent (_this select 0),+1]] call rhs_fnc_servicemenu;};"];

		_ctrlTemplateButtonOK = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_BUTTONOK;
		_ctrlTemplateButtonOK ctrladdeventhandler ["buttonclick","with uinamespace do {['buttonTemplateOK',[ctrlparent (_this select 0)]] call rhs_fnc_servicemenu;};"];

		_ctrlTemplateButtonCancel = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_BUTTONCANCEL;
		_ctrlTemplateButtonCancel ctrladdeventhandler ["buttonclick","with uinamespace do {['buttonTemplateCancel',[ctrlparent (_this select 0)]] call rhs_fnc_servicemenu;};"];

		_ctrlTemplateButtonDelete = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_BUTTONDELETE;
		_ctrlTemplateButtonDelete ctrladdeventhandler ["buttonclick","with uinamespace do {['buttonTemplateDelete',[ctrlparent (_this select 0)]] call rhs_fnc_servicemenu;};"];

		_ctrlTemplateValue = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_VALUENAME;
		_ctrlTemplateValue ctrladdeventhandler ["lbselchanged","with uinamespace do {['templateSelChanged',[ctrlparent (_this select 0)]] call rhs_fnc_servicemenu;};"];
		_ctrlTemplateValue ctrladdeventhandler ["lbdblclick","with uinamespace do {['buttonTemplateOK',[ctrlparent (_this select 0)]] call rhs_fnc_servicemenu;};"];

		//--- Menus
		_ctrlIcon = _display displayctrl IDC_RSCDISPLAYARSENAL_TAB;
		_ctrlIconPos = ctrlposition _ctrlIcon;
		_ctrlTabs = _display displayctrl IDC_RSCDISPLAYARSENAL_TABS;
		_ctrlTabsPos = ctrlposition _ctrlTabs;
		_ctrlTabsPosX = _ctrlTabsPos select 0;
		_ctrlTabsPosY = _ctrlTabsPos select 1;
		_ctrlIconPosW = _ctrlIconPos select 2;
		_ctrlIconPosH = _ctrlIconPos select 3;
		_columns = (_ctrlTabsPos select 2) / _ctrlIconPosW;
		_rows = (_ctrlTabsPos select 3) / _ctrlIconPosH;
		_gridH = ctrlposition _ctrlTemplateButtonOK select 3;

		{
			_idc = _x;
			_ctrlIcon = _display displayctrl (IDC_RSCDISPLAYARSENAL_ICON + _idc);
			_ctrlTab = _display displayctrl (IDC_RSCDISPLAYARSENAL_TAB + _idc);
			_mode = if (_idc in [IDCS_LEFT]) then {"TabSelectLeft"} else {"TabSelectRight"};
			{
				_x ctrladdeventhandler ["buttonclick",format ["with uinamespace do {['%2',[ctrlparent (_this select 0),%1]] call rhs_fnc_servicemenu;};",_idc,_mode]];
				_x ctrladdeventhandler ["mousezchanged","with uinamespace do {['MouseZChanged',_this] call rhs_fnc_servicemenu;};"];
			} foreach [_ctrlIcon,_ctrlTab];

			_ctrlList = _display displayctrl (IDC_RSCDISPLAYARSENAL_LIST + _idc);
			_ctrlList ctrlenable false;
			_ctrlList ctrlsetfade 1;
			_ctrlList ctrlsetfontheight (_gridH * 0.8);
			_ctrlList ctrlcommit 0;
			//_ctrlList ctrladdeventhandler ["lbselchanged",format ["with uinamespace do {['SelectItem',[ctrlparent (_this select 0),(_this select 0),%1]] call rhs_fnc_servicemenu;};",_idc]];
			//_ctrlList ctrladdeventhandler ["lbdblclick",format ["with uinamespace do {['ShowItem',[ctrlparent (_this select 0),(_this select 0),%1]] spawn rhs_fnc_servicemenu;};",_idc]];
		} foreach IDCS;
		//['TabDeselect',[_display,-1]] call rhs_fnc_servicemenu;
		//['SelectItem',[_display,controlnull,-1]] call rhs_fnc_servicemenu;

		{
			_ctrl = _display displayctrl _x;
			_ctrl ctrlenable false;
			_ctrl ctrlsetfade 1;
			_ctrl ctrlcommit 0;
		} foreach [
			IDC_RSCDISPLAYARSENAL_FRAMELEFT,
			IDC_RSCDISPLAYARSENAL_FRAMERIGHT,
			IDC_RSCDISPLAYARSENAL_BACKGROUNDLEFT,
			IDC_RSCDISPLAYARSENAL_BACKGROUNDRIGHT,
			IDC_RSCDISPLAYARSENAL_LINEICON,
			IDC_RSCDISPLAYARSENAL_LINETABLEFT,
			IDC_RSCDISPLAYARSENAL_LINETABRIGHT,
			IDC_RSCDISPLAYARSENAL_TEMPLATE_TEMPLATE
		];

		_ctrlButtonClose = _display displayctrl IDC_RSCDISPLAYARSENAL_CONTROLSBAR_BUTTONCLOSE;
		_ctrlButtonClose ctrladdeventhandler ["buttonclick","with uinamespace do {['buttonClose',[ctrlparent (_this select 0)]] spawn rhs_fnc_servicemenu;}; true"];
		
		_ctrlButtonOK ctrlsettext "";
		_ctrlButtonOK ctrlenable false;
		
		

		//--- Camera init
		if (isnil "rhs_fnc_servicemenu_campos") then {rhs_fnc_servicemenu_campos = [15,0,0,[0,0,0.85]];};
		_target = createagent ["Logic",position _center,[],0,"none"];
		_target attachto [_center,rhs_fnc_servicemenu_campos select 3,""];
		missionnamespace setvariable ["rhs_fnc_servicemenu_target",_target];

		_cam = "camera" camcreate position _center;
		_cam cameraeffect ["internal","back"];
		_cam campreparefocus [-1,-1];
		_cam campreparefov 0.75;
		_cam camcommitprepared 0;
		cameraEffectEnableHUD true;
		showcinemaborder false;
		rhs_fnc_servicemenu_cam = _cam;
		["#(argb,8,8,3)color(0,0,0,1)",false,nil,0,[0,0.5]] call bis_fnc_textTiles;

		//--- Camera reset
		["Mouse",[controlnull,0,0]] call rhs_fnc_servicemenu;
		rhs_fnc_servicemenu_draw3D = addMissionEventHandler ["draw3D",{with (uinamespace) do {['draw3D',_this] call rhs_fnc_servicemenu;};}];

		["rhs_fnc_servicemenu"] call bis_fnc_endloadingscreen;
		setacctime (missionnamespace getvariable ["rhs_fnc_servicemenu_acctime",1]);
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "Exit": {

		removemissioneventhandler ["draw3D",rhs_fnc_servicemenu_draw3D];

		_target = (missionnamespace getvariable ["rhs_fnc_servicemenu_target",player]);
		_cam = uinamespace getvariable ["rhs_fnc_servicemenu_cam",objnull];
		_camData = [getposatl _cam,(getposatl _cam) vectorfromto (getposatl _target)];
		_cam cameraeffect ["terminate","back"];
		camdestroy _cam;

		rhs_fnc_servicemenu_cam = nil;
		rhs_fnc_servicemenu_display = nil;
		rhs_fnc_servicemenu_mouse = nil;
		rhs_fnc_servicemenu_buttons = nil;
		rhs_fnc_servicemenu_action = nil;

		deletevehicle (missionnamespace getvariable ["rhs_fnc_servicemenu_target",objnull]);

		with missionnamespace do {
			rhs_fnc_servicemenu_acctime = acctime;
			rhs_fnc_servicemenu_target = nil;
			rhs_fnc_servicemenu_center = nil;
			rhs_fnc_servicemenu_cargo = nil;
		};

		setacctime 1;

		if !(isnull curatorcamera) then {
			curatorcamera setposatl (_camData select 0);
			curatorcamera setvectordir (_camData select 1);
			curatorcamera cameraeffect ["internal","back"];
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "draw3D": {
		_display = rhs_fnc_servicemenu_display;

		_cam = (uinamespace getvariable ["rhs_fnc_servicemenu_cam",objnull]);
		_center = (missionnamespace getvariable ["rhs_fnc_servicemenu_center",vehicle player]);
		_target = (missionnamespace getvariable ["rhs_fnc_servicemenu_target",vehicle player]);

		_dis = rhs_fnc_servicemenu_campos select 0;
		_dirH = rhs_fnc_servicemenu_campos select 1;
		_dirV = rhs_fnc_servicemenu_campos select 2;
		_x = cos _dirV * _dis;
		_z = sin _dirV * _dis;
		_campos = [[0,0,_z],_x,_dirH] call bis_fnc_relpos;
		_cam attachto [_target,_campos,""];
		if ((getposatl _cam select 2) < 0) then {
			_campos set [2,(_campos select 2) - (getposatl _cam select 2)];
			_cam attachto [_target,_campos,""];
		};
		_cam campreparetarget _target;
		_cam camcommitprepared 0;

		_selections = [];
		_selections set [IDC_RSCDISPLAYARSENAL_TAB_WEAPON,	["pylon_1",		[+0.00, +0.00, +0.00]]];
		
		_fade = 1;
		{
			_selPos = _center selectionposition (_x select 0);
			if (_selPos distance [0,0,0] > 0) then {
				_selPos = [_selPos,_x select 1] call bis_fnc_vectorAdd;
				_pos = _center modeltoworld _selPos;
				_uiPos = worldtoscreen _pos;
				if (count _uiPos > 0) then {
					_fade = _fade min (_uiPos distance rhs_fnc_servicemenu_mouse);

					_ctrl = _display displayctrl (IDC_RSCDISPLAYARSENAL_ICON + _foreachindex);
					_ctrlPos = ctrlposition _ctrl;
					_ctrlPos set [0,(_uiPos select 0) - (_ctrlPos select 2) * 0.5];
					_ctrlPos set [1,(_uiPos select 1) - (_ctrlPos select 3) * 0.5];
					_ctrl ctrlsetposition _ctrlPos;
					_ctrl ctrlcommit 0;

					_ctrlList = _display displayctrl (IDC_RSCDISPLAYARSENAL_LIST + _foreachindex);
					_ctrlLineIcon = _display displayctrl IDC_RSCDISPLAYARSENAL_LINEICON;
					if (ctrlfade _ctrlList == 0) then {
						_ctrlLinePosX = (_uiPos select 0) - (_ctrlPos select 2) * 0.5;
						_ctrlLineIcon ctrlsetposition [
							(_uiPos select 0) - (_ctrlPos select 2) * 0.5,
							_uiPos select 1,
							(ctrlposition _ctrlList select 0) + (ctrlposition _ctrlList select 2) - _ctrlLinePosX,
							0
						];
						_ctrlLineIcon ctrlsetfade 0;
						_ctrlLineIcon ctrlcommit 0;
					} else {
						if (ctrlfade _ctrlLineIcon == 0) then {
							_ctrlLineIcon ctrlsetfade 0.01;
							_ctrlLineIcon ctrlcommit 0;
							_ctrlLineIcon ctrlsetfade 1;
							_ctrlLineIcon ctrlcommit FADE_DELAY;
						};
					};
				};
			};
		} foreach _selections;

		_fade = ((_fade - safezoneW * 0.1) * safezoneW) max 0;
		{
			_ctrl = _display displayctrl (IDC_RSCDISPLAYARSENAL_ICON + _foreachindex);
			if !(ctrlenabled _ctrl) then {
				_ctrl ctrlsetfade 0;
			} else {
				_ctrl ctrlsetfade _fade;
			};
			_ctrl ctrlcommit 0;
		} foreach _selections;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "Mouse": {
		_mX = _this select 1;
		_mY = _this select 2;
		rhs_fnc_servicemenu_mouse = [_mX,_mY];

		_cam = (uinamespace getvariable ["rhs_fnc_servicemenu_cam",objnull]);
		_center = (missionnamespace getvariable ["rhs_fnc_servicemenu_center",vehicle player]);
		_target = (missionnamespace getvariable ["rhs_fnc_servicemenu_target",vehicle player]);

		_dis = rhs_fnc_servicemenu_campos select 0;
		_dirH = rhs_fnc_servicemenu_campos select 1;
		_dirV = rhs_fnc_servicemenu_campos select 2;
		_targetPos = rhs_fnc_servicemenu_campos select 3;
		_disLocal = _dis;

		_LMB = rhs_fnc_servicemenu_buttons select 0;
		_RMB = rhs_fnc_servicemenu_buttons select 1;

		if (count _LMB > 0) then {
			_cX = _LMB select 0;
			_cY = _LMB select 1;
			_dX = (_cX - _mX);
			_dY = (_cY - _mY);
			rhs_fnc_servicemenu_buttons set [0,[_mX,_mY]];

			//_targetPos = _center worldtomodel position _target;
			_targetPos = [_targetPos,_dX,_dirH - 90] call bis_fnc_relpos;
			_targetPos = [
				[0,0,((_targetPos select 2) - _dY) max 0 min 2],
				([[0,0,0],_targetPos] call bis_fnc_distance2D) min 1.5,
				[[0,0,0],_targetPos] call bis_fnc_dirto
			] call bis_fnc_relpos;

			_target attachto [_center,_targetPos,""];
			rhs_fnc_servicemenu_campos set [3,_targetPos];
		};

		if (count _RMB > 0) then {
			_cX = _RMB select 0;
			_cY = _RMB select 1;
			_dX = (_cX - _mX) * 0.75;
			_dY = (_cY - _mY) * 0.75;

			_dirH = (_dirH - _dX * 180) % 360;
			_dirV = (_dirV - _dY * 100) max -89 min 89;

			//_targetPos = _center worldtomodel position _target;
			//_targetPos = rhs_fnc_servicemenu_campos select 3;
			_targetPos = [
				[0,0,_targetPos select 2],
				[[0,0,0],_targetPos] call bis_fnc_distance2D,
				([[0,0,0],_targetPos] call bis_fnc_dirto) - _dX * 180
			] call bis_fnc_relpos;
			_target attachto [_center,_targetPos,""];

			rhs_fnc_servicemenu_campos set [1,_dirH];
			rhs_fnc_servicemenu_campos set [2,_dirV];
			rhs_fnc_servicemenu_campos set [3,_targetPos];
			rhs_fnc_servicemenu_buttons set [1,[_mX,_mY]];
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "MouseButtonDown": {
		rhs_fnc_servicemenu_buttons set [_this select 1,[_this select 2,_this select 3]];
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "MouseButtonUp": {
		rhs_fnc_servicemenu_buttons set [_this select 1,[]];
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "MouseZChanged": {
		_z = _this select 1;
		_dis = rhs_fnc_servicemenu_campos select 0;
		_dis = _dis - (_z / 10);
		_dis = _dis max 0.75 min 5;
		rhs_fnc_servicemenu_campos set [0,_dis];
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "KeyDown": {
		_display = _this select 0;
		_key = _this select 1;
		_shift = _this select 2;
		_ctrl = _this select 3;
		_alt = _this select 4;
		_center = (missionnamespace getvariable ["rhs_fnc_servicemenu_center",player]);
		_return = false;

		switch true do {
			case (_key == DIK_ESCAPE): {
				_ctrlTemplate = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_TEMPLATE;
				if (ctrlfade _ctrlTemplate == 0) then {
					_ctrlTemplate ctrlsetfade 1;
					_ctrlTemplate ctrlcommit 0;
					_ctrlTemplate ctrlenable false;

					_ctrlMouseBlock = _display displayctrl IDC_RSCDISPLAYARSENAL_MOUSEBLOCK;
					_ctrlMouseBlock ctrlenable false;
				} else {
					if (_fullArsenal) then {["buttonClose",[_display]] spawn rhs_fnc_servicemenu;} else {_display closedisplay 2;};
				};
				_return = true;
			};

			//--- Enter
			case (_key in [DIK_RETURN,DIK_NUMPADENTER]): {
				_ctrlTemplate = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_TEMPLATE;
				if (ctrlfade _ctrlTemplate == 0) then {
					["buttonTemplateOK",[_display]] spawn rhs_fnc_servicemenu;
					_return = true;
				};
			};

			//--- Prevent opening the commanding menu
			case (_key == DIK_1);
			case (_key == DIK_2);
			case (_key == DIK_3);
			case (_key == DIK_4);
			case (_key == DIK_5);
			case (_key == DIK_1);
			case (_key == DIK_7);
			case (_key == DIK_8);
			case (_key == DIK_9);
			case (_key == DIK_0): {
				_return = true;
			};

			//--- Tab to browse tabs
			case (_key == DIK_TAB): {
				_idc = -1;
				{
					_ctrlTab = _display displayctrl (IDC_RSCDISPLAYARSENAL_TAB + _x);
					if !(ctrlenabled _ctrlTab) exitwith {_idc = _x;};
				} foreach [IDCS_LEFT];
				_idcCount = count [IDCS_LEFT];
				_idc = if (_ctrl) then {(_idc - 1 + _idcCount) % _idcCount} else {(_idc + 1) % _idcCount};
				["TabSelectLeft",[_display,_idc]] call rhs_fnc_servicemenu;
				_return = true;
			};

			//--- Export to script
			case (_key == DIK_C): {
				_mode = if (_shift) then {"config"} else {"init"};
				if (_ctrl) then {['buttonExport',[_display,_mode]] call rhs_fnc_servicemenu;};
			};
			//--- Export from script
			case (_key == DIK_V): {
				if (_ctrl) then {['buttonImport',[_display]] call rhs_fnc_servicemenu;};
			};
			//--- Save
			case (_key == DIK_S): {
				if (_ctrl) then {['buttonSave',[_display]] call rhs_fnc_servicemenu;};
			};
			//--- Open
			case (_key == DIK_O): {
				if (_ctrl) then {['buttonLoad',[_display]] call rhs_fnc_servicemenu;};
			};
			//--- Randomize
			case (_key == DIK_R): {
				if (_ctrl) then {
					if (_shift) then {
						_soldiers = [];
						{
							_soldiers set [count _soldiers,configname _x];
						} foreach ("isclass _x && getnumber (_x >> 'scope') > 1 && gettext (_x >> 'simulation') == 'soldier'" configclasses (configfile >> "cfgvehicles"));
						[_center,_soldiers call bis_fnc_selectrandom] call bis_fnc_loadinventory;
						["ListSelectCurrent",[_display]] call rhs_fnc_servicemenu;
					}else {
						['buttonRandom',[_display]] call rhs_fnc_servicemenu;
					};
				};
			};
			//--- Toggle interface
			case (_key == DIK_BACKSPACE): {
				_ctrlMouseBlock = _display displayctrl IDC_RSCDISPLAYARSENAL_MOUSEBLOCK;
				if !(ctrlenabled _ctrlMouseBlock) then {
					['buttonInterface',[_display]] call rhs_fnc_servicemenu;
					_return = true;
				};
			};

			//--- Acctime
			case (_key in (actionkeys "timeInc")): {
				if (acctime == 0) then {setacctime 1;};
				_return = true;
			};
			case (_key in (actionkeys "timeDec")): {
				if (acctime != 0) then {setacctime 0;};
				_return = true;

			};
/*
			//--- Delete template
			case (_key == DIK_DELETE): {
				_ctrlMouseBlock = _display displayctrl IDC_RSCDISPLAYARSENAL_MOUSEBLOCK;
				if !(ctrlenabled _ctrlMouseBlock) then {
					['buttonTemplateDelete',[_display]] call rhs_fnc_servicemenu;
					_return = true;
				};
			};
*/
		};
		_return
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "buttonTemplateOK": {
		_display = _this select 0;
		_center = (missionnamespace getvariable ["rhs_fnc_servicemenu_center",player]);
		_hideTemplate = true;

		_ctrlTemplateName = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_EDITNAME;
		if (ctrlenabled _ctrlTemplateName) then {
			//--- Save
			[
				_center,
				[profilenamespace,ctrltext _ctrlTemplateName],
				[
					_center getvariable ["rhs_fnc_servicemenu_face",face _center],
					speaker _center,
					_center call bis_fnc_getUnitInsignia
				]
			] call bis_fnc_saveInventory;
		} else {
			//--- Load
			_ctrlTemplateValue = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_VALUENAME;
			if ((_ctrlTemplateValue lbvalue lnbcurselrow _ctrlTemplateValue) == 0) then {
				_inventory = _ctrlTemplateValue lnbtext [lnbcurselrow _ctrlTemplateValue,0];
				[_center,[profilenamespace,_inventory]] call bis_fnc_loadinventory;

				//--- Load custom data
				_ctrlTemplateValue = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_VALUENAME;
				_data = profilenamespace getvariable ["bis_fnc_saveInventory_data",[]];	
				_name = _ctrlTemplateValue lnbtext [lnbcurselrow _ctrlTemplateValue,0];
				_nameID = _data find _name;
				if (_nameID >= 0) then {
					_inventory = _data select (_nameID + 1);
					_inventoryCustom = _inventory select 10;
					_center setface (_inventoryCustom select 0);
					_center setvariable ["rhs_fnc_servicemenu_face",(_inventoryCustom select 0)];
					_center setspeaker (_inventoryCustom select 1);
					[_center,_inventoryCustom select 2] call bis_fnc_setUnitInsignia;
				};

				["ListSelectCurrent",[_display]] call rhs_fnc_servicemenu;
			} else {
				_hideTemplate = false;
			};
		};
		if (_hideTemplate) then {
			_ctrlTemplate = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_TEMPLATE;
			_ctrlTemplate ctrlsetfade 1;
			_ctrlTemplate ctrlcommit 0;
			_ctrlTemplate ctrlenable false;

			_ctrlMouseBlock = _display displayctrl IDC_RSCDISPLAYARSENAL_MOUSEBLOCK;
			_ctrlMouseBlock ctrlenable false;
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "buttonTemplateCancel": {
		_display = _this select 0;

		_ctrlTemplate = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_TEMPLATE;
		_ctrlTemplate ctrlsetfade 1;
		_ctrlTemplate ctrlcommit 0;
		_ctrlTemplate ctrlenable false;

		_ctrlMouseBlock = _display displayctrl IDC_RSCDISPLAYARSENAL_MOUSEBLOCK;
		_ctrlMouseBlock ctrlenable false;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "buttonTemplateDelete": {
		_display = _this select 0;
		_ctrlTemplateValue = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_VALUENAME;
		_cursel = lnbcurselrow _ctrlTemplateValue;
		_inventory = _ctrlTemplateValue lnbtext [_cursel,0];
		[_center,[profilenamespace,_inventory],nil,true] call bis_fnc_saveinventory;
		['showTemplates',[_display]] call rhs_fnc_servicemenu;
		_ctrlTemplateValue lnbsetcurselrow (_cursel max (lbsize _ctrlTemplateValue - 1));

		_enableButtons = (lnbsize _ctrlTemplateValue select 0) > 0;
		_ctrlTemplateButtonOK = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_BUTTONOK;
		_ctrlTemplateButtonOK ctrlenable _enableButtons;
		_ctrlTemplateButtonDelete = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_BUTTONDELETE;
		_ctrlTemplateButtonDelete ctrlenable _enableButtons;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "templateSelChanged": {
		_display = _this select 0;

		_ctrlTemplateValue = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_VALUENAME;
		_ctrlTemplateName = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_EDITNAME;
		_ctrlTemplateName ctrlsettext (_ctrlTemplateValue lnbtext [lnbcurselrow _ctrlTemplateValue,0]);

		_ctrlTemplateButtonOK = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_BUTTONOK;
		_ctrlTemplateButtonOK ctrlenable ((_ctrlTemplateValue lbvalue lnbcurselrow _ctrlTemplateValue) == 0);
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "showTemplates": {
		_display = _this select 0;
		_ctrlList = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_VALUENAME;
		lnbclear _ctrlList;
		_data = profilenamespace getvariable ["bis_fnc_saveInventory_data",[]];
		_center = (missionnamespace getvariable ["rhs_fnc_servicemenu_center",player]);
		_cargo = (missionnamespace getvariable ["rhs_fnc_servicemenu_cargo",objnull]);

		//GETVIRTUALCARGO

		for "_i" from 0 to (count _data - 1) step 2 do {
			_name = _data select _i;
			_inventory = _data select (_i + 1);

			_inventoryWeapons = [
				(_inventory select 5), //--- Binocular
				(_inventory select 6 select 0), //--- Primary weapon
				(_inventory select 7 select 0), //--- Secondary weapon
				(_inventory select 8 select 0) //--- Handgun
			] - [""];
			_inventoryMagazines = (
				(_inventory select 0 select 1) + //--- Uniform
				(_inventory select 1 select 1) + //--- Vest
				(_inventory select 2 select 1) //--- Backpack items
			) - [""];
			_inventoryItems = (
				[_inventory select 0 select 0] + (_inventory select 0 select 1) + //--- Uniform
				[_inventory select 1 select 0] + (_inventory select 1 select 1) + //--- Vest
				(_inventory select 2 select 1) + //--- Backpack items
				[_inventory select 3] + //--- Headgear
				[_inventory select 4] + //--- Goggles
				(_inventory select 6 select 1) + //--- Primary weapon items
				(_inventory select 7 select 1) + //--- Secondary weapon items
				(_inventory select 8 select 1) + //--- Handgun items
				(_inventory select 9) //--- Assigned items
			) - [""];
			_inventoryBackpacks = [_inventory select 2 select 0] - [""];


			_lbAdd = _ctrlList lnbaddrow [_name];
			_ctrlList lnbsetpicture [[_lbAdd,1],gettext (configfile >> "cfgweapons" >> (_inventory select 6 select 0) >> "picture")];
			_ctrlList lnbsetpicture [[_lbAdd,2],gettext (configfile >> "cfgweapons" >> (_inventory select 7 select 0) >> "picture")];
			_ctrlList lnbsetpicture [[_lbAdd,3],gettext (configfile >> "cfgweapons" >> (_inventory select 8 select 0) >> "picture")];
			_ctrlList lnbsetpicture [[_lbAdd,4],gettext (configfile >> "cfgweapons" >> (_inventory select 0 select 0) >> "picture")];
			_ctrlList lnbsetpicture [[_lbAdd,5],gettext (configfile >> "cfgweapons" >> (_inventory select 1 select 0) >> "picture")];
			_ctrlList lnbsetpicture [[_lbAdd,6],gettext (configfile >> "cfgvehicles" >> (_inventory select 2 select 0) >> "picture")];
			_ctrlList lnbsetpicture [[_lbAdd,7],gettext (configfile >> "cfgweapons" >> (_inventory select 3) >> "picture")];
			_ctrlList lnbsetpicture [[_lbAdd,8],gettext (configfile >> "cfgglasses" >> (_inventory select 4) >> "picture")];

			if (
				{_item = _x; !CONDITION(_virtualWeaponCargo) || !isclass(configfile >> "cfgweapons" >> _item)} count _inventoryWeapons > 0
				||
				{_item = _x; !CONDITION(_virtualItemCargo + _virtualMagazineCargo) || {isclass(configfile >> _x >> _item)} count ["cfgweapons","cfgglasses","cfgmagazines"] == 0} count _inventoryMagazines > 0
				||
				{_item = _x; !CONDITION(_virtualItemCargo + _virtualMagazineCargo) || {isclass(configfile >> _x >> _item)} count ["cfgweapons","cfgglasses","cfgmagazines"] == 0} count _inventoryItems > 0
				||
				{_item = _x; !CONDITION(_virtualBackpackCargo) || !isclass(configfile >> "cfgvehicles" >> _item)} count _inventoryBackpacks > 0
			) then {
				_ctrlList lnbsetcolor [[_lbAdd,0],[1,1,1,0.25]];
				_ctrlList lbsetvalue [_lbAdd,-1];
			};
		};

		//['buttonExport',[_display]] call rhs_fnc_servicemenu;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "buttonImport": {
		startloadingscreen [""];
		_display = _this select 0;
		_center = (missionnamespace getvariable ["rhs_fnc_servicemenu_center",player]);
		_cargo = (missionnamespace getvariable ["rhs_fnc_servicemenu_cargo",objnull]);

		//GETVIRTUALCARGO

		_disabledItems = [];

		_import = copyfromclipboard;
		_importArray = [_import," 	;='""" + tostring [13,10]] call bis_fnc_splitString;

		if (count _importArray == 1) then {
			//--- Import vehicle class
			_class = _importArray select 0;
			if (isclass (configfile >> "cfgvehicles" >> _class)) then {[_center,_class] call bis_fnc_loadinventory;};
		} else {
			//--- Import specific items
			_importArray = _importArray + [""];
			_to = 1;
			{
				_item = _importArray select _foreachindex + 1;
				switch tolower _x do {
					case "to": {_to = parsenumber _item;};

					case "removeallweapons": {removeallweapons _center;};
					case "removeallitems": {removeallitems _center;};
					case "removeallassignedItems": {removeallassignedItems _center;};
					case "removeuniform": {removeuniform _center;};
					case "removevest": {removevest _center;};
					case "removebackpack": {removebackpack _center;};
					case "removeheadgear": {removeheadgear _center;};
					case "removegoggles": {removegoggles _center;};
					case "forceadduniform";
					case "adduniform": {
						if (CONDITION(_virtualItemCargo)) then {_center forceadduniform _item;} else {ERROR};
					};
					case "addvest": {
						if (CONDITION(_virtualItemCargo)) then {_center addvest _item;} else {ERROR};
					};
					case "addbackpack": {
						if (CONDITION(_virtualBackpackCargo)) then {_center addbackpack _item;} else {ERROR};
					};
					case "addheadgear": {
						if (CONDITION(_virtualItemCargo)) then {_center addheadgear _item;} else {ERROR};
					};
					case "addgoggles": {
						if (CONDITION(_virtualItemCargo)) then {_center addgoggles _item;} else {ERROR};
					};

					case "additemtouniform": {
						if (CONDITION(_virtualItemCargo + _virtualMagazineCargo)) then {
							for "_n" from 1 to _to do {_center additemtouniform _item;};
						} else {ERROR};
						_to = 1;
					};
					case "additemtovest": {
						if (CONDITION(_virtualItemCargo + _virtualMagazineCargo)) then {
							for "_n" from 1 to _to do {_center additemtovest _item;};
						} else {ERROR};
						_to = 1;
					};
					case "additemtobackpack": {
						if (CONDITION(_virtualItemCargo + _virtualMagazineCargo)) then {
							for "_n" from 1 to _to do {_center additemtobackpack _item;};
						} else {ERROR};
						_to = 1;
					};

					case "addweapon": {
						if (CONDITION(_virtualWeaponCargo)) then {_center addweapon _item;} else {ERROR};
					};
					case "addprimaryweaponitem": {
						if (CONDITION(_virtualItemCargo)) then {_center addprimaryweaponitem _item;} else {ERROR};
					};
					case "addsecondaryweaponitem": {
						if (CONDITION(_virtualItemCargo)) then {_center addsecondaryweaponitem _item;} else {ERROR};
					};
					case "addhandgunitem": {
						if (CONDITION(_virtualItemCargo)) then {_center addhandgunitem _item;} else {ERROR};
					};

					case "addmagazine": {
						if (CONDITION(_virtualMagazineCargo)) then {_center addmagazine _item;} else {ERROR};
					};
					case "additem": {
						if (CONDITION(_virtualItemCargo)) then {_center additem _item;} else {ERROR};
					};
					case "assignitem": {
						if (CONDITION(_virtualItemCargo)) then {_center assignitem _item;} else {ERROR};
					};
					case "linkitem": {
						if (CONDITION(_virtualItemCargo)) then {_center linkitem _item;} else {ERROR};
					};

					case "setface": {
						if (_fullArsenal) then {_center setface _item; _center setvariable ["rhs_fnc_servicemenu_face",_item];};
					};
					case "setspeaker": {
						if (_fullArsenal) then {_center setspeaker _item;};
					};
					case "bis_fnc_setunitinsignia": {
						if (_fullArsenal) then {[_center,_importArray select ((_foreachindex - 3) max 0)] call bis_fnc_setunitinsignia;};
					};
				};
			} foreach _importArray;
		};

		//--- Show unavailable items
		if (count _disabledItems > 0) then {
			['showMessage',[_display,localize "STR_A3_RSCDISPLAYARSENAL_message_unavailable"]] call rhs_fnc_servicemenu;
		};

		["ListSelectCurrent",[_display]] call rhs_fnc_servicemenu;
		//["templateSelChanged",[_display]] call rhs_fnc_servicemenu;
		endloadingscreen;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "buttonExport": {
		_display = _this select 0;
		_exportMode = _this select 1;
		_center = (missionnamespace getvariable ["rhs_fnc_servicemenu_center",player]);

		_export = [_center,_exportMode,_fullArsenal] call bis_fnc_exportInventory;
		_export spawn {copytoclipboard _this;};
		['showMessage',[_display,localize "STR_a3_RSCDISPLAYARSENAL_message_clipboard"]] call rhs_fnc_servicemenu;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "buttonLoad": {
		_display = _this select 0;
		['showTemplates',[_display]] call rhs_fnc_servicemenu;

		_ctrlTemplate = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_TEMPLATE;
		_ctrlTemplate ctrlsetfade 0;
		_ctrlTemplate ctrlcommit 0;
		_ctrlTemplate ctrlenable true;

		_ctrlMouseBlock = _display displayctrl IDC_RSCDISPLAYARSENAL_MOUSEBLOCK;
		_ctrlMouseBlock ctrlenable true;
		ctrlsetfocus _ctrlMouseBlock;

		{
			(_display displayctrl _x) ctrlsettext localize "str_disp_int_load";
		} foreach [IDC_RSCDISPLAYARSENAL_TEMPLATE_TITLE,IDC_RSCDISPLAYARSENAL_TEMPLATE_BUTTONOK];
		{
			_ctrl = _display displayctrl _x;
			_ctrl ctrlshow false;
			_ctrl ctrlenable false;
		} foreach [IDC_RSCDISPLAYARSENAL_TEMPLATE_TEXTNAME,IDC_RSCDISPLAYARSENAL_TEMPLATE_EDITNAME];
		_ctrlTemplateValue = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_VALUENAME;
		if (lnbcurselrow _ctrlTemplateValue < 0) then {_ctrlTemplateValue lnbsetcurselrow 0;};
		ctrlsetfocus _ctrlTemplateValue;

		//--- Disable LOAD and DELETE buttons when no items are available
		_enableButtons = (lnbsize _ctrlTemplateValue select 0) > 0;
		_ctrlTemplateButtonOK = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_BUTTONOK;
		_ctrlTemplateButtonOK ctrlenable _enableButtons;
		_ctrlTemplateButtonDelete = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_BUTTONDELETE;
		_ctrlTemplateButtonDelete ctrlenable _enableButtons;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "buttonSave": {
		_display = _this select 0;
		['showTemplates',[_display]] call rhs_fnc_servicemenu;

		_ctrlTemplate = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_TEMPLATE;
		_ctrlTemplate ctrlsetfade 0;
		_ctrlTemplate ctrlcommit 0;
		_ctrlTemplate ctrlenable true;

		_ctrlMouseBlock = _display displayctrl IDC_RSCDISPLAYARSENAL_MOUSEBLOCK;
		_ctrlMouseBlock ctrlenable true;

		{
			(_display displayctrl _x) ctrlsettext localize "str_disp_int_save";
		} foreach [IDC_RSCDISPLAYARSENAL_TEMPLATE_TITLE,IDC_RSCDISPLAYARSENAL_TEMPLATE_BUTTONOK];
		{
			_ctrl = _display displayctrl _x;
			_ctrl ctrlshow true;
			_ctrl ctrlenable true;
		} foreach [IDC_RSCDISPLAYARSENAL_TEMPLATE_TEXTNAME,IDC_RSCDISPLAYARSENAL_TEMPLATE_EDITNAME];

		_ctrlTemplateName = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_EDITNAME;
		ctrlsetfocus _ctrlTemplateName;

		_ctrlTemplateValue = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_VALUENAME;
		_ctrlTemplateButtonOK = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_BUTTONOK;
		_ctrlTemplateButtonOK ctrlenable true;
		_ctrlTemplateButtonDelete = _display displayctrl IDC_RSCDISPLAYARSENAL_TEMPLATE_BUTTONDELETE;
		_ctrlTemplateButtonDelete ctrlenable ((lnbsize _ctrlTemplateValue select 0) > 0);

		['showMessage',[_display,localize "STR_A3_RSCDISPLAYARSENAL_message_save"]] call rhs_fnc_servicemenu;
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "buttonRandom": {
		_display = _this select 0;
		_center = (missionnamespace getvariable ["rhs_fnc_servicemenu_center",player]);

		//--- Left sidebar
		{
			_ctrlList = _display displayctrl (IDC_RSCDISPLAYARSENAL_LIST + _x);
			_ctrlList lbsetcursel floor random (lbsize _ctrlList);
		} foreach IDCS;

		//--- Right sidebar (attachments)
		{
			_weaponID = _foreachindex;
			{
				_compatibleItems = getarray (_x >> "compatibleItems") + [""];
				_acc = _compatibleItems call bis_fnc_selectrandom;
				if (_acc != "") then {
					switch _weaponID do {
						case 0: {_center addprimaryweaponitem _acc;};
						case 1: {_center addsecondaryweaponitem _acc;};
						case 2: {_center addhandgunitem _acc;};
					};
				};
			} foreach ("isclass _x" configclasses (configfile >> "cfgweapons" >> _x >> "WeaponSlotsInfo"));
		} foreach [
			primaryweapon _center,
			secondaryweapon _center,
			handgunweapon _center
		];
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "buttonInterface": {
		_display = _this select 0;
		_show = !ctrlshown (_display displayctrl IDC_RSCDISPLAYARSENAL_CONTROLSBAR_CONTROLBAR);
		{
			_tab = _x;
			{
				_ctrl = _display displayctrl (_tab + _x);
				_ctrl ctrlshow _show;
				_ctrl ctrlcommit FADE_DELAY;
			} foreach [
				IDC_RSCDISPLAYARSENAL_ICON,
				IDC_RSCDISPLAYARSENAL_TAB,
				IDC_RSCDISPLAYARSENAL_LIST
			];
		} foreach IDCS;
		{
			_ctrl = _display displayctrl _x;
			_ctrl ctrlshow _show;
			_ctrl ctrlcommit FADE_DELAY;
		} foreach [
			IDC_RSCDISPLAYARSENAL_CONTROLSBAR_CONTROLBAR,
			IDC_RSCDISPLAYARSENAL_TABS,
			IDC_RSCDISPLAYARSENAL_FRAMELEFT,
			IDC_RSCDISPLAYARSENAL_FRAMERIGHT,
			IDC_RSCDISPLAYARSENAL_LINEICON,
			IDC_RSCDISPLAYARSENAL_LINETABLEFT,
			IDC_RSCDISPLAYARSENAL_LINETABRIGHT,
			IDC_RSCDISPLAYARSENAL_ICON,
			IDC_RSCDISPLAYARSENAL_TAB,
			IDC_RSCDISPLAYARSENAL_LIST,
			IDC_RSCDISPLAYARSENAL_LOAD,
			IDC_RSCDISPLAYARSENAL_LOADCARGO,
			IDC_RSCDISPLAYARSENAL_BACKGROUNDLEFT,
			IDC_RSCDISPLAYARSENAL_BACKGROUNDRIGHT
		];
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "buttonOK": {
		_display = _this select 0;
		_display closedisplay 2;

		["#(argb,8,8,3)color(0,0,0,1)",false,nil,0,[0,0.5]] call bis_fnc_textTiles;

		//missionnamespace setvariable ["RscStatic_mode",0];
		//cutrsc ["rscstatic","plain"];
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "buttonClose": {
		_display = _this select 0;
		_message = if (missionname == "Arsenal") then {
			[
				localize "STR_SURE",
				localize "STR_disp_arcmap_exit",
				nil,
				true,
				_display,
				true
			] call bis_fnc_guimessage;
		} else {
			true
		};
		if (_message) then {
			_display closedisplay 2;
			if (missionname == "Arsenal") then {endmission "end1";};
			["#(argb,8,8,3)color(0,0,0,1)",false,nil,0,[0,0.5]] call bis_fnc_textTiles;
		};
	};

	///////////////////////////////////////////////////////////////////////////////////////////
	case "showMessage": {
		if !(isnil {missionnamespace getvariable "rhs_fnc_servicemenu_message"}) then {terminate (missionnamespace getvariable "rhs_fnc_servicemenu_message")};

		_spawn = _this spawn {
			disableserialization;
			_display = _this select 0;
			_message = _this select 1;

			_ctrlMessage = _display displayctrl IDC_RSCDISPLAYARSENAL_MESSAGE;
			_ctrlMessage ctrlsettext _message;
			_ctrlMessage ctrlsetfade 1;
			_ctrlMessage ctrlcommit 0;
			_ctrlMessage ctrlsetfade 0;
			_ctrlMessage ctrlcommit FADE_DELAY;
			uisleep 5;
			_ctrlMessage ctrlsetfade 1;
			_ctrlMessage ctrlcommit FADE_DELAY;
		};
		missionnamespace setvariable ["rhs_fnc_servicemenu_message",_spawn];
	};
};