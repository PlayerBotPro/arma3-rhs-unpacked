
class CfgHints
{
	class RHS_USAF
	{
		displayName = "RHS: USAF";
		class RHS_USAF_MAIN
		{
			displayName = "United States Armed Forces";
			displayNameShort = "";
			description = "United States Armed Forces brought to Arma 3 in full glory!<br/><br/>USAF focuses on United States military equipment from 2010 to present. Dozens of vehicles, units, and weapons, all modeled and textured with the finest details and packed with features.<br/><br/>For more information please visit our frequently asked questions page at <a href='http://www.rhsmods.org/faq'>www.rhsmods.org/faq</a> and our wiki at <a href='http://www.rhsmods.org/w'>www.rhsmods.org/w</a>. For bug reports and feature requests please visit our feedback tracker at <a href='http://feedback.rhsmods.org/'>www.feedback.rhsmods.org</a>.<br/><br/><a href='http://www.rhsmods.org/'>www.rhsmods.org</a>";
			image = "\rhsusf\addons\rhsusf_main\data\rhs_logobig_ca.paa";
			arguments[] = {};
		};
		class RHS_USAF_AMMO
		{
			displayName = "Ammunition Acronyms";
			displayNameShort = "";
			description = "AP - Armor Piercing<br/>AP-T - Armor Piercing Tracer<br/>AP-I - Armor Piercing Incendiary<br/>APHE - Armour Piercing High Explosive<br/>APBC - Armour Piercing Ballistic Capped<br/>APCR - Armour Piercing Composite Rigid<br/>APDS - Armour Piercing Discarding Sabot<br/>APFSDS - Armour Piercing Fin Stabilised Discarding Sabot<br/>HE - High-explosive<br/>HE-T - High Explosive Tracer<br/>HE-I - High Explosive Incendiary<br/>HEAT - High Explosive Anti Tank<br/>";
			image = "\a3\ui_f\data\gui\cfg\Hints\ammotype_ca.paa";
			arguments[] = {};
		};
		class RHS_USAF_TVM
		{
			displayName = "A-10A Missile Guidance";
			displayNameShort = "Using the TVM to lock the AGM-65...";
			description = "Targeting guided missiles in the A-10A is achieved through the television monitor (TVM) which provides a direct video feed from seeker located in the nose of the AGM-65 to the pilot of the aircraft. Essentially, you see exactly what the missile sees.<br/><br/>In order to use the TVM, switch weapons to an AGM-65 Maverick variant and press the %11 key to look through the TVM. Upon looking through the TVM, %3you will see a blank screen on the TVM%4. This is normal. In order to activate the TVM, you need to turn on the thermal seeker in the AGM-65 by pressing the %12 key. Once activated, the TVM should now function like any other targeting camera in Arma 3 with a few small differences:<br/><br/>1. While not looking directly through the TVM camera, the seeker of the Maverick can be slewed around the HUD and TVM using the user 15-18 keys. If you have those keys bound, you will see them mapped below:<br/>%2Move seeker left (User 15): %13<br/>%2Move seeker right (User 16): %14<br/>%2Move seeker up (User 17): %15<br/>%2Move seeker down (User 18): %16<br/><br/>2. Within the TVM, there is a cross that moves across the screen as the seeker moves around. This cross tells the pilot where the AGM-65 seeker is pointed in relation to the direction of the aircraft. When the cross reaches the edge of the TVM, that means the seeker has reached the gimbal limit of the seeker head. In addition, after pressing the stabilize turret key (%17), the cross will begin flashing to indicate that the camera/seeker is successfully locked and stabilized to the terrain it is pointing at.<br/><br/>3. With only one AGM-65 left, the camera feed will immediately cut as soon as the missile is fired. Since the seeker in the missile is what is acting as the camera for the pilot, once the missile leaves the rail, there is nothing left to serve as a feed for the TVM. For this reason, it is sometimes wise to save a single AGM-65 as an emergency only weapon, just so the pilot has a camera to spot and target ground vehicles with.";
			image = "\a3\ui_f_jets\data\gui\cfg\hints\AircraftTgtCamera_ca.paa";
			arguments[] = {{{"pilotCamera"}},{{"nightVision"}},{{"User15"}},{{"User16"}},{{"User17"}},{{"User18"}},{{"vehLockTurretView"}}};
		};
	};
};