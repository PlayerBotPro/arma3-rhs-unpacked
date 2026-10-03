/*
	animation switch on turn in/out

	a: reyhard
	i:
		0: Object - target object to which action is attached
		1: Object - caller object, basically player
		2: Number - index of the action in action menu (0 - top most)
		3: String - engine based action name ("User" for user added actions)
		4: String - localized action plain text as seen by the caller
		5: Number - action priority value
		6: Boolean - action showWindow value
		7: Boolean - action hideOnUse value
		8: String - action shortcut name or ""
		9: Boolean - action menu visibility (on first scroll or action press the menu is still invisible, so no action is performed, only menu is shown)
		10: String - EH event name
	o: 	true/false
*/
params["_v","","","_action","_text"];

_return=false;

if (_action == 'turnin') then {
		[0] call rhs_fnc_turretAction;
		//systemChat "action detected - turn in";
};

if (_action == 'turnout') then {
		[1] call rhs_fnc_turretAction;
		//systemChat "action detected - turn out";
};

_return