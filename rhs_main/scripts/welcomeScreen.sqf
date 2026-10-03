private ["_display","_case","_colorHighlight","_bullet","_message","_yText1","_hText1","_positionTextField","_textField"];
_display = _this select 1 select 0;
_case = _this select 1 select 1;

[_display,"rhs_rscWelcomeScreen"] call bis_fnc_guiEffectTiles;

_colorHighlight = ["GUI", "BCG_RGB"] call BIS_fnc_displayColorGet;
_colorHighlight = _colorHighlight call BIS_fnc_colorRGBtoHTML;

_bullet = "<t size='0.5' color='" + _colorHighlight + "'><img image='A3\Ui_f\data\IGUI\RscIngameUI\RscHint\indent_square' /></t>";
_message = "<br />";

switch _case do {
	case "showWelcome": {
		_message = _message + "<t align='center' size='9' shadow='0'><img image='\rhsafrf\addons\rhs_main\data\rhs_escalation_logo.paa' /></t><br />";
		_message = _message + "<t color='" + _colorHighlight + "'>Welcome to RHS: Escalation Modification</t><br />";
		_message = _message + "The Red Hammer Studios team is very proud to present our first major release for Arma 3 - <t color='" + _colorHighlight + "'>RHS: Escalation</t>!
Under this name we present two totally standalone mods: Armed Forces of the <t color='" + _colorHighlight + "'>Russian Federation</t> and <t color='" + _colorHighlight + "'>United States Armed Forces</t> (if you download them separately and play with both enabled, you are effectively playing Escalation). <br/> This is all just a tiny preview of what is to come from our side, with many nice things and improvements planned for the future.<br /><br />";

		_message = _message + "<t align='center' size='12' shadow='0'><img image='\rhsafrf\addons\rhs_main\data\welcome_screen1.paa' /></t><br />";

		_message = _message + "<t color='" + _colorHighlight + "'>Key features</t><br />";

		_message = _message + _bullet + " Countless new vehicles: tanks, cars, IFVs and APCs for both sides to use, as well as atmospheric objects like radars.<br />";
		_message = _message + _bullet + " Completely new soldier models and dozens of gear objects make for <t color='" + _colorHighlight + "'>over 700 possible unit customization possibilities</t>. Use the supplied virtual ammo crates to quickly make your own custom setups.<br />";
		_message = _message + _bullet + " New weapons and attachments. Have everything at your disposal to take on your enemy.<br />";
		_message = _message + _bullet + " Realism enhancements: full PhysX support and realistic configurations, complex Fire Control Systems for applicable vehicles. New user interface items representing control and awareness systems of vehicles to increase atmosphere and gameplay dynamics. Also our constantly expanding and improved decal system has even migrated to the US side.<br />";
		_message = _message + _bullet + " Fully <t color='" + _colorHighlight + "'>ZEUS</t> compatible.<br />";
		_message = _message + _bullet + " Fully <t color='" + _colorHighlight + "'>ALiVE</t> compatible. Many thanks goes towards ALiVE team making sure RHS Evolution can be enjoyed using ALiVE Framework!<br />";
		_message = _message + _bullet + " Fully <t color='" + _colorHighlight + "'>Task Force Radio</t> compatible. Many thanks to the developers of TFA and their effort making sure everything was in place for you to enjoy it right out of the box! TFA will even contain new radios made in the style of our units!<br />";
		_message = _message + _bullet + " Future-proof: <t color='" + _colorHighlight + "'>sling-loading</t> will work once they make their way to the stable branch. If you are playing on development branch you should have these features enabled already! <t color='" + _colorHighlight + "'>FFV</t> will come later as releasing it now would cause problems for those of you playing on the stable branch.<br />";
		_message = _message + _bullet + " Many many more....<br />";

		_message = _message + "<t align='center' size='8' shadow='0'><img image='\rhsafrf\addons\rhs_main\data\welcome_screen2.paa' /></t><br />";

		_message = _message + "<t color='" + _colorHighlight + "'>Wiki</t><br />";
		_message = _message + "Planning to make a mission? Need some classnames or explanation of Fire Control Systems? Don't forget to check our wiki page.<br /><br />";
		_message = _message + _bullet + " http://doc.rhsmods.org/<br />";

		_message = _message + "<t align='center' size='8' shadow='0'><img image='\rhsafrf\addons\rhs_main\data\welcome_screen3.paa' /></t><br />";

		_message = _message + "<t color='" + _colorHighlight + "'>What's next...</t><br />";
		_message = _message + "Too see what wee are planning check our facebook page <t color='" + _colorHighlight + "'>www.fb.com/redhammerstudios</t> or at <t color='" + _colorHighlight + "'>Bohemia Interactive Forums</t><br />";
		_message = _message + "If you like what we are doing don't forget to leave comment and support us at MANW contest!<br /><br />";
		_message = _message + "You sincerely RHS team.<br /><br />";
	};
};

_textField = _display displayCtrl 1100;
_textField ctrlSetStructuredText (parseText _message);
_positionTextField = ctrlPosition _textField;
_yText1 = _positionTextField select 1;
_hText1 = ctrlTextHeight _textField;

_textField ctrlSetPosition [_positionTextField select 0, _yText1, _positionTextField select 2, _hText1];
_textField ctrlcommit 0;