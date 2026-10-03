//script is fired only once & is destroyed together with display

if(isNull (uiNamespace getVariable ["RHS_2P130_ctrl",displayNull]))then
{

	uiNameSpace setVariable ["RHS_2P130_ctrl",_this select 0];

	[] spawn {
		private["_v","_c","_a1","_a2","_e"];
		disableSerialization;
		_c = (uiNamespace getVariable "RHS_2P130_ctrl" displayCtrl 1);
		_v = vehicle player;

		while{not(isNull _c)}do
		{
			_a1=_v modelToWorld (_v selectionPosition "2p130_start");
			_a2=_v modelToWorld (_v selectionPosition "2p130_end");
			_e=[_a2, _a1] call BIS_fnc_DirTo;

			_c ctrlSetText format["%1",_e];
			sleep 0.1;
		};
	};

};