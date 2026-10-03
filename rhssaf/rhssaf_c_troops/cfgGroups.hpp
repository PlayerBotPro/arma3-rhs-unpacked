class CfgGroups
{
	class Indep
	{
		class rhssaf_faction_army
		{
			name = $STR_RHSSAF_FAC_ARMY;
			#include "groups\rhssaf_army_infantry_m10_groups.hpp"
			#include "groups\rhssaf_army_infantry_m93_groups.hpp"
			#include "groups\rhssaf_army_infantry_para_groups.hpp"
			#include "groups\rhssaf_army_motorized_groups_hmmwv.hpp"
			#include "groups\rhssaf_army_motorized_groups_ural.hpp"
			//#include "groups\rhssaf_army_mechanized_groups_btr.hpp"
			#include "groups\rhssaf_army_mechanized_groups_t72s.hpp"
		};
		class rhssaf_faction_un
		{
			name = $STR_RHSSAF_FAC_UN;
			#include "groups\rhssaf_un_infantry_groups.hpp"
			#include "groups\rhssaf_un_motorized_groups_uaz.hpp"
			#include "groups\rhssaf_un_motorized_groups_ural.hpp"
		};
	};
	
	class East
	{
		class rhssaf_faction_army_opfor
		{
			name = $STR_RHSSAF_FAC_ARMY;
			#include "groups\rhssaf_army_infantry_m10_groups_o.hpp"
			#include "groups\rhssaf_army_infantry_m93_groups_o.hpp"
			#include "groups\rhssaf_army_infantry_para_groups_o.hpp"
			#include "groups\rhssaf_army_motorized_groups_hmmwv_o.hpp"
			#include "groups\rhssaf_army_motorized_groups_ural_o.hpp"
			#include "groups\rhssaf_army_mechanized_groups_t72s_o.hpp"
		};
	};
};
