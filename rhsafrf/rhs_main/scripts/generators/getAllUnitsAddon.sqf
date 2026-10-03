params[
	["_modName",[""],[""]],
	["_tabsCount",0,[0]],
	["_formatedString",false,[false]]
];

_cfgs = configProperties [
	configFile >> "CfgVehicles", 
	format["((configSourceAddonList _x) # 0) isEqualTo '%1' && ((getNumber (_x >> 'scope') == 2) || (getNumber (_x >> 'scopeCurator') == 2))",_modName], 
	true
];
_cfgs = _cfgs apply { configName _x};
hint str _cfgs;
_cfgs sort true;

if(_formatedString)then{
	_tab = "	";
	_newLine = "
";
	_string = "";
	{
		for "_i" from 1 to _tabsCount do {
			_string = _string + _tab;
		};
		_string = _string + _x + "," + _newLine ;
	}forEach _cfgs;
	copyToClipboard _string;
}else{
	copyToClipboard str(_cfgs);
};