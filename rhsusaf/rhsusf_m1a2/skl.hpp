
	class Default
	{
		isDiscrete = 1;
		skeletonInherit = "";
		skeletonBones[] = {};
	};

	class Vehicle: Default {};

	// all vehicles have damage and internal things
	class rhs_vehicle : Vehicle
	{
		skeletonInherit = "Vehicle";
		skeletonBones[] = 
		{
			"damageHide","",
			"ukaz_rychlo","",
			"ukaz_rychlo2","",
			"ukaz_rpm","",
			"ukaz_radar","",
			"hodinova","",
			"minutova","",
			"kompas","",
			"ukazsmer",""
		};
	};

	// all tracked have rollers
	class rhs_tracked : rhs_vehicle
	{
		skeletonInherit = "rhs_vehicle";
		skeletonBones[] = 
		{
			"kolL1","",
			"kolL2","",
			"kolL3","",
			"kolL4","",
			"kolL5","",
			"kolL6","",
			"kolL7","",
			"kolL8","",
			"kolP1","",
			"kolP2","",
			"kolP3","",
			"kolP4","",
			"kolP5","",
			"kolP6","",
			"kolP7","",
			"kolP8","",
			"podkoloL1","",
			"podkoloL2","",
			"podkoloL3","",
			"podkoloL4","",
			"podkoloL5","",
			"podkoloL6","",
			"podkoloL7","",
			"podkoloL8","",
			"podkoloP1","",
			"podkoloP2","",
			"podkoloP3","",
			"podkoloP4","",
			"podkoloP5","",
			"podkoloP6","",
			"podkoloP7","",
			"podkoloP8","",
			"koloL1","podkoloL1",
			"koloL2","podkoloL2",
			"koloL3","podkoloL3",
			"koloL4","podkoloL4",
			"koloL5","podkoloL5",
			"koloL6","podkoloL6",
			"koloL7","podkoloL7",
			"koloL8","podkoloL8",
			"koloP1","podkoloP1",
			"koloP2","podkoloP2",
			"koloP3","podkoloP3",
			"koloP4","podkoloP4",
			"koloP5","podkoloP5",
			"koloP6","podkoloP6",
			"koloP7","podkoloP7",
			"koloP8","podkoloP8",
			"podkoloL1_hide","podkoloL1",
			"podkoloL2_hide","podkoloL2",
			"podkoloL3_hide","podkoloL3",
			"podkoloL4_hide","podkoloL4",
			"podkoloL5_hide","podkoloL5",
			"podkoloL6_hide","podkoloL6",
			"podkoloL7_hide","podkoloL7",
			"podkoloL8_hide","podkoloL8",
			"podkoloP1_hide","podkoloP1",
			"podkoloP2_hide","podkoloP2",
			"podkoloP3_hide","podkoloP3",
			"podkoloP4_hide","podkoloP4",
			"podkoloP5_hide","podkoloP5",
			"podkoloP6_hide","podkoloP6",
			"podkoloP7_hide","podkoloP7",
			"podkoloP8_hide","podkoloP8",
			"poklop_commander","OtocVez",
			"poklop_gunner","OtocVez",
			"damageVez","OtocVez",
			"zasleh","otocHlaven",
			"recoilHlaven",	"otocHlaven",
			"zasleh2","commander_gun",
			"OtocHlaven","OtocVez",

			"commander_turret","OtocVez",
			"commander_gun","commander_turret",

			"damagegun","recoilHlaven",
			"damagevez","otocvez",
			"ejectport","otocvez",
			"irlamp","otocvez",
			"turretera","otocvez"
		};
	};
