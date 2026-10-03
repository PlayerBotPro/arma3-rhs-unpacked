
#define INVENTORY_CATEGORY facewear
class CfgGlasses
{
    class G_Balaclava_blk;    // External class reference

	class rhssaf_veil_Green: G_Balaclava_blk
	{
		INVENTORY_PICTURE(rhssaf_veil_Green)
		DLC_AUTHOR;
		SCOPE_PUBLIC;
		displayname = "Veil Mask";
		model = "\rhssaf\addons\rhssaf_m_headgear_veil\rhssaf_veil";

		hiddenSelections[] = {"camo_veil"};
		hiddenSelectionsTextures[] = {"\rhssaf\addons\rhssaf_t_headgear_veil\data\rhssaf_veil_green_co.paa"};
	};
};