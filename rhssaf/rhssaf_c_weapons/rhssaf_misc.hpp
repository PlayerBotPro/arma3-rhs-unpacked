#define INVENTORY_CATEGORY accessories
	class Binocular;
	class rhssaf_zrak_rd7j: Binocular
	{
		SCOPE_PUBLIC;
		DLC_AUTHOR;
		opticsDisablePeripherialVision = 1;
		weaponPoolAvailable = 1;
		simulation = "Binocular";
		model = "\rhssaf\addons\rhssaf_binoculars\zrak_rd7j\rhssaf_zrak_rd7j";
		modelOptics = "rhssaf\addons\rhssaf_binoculars\zrak_rd7j\rhssaf_zrak_rd7j_reticle";
		opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
		visionMode[] = {"Normal"};
		INVENTORY_PICTURE(rhssaf_zrak_rd7j)
		displayName = $STR_ITEM_RHSSAF_ZRAK_RD7J_DISPLAYNAME;
		optics = 1;
		forceOptics = 0;
		useAsBinocular = 1;
		primary = 0;
		opticsZoomMin = 0.03125;
		opticsZoomMax = 0.0625;
		opticsZoomInit = 0.0625;
		minRange = 150;
		midRange = 500;
		maxRange = 2500;
		magazines[] = {};
		descriptionShort = "Magnification: 8x";
		class WeaponSlotsInfo
		{
			mass = 10;
		};
	};
