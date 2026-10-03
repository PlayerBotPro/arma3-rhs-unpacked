params[
	["_modName",[""],[""]],
	["_formatedString",false,[false]]
];

_cfgs = configProperties [
	configFile >> "CfgPatches", 
	format["configSourceMod _x == '%1'",_modName], 
	true
];
_cfgs = _cfgs apply { configName _x};
hint str _cfgs;
_cfgs sort true;

if(_formatedString)then{
	_tabs = "				";
	_newLine = "
";
	_string = "";
	{
		_string = _string + _tabs + _x + _newLine;
	}forEach _cfgs;
	copyToClipboard _string;
}else{
	copyToClipboard str(_cfgs);
};