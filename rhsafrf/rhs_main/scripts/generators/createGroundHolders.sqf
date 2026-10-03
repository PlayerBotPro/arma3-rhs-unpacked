params[
	["_modName",[""],[""]],
	["_tabsCount",0,[0]]
];

private _createString = {
	params["_itemClass", "_displayName","_classOld","_category","_subcategory"];
	private _return = format["GROUNDHOLDER_MACRO(%1,""%2"",%3,%4,%5)",configName _itemClass, _displayName,_classOld,_category,_subcategory];
	_return
};

private _createStringMagazine = {
	params["_itemClass", "_displayName"];
	private _return = format["GROUNDHOLDER_MAGAZINE_MACRO(%1,""%2"")",configName _itemClass, _displayName];
	_return
};

private _createStringWeapon = {
	params["_weaponClass","_magazineClass", "_displayName","_subcategory","_macro"];
	private _return = format["GROUNDHOLDER_%5_MACRO(%1,%2,""%3"",%4)",configName _weaponClass, _magazineClass, _displayName,_subcategory,_macro];
	_return
};

private _cfgsWeapons = configProperties [
	configFile >> "CfgWeapons", 
	format["((configSourceAddonList _x) # 0) isEqualTo '%1' && ((getNumber (_x >> 'scope') == 2) || (getNumber (_x >> 'scopeCurator') == 2))",_modName], 
	true
];
//_cfgsWeapons = _cfgsWeapons apply { configName _x};
//hint str _cfgsWeapons;
//_cfgsWeapons sort true;
private _tab = "	";
private _newLine = "
";
 _string = "";
for "_i" from 1 to _tabsCount do {
	_string = _string + _tab;
};
{
	_displayName = getTextRaw (_x >> "displayName");
	private _type = getNumber (_x >> "type");
	switch(_type)do
	{
		// Weapons
		case 1: 
		{
			if([configName _x] call BIS_fnc_baseWeapon != configName _x)then{
				systemChat format["non base weapon %1",configName _x];
				continue
			};
			private _magazine = (getArray (_x >> "magazines")) ;
			// Get first word from description short
			private _desc = ((getText (_x >> "descriptionShort")) splitString " ") # 0;
			switch(_desc)do{
				case "Semi-automatic";
				case "Battle";
				case "Assault": {_desc = "EdSubcat_AssaultRifles"};
				case "General";
				case "Light";
				case "Machine": {_desc = "EdSubcat_MachineGuns"};
				case "Bolt";
				case "Marksman";
				case "Sniper": {_desc = "EdSubcat_SniperRifles"};
				case "Shotgun": {_desc = "rhs_EdSubcat_Shotguns"};
				default {_desc = "EdSubcat_SubMachineGuns"};
			};
			
			_string = _string + ([_x,_magazine # 0,_displayName,_desc,"WEAPON"] call _createStringWeapon);
		};
		case 2: 
		{
			if([configName _x] call BIS_fnc_baseWeapon != configName _x)then{
				systemChat format["non base weapon %1",configName _x];
				continue
			};
			private _magazine = (getArray (_x >> "magazines")) ;
			if(_magazine isEqualTo [])then{
				_string = _string + ([_x,"",_displayName,"EdSubcat_Pistols","PISTOL_NOMAG"] call _createStringWeapon);
			}else{
				_string = _string + ([_x,_magazine # 0,_displayName,"EdSubcat_Pistols","PISTOL"] call _createStringWeapon);
			}
		};
		case 3;
		case 4:
		{
			if([configName _x] call BIS_fnc_baseWeapon != configName _x)then{
				diag_log format["non base weapon %1",configName _x];
				continue
			};
			private _magazine = (getArray (_x >> "magazines")) ;
			_string = _string + ([_x,_magazine # 0,_displayName,"EdSubcat_Launchers","LAUNCHER"] call _createStringWeapon);
		};
		// Binocular or NVG
		case 4096:
		{
			if(getNumber (_x >> "useAsBinocular") > 0)then{
				_string = _string + ([_x,_displayName,"Items","EdCat_Equipment","EdSubcat_InventoryItems"] call _createString);

			}else{
				_string = _string + ([_x,_displayName,"Items","EdCat_Equipment","EdSubcat_InventoryItems"] call _createString);
			};
		};
		// Items
		case 131072:
		{
			_type = getNumber (_x >> "ItemInfo" >> "type");
			switch(_type)do
			{
				// Muzzle
				case 101: 
				{
					_string = _string + ([_x,_displayName,"WeaponAccessories","EdCat_WeaponAttachments","EdSubcat_FrontSlot"] call _createString);
				};
				// Optics
				case 201: 
				{
					private _desc = getText(_x >> "ItemInfo" >> "RMBhint");
					private _subcategory = "EdSubcat_TopSlot_Optics";
					private _desc = ((getText (_x >> "descriptionShort")) splitString " ") # 0;
					diag_log format["desc %1 %2",_desc,_x];
					if(_desc isEqualTo "Collimator")then{
						_subcategory = "EdSubcat_TopSlot_Collimators";
					};
					_string = _string + ([_x,_displayName,"WeaponAccessories","EdCat_WeaponAttachments",_subcategory] call _createString);
				};
				// Flashlight
				case 301: 
				{
					_string = _string + ([_x,_displayName,"WeaponAccessories","EdCat_WeaponAttachments","EdSubcat_SideSlot"] call _createString);
				};
				// Bipod
				case 302:
				{
					_string = _string + ([_x,_displayName,"WeaponAccessories","EdCat_WeaponAttachments","EdSubcat_BottomSlot"] call _createString);
				};
				// Heagear
				case 605:
				{
					private _desc = getText(_x >> "descriptionShort");
					private _subcategory = "EdSubcat_Helmets";
					if(_desc == "No Armor")then{
						_subcategory = "EdSubcat_Hats";
					};
					_string = _string + ([_x,_displayName,"ItemsHeadgear","EdCat_Equipment",_subcategory] call _createString);
				};
				// Vests
				case 701:
				{
					_string = _string + ([_x,_displayName,"ItemsHeadgear","EdCat_Equipment","EdSubcat_Vests"] call _createString);
				};
				// Uniforms
				case 801:
				{
					_string = _string + ([_x,_displayName,"ItemsHeadgear","EdCat_Equipment","EdSubcat_Uniforms"] call _createString);
				};
				/*case 131072:
				{
				};*/
				default {
					_string = _string + ([_x,_displayName,"Items","EdCat_Equipment","EdSubcat_InventoryItems"] call _createString);
					//private _subtype = getNumber (_x >> "type");
					systemChat format["%1",configName _x];
				};
			};
		};
		default {
			systemChat format["weap %1",configName _x];
			continue;
		};
	};
	_string = _string + _newLine;
	for "_i" from 1 to _tabsCount do {
		_string = _string + _tab;
	};
}foreach _cfgsWeapons;

private _cfgsMagazines = configProperties [
	configFile >> "CfgMagazines", 
	format["configSourceAddonList _x isEqualTo ['%1'] && ((getNumber (_x >> 'scope') == 2) || (getNumber (_x >> 'scopeCurator') == 2))",_modName], 
	true
];

{
	_displayName = getTextRaw (_x >> "displayName");
	_string = _string + ([_x,_displayName] call _createStringMagazine);
	_string = _string + _newLine;
	for "_i" from 1 to _tabsCount do {
		_string = _string + _tab;
	};
}foreach _cfgsMagazines;

copyToClipboard _string;