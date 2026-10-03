
class CfgHints
{
	class RHS_AFRF
	{
		displayName = "RHS: AFRF";
		class RHS_AFRF_MAIN
		{
			displayName = "Armed Forces of the Russian Federation";
			displayNameShort = "";
			description = "Armed Forces of the Russian Federation brought to Arma 3 in full glory!<br/><br/>AFRF focuses on Russian military equipment from the mid-2000s to present. Dozens of vehicles, units, and weapons, all modelled and textured with the finest details and packed with features.<br/><br/>For more information please visit our frequently asked questions page at <a href='http://www.rhsmods.org/faq'>www.rhsmods.org/faq</a> and our wiki at <a href='http://www.rhsmods.org/w'>www.rhsmods.org/w</a>. For bug reports and feature requests please visit our feedback tracker at <a href='http://feedback.rhsmods.org/'>www.feedback.rhsmods.org</a>.<br/><br/><a href='http://www.rhsmods.org/'>www.rhsmods.org</a>";
			image = "\rhsafrf\addons\rhs_main\data\rhs_logobig_ca.paa";
			arguments[] = {};
		};
		class RHS_AFRF_AMMO
		{
			displayName = "Ammunition Acronyms";
			displayNameShort = "";
			description = "AP - Armor Piercing<br/>AP-T - Armor Piercing Tracer<br/>AP-I - Armor Piercing Incendiary<br/>APHE - Armour Piercing High Explosive<br/>APBC - Armour Piercing Ballistic Capped<br/>APCR - Armour Piercing Composite Rigid<br/>APDS - Armour Piercing Discarding Sabot<br/>APFSDS - Armour Piercing Fin Stabilised Discarding Sabot<br/>HE - High-explosive<br/>HE-T - High Explosive Tracer<br/>HE-I - High Explosive Incendiary<br/>HEAT - High Explosive Anti Tank<br/>";
			image = "\a3\ui_f\data\gui\cfg\Hints\ammotype_ca.paa";
			arguments[] = {};
		};
		class RHS_AFRF_AUTOLOADER
		{
			displayName = "Autoloaders";
			displayNameShort = "";
			description = "Use the FCS with the target key (by default T). When available, the binoculars key (by default B) open's the ballistic computer window where you can set manually the firing values (can be closed with ESC). The handbrake key (by default X) switch the kind of round that will be loaded next. The grenade key (by default G) erase the automatic lead calculation.<br/><br/>Selector translations:<br/><br/>О - High Explosive<br/>Б - Armor Piercing<br/>К - High Explosive Anti Tank<br/>У - Anti Tank Guided Missile";
			image = "\a3\ui_f\data\gui\cfg\Hints\firemode_ca.paa";
			arguments[] = {};
		};
		class RHS_AFRF_GROUNDRADAR
		{
			displayName = "Ground Radar";
			description = "The BRM-1K is equipped with a PSNR-5K 'Tall Mike' ground surveillance radar. The radar can be accesssed from the commander position via the action menu. Radar information is displayed on the map.<br/><br/>For more information please visit the wiki page at <a href='http://www.rhsmods.org/w/brm1k'>http://www.rhsmods.org/w/brm1k</a>";
			displayNameShort = "";
			image = "\a3\ui_f\data\gui\cfg\hints\Radar_ca.paa";
			arguments[] = {};
		};
		class RHS_AFRF_SHTORA
		{
			displayName = "SHTORA Protection System";
			description = "The T-90/T-90A/T-80UK is equipped with the SHTORA-1 protection system. When active it automatically detects and protects against beam guided anti-tank weapons systems such as the TOW ATGM. The system can be controlled from the commander position via the action menu.<br/><br/>For more information please visit the wiki page at <a href='http://www.rhsmods.org/w/t90'>http://www.rhsmods.org/w/t90</a>";
			displayNameShort = "";
			image = "\a3\ui_f\data\gui\cfg\hints\Designator_ca.paa";
			arguments[] = {};
		};
		class RHS_AFRF_RETREAD
		{
			displayName = "Spare Tyres";
			description = "Spare tyres can be used to replace damaged or destroyed wheels. To change a damaged wheel you have to be standing near the wheel and use the action menu on it. Once used the spare tyre will be unavailable until the vehicle is fully repaired.";
			displayNameShort = "";
			image = "\a3\ui_f\data\gui\cfg\hints\VehicleRepair_CA.paa";
			arguments[] = {};
		};
		class RHS_AFRF_KLENPS
		{
			displayName = "Su-25 Missile Guidance";
			displayNameShort = "Using the Klen-PS laser designator...";
			description = "The base model Su-25 in RHS is capable of launching several types of laser guided missiles such as the Kh-25, Kh-29, and S-25L. However, unlike default Arma 3 aircraft which use targeting cameras that people familiar with western aircraft might be used to, the basic model Su-25 in RHS has no such system in the real world or in game. Instead, it uses the Klen-PS laser designator located in the nose of the Su-25. Rather than being aimed by a camera, the Klen-PS is aimed through a crosshair located on the HUD whcih the pilot can move and lock to a specific point on the ground in front of the aircraft. The following is a basic firing proceedure using the Klen-PS:<br/><br/><br/><br/><br/>1. With the nose of the aircraft pointed at a target, press the %11 key to turn on the Klen-PS laser. Once the laser is active, a green light located to the bottom left of the HUD will turn on.<br/><br/>2. With the laser now active, the targeting reticle can be locked to a specific point on the ground via the %12 key and moved around the HUD via the user 15-18 keybindings. If those keys are bound, they will show up below:<br/>%2Move reticle left (User 15): %13<br/>%2Move reticle right (User 16): %14<br/>%2Move reticle up (User 17): %15<br/>%2Move reticle down (User 18): %16<br/><br/>3. With the laser locked to the ground and/or pointed at the target, fire a guided missile. Continue pointing the nose of the aircraft in the general direction of the target until the missile impacts the target. Moving the nose of the aircraft beyond the gimbal limit of the laser designator will cause the Klen-PS to lose its lock on the targeted point.<br/><br/>4. After the missile has impacted the target, it is %3extremely important%4 to turn off the Klen-PS laser by pressing the %11 key again. The laser on the Klen-PS can only stay on for a maximum of 60 seconds, but it requires a cool down period that is directly proportional to how long the laser has been active. The cool down period can be anywhere between 15 seconds and 1 minute, depending on how long the laser was active.<br/><br/><br/><br/><br/>For a more detailed walkthrough and other information, please visit the <a href='http://www.rhsmods.org/w/su25'>Su-25 Wiki page on the RHS website</a>.";
			image = "\a3\ui_f\data\gui\cfg\hints\Designator_ca.paa";
			arguments[] = {{{"vehLockTargets"}},{{"vehLockTurretView"}},{{"User15"}},{{"User16"}},{{"User17"}},{{"User18"}}};
		};
	};
	class RHS_Towing
	{
		displayName = "RHS: Towing";
		class RHS_AFRF_Towing_Prepare
		{
			displayName = "Preparing heavy weapon";
			description = "To prepare heavy weapon for towing or dragging:%1%2Get close to the heavy weapon%1Make sure heavy weapon has no crew%1%2Select %3<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' /> Switch to moving mode%4 from action menu";
			tip = "Vehicle can be switched to static mode in a same way by selecting %3<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\loadVehicle_ca.paa' /> Switch to static mode%4";
			logicalOrder = 1;
			image = "\rhsafrf\addons\rhs_main\data\hints\rhs_towing_prepare_ca.paa";
			arguments[] = {};
		};
		class RHS_AFRF_Towing_Attach
		{
			displayName = "Attaching heavy weapon";
			description = "To attach heavy weapon:%1%2Make sure that heavy weapon is in %3<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' />Moving Mode%4. %1%2Get close to hitch point of heavy weapon%1%2Select %3<img image='\rhsafrf\addons\rhs_main\data\actions\rhs_tow_attach_ca.paa' size='1.5'/> Select towing vehicle%4 from action menu%1%2Locate %3<img image='\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_loadDevice_ca.paa'/> Attach Point%4 on target vehicle%1%2Confirm selection by activating %3<img image='\a3\ui_f\data\IGUI\Cfg\holdactions\holdAction_loadDevice_ca.paa'/> Attach vehicle%4 action on target vehicle by holding %11.%1%1If there are no valid vehicles in 5 meters radius you will see a hint informing you about it after selecting %3<img image='\rhsafrf\addons\rhs_main\data\actions\rhs_tow_attach_ca.paa'  size='1.5'/> Select towing vehicle%4 action";
			tip = "Towing functionality requires per vehicle configuration so it might not work with all assets in game.";
			logicalOrder = 2;
			image = "\rhsafrf\addons\rhs_main\data\hints\rhs_towing_attach_ca.paa";
			arguments[] = {{{"Action"}}};
		};
		class RHS_AFRF_Towing_Detach
		{
			displayName = "Detaching heavy weapon";
			description = "To detach heavy weapon:%1%2Get close to the heavy weapon.%1%2Select %3<img image='\rhsafrf\addons\rhs_main\data\actions\rhs_tow_detach_ca.paa' size='1.5' />Detach vehicle%4 from the action menu.";
			logicalOrder = 3;
			image = "\rhsafrf\addons\rhs_main\data\hints\rhs_towing_detach_ca.paa";
			arguments[] = {};
		};
		class RHS_AFRF_Towing_Dragging
		{
			displayName = "Dragging heavy weapon";
			description = "Beside towing vehicles, player are also able to drag heavy weapons to desired place. To drag heavy weapon:%1%2Make sure that heavy weapon is in %3<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\unloadVehicle_ca.paa' />Moving Mode%4.%1%2Select %3<img image='\a3\Ui_f\data\IGUI\Cfg\Actions\ladderup_ca.paa' /> <t color='#00FF7F'>Drag heavy weapon</t>%4 from action menu when looking at heavy weapon hitch point.%1%2Start dragging weapon by moving backwards with %12 key%1%1To stop dragging heavy weapon:%1%2Select %3Stop dragging%4 from the action menu.";
			tip = "If your character cannot move, try to change moving pace with %11 key.";
			logicalOrder = 4;
			image = "\rhsafrf\addons\rhs_main\data\hints\rhs_towing_dragging_ca.paa";
			arguments[] = {{{"TactToggle"}},{{"MoveBack"}}};
		};
	};
};