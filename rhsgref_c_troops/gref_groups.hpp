class CfgGroups
{
	class West
	{
		class rhsgref_faction_cdf_ground_b
		{
			name = "Chernarus (Ground Forces)";

			#include "groups\cdf_b_reg_arty_bm21.hpp"
			#include "groups\cdf_b_reg_infantry.hpp"
			#include "groups\cdf_b_reg_infantry_bmp1.hpp"
			#include "groups\cdf_b_reg_infantry_bmp2.hpp"
			#include "groups\cdf_b_reg_infantry_btr70.hpp"
			#include "groups\cdf_b_reg_infantry_btr60.hpp"
			#include "groups\cdf_b_reg_infantry_ural.hpp"
			#include "groups\cdf_b_reg_infantry_gaz66.hpp"
			#include "groups\cdf_b_reg_infantry_uaz.hpp"
			#include "groups\cdf_b_para_infantry.hpp"
			#include "groups\cdf_b_para_infantry_bmd1.hpp"
			#include "groups\cdf_b_para_infantry_bmd2.hpp"
			#include "groups\cdf_b_para_infantry_gaz66.hpp"
			#include "groups\cdf_b_tanks_t72.hpp"
			#include "groups\cdf_b_tanks_t80.hpp"
		};

		class rhsgref_faction_hidf
		{
			name = "Horizon Islands Defence Force";

			#include "groups\hidf_infantry.hpp"
			#include "groups\hidf_infantry_hmmwv.hpp"
			#include "groups\hidf_infantry_m113.hpp"
		};
	};
	class Indep
	{
		class rhsgref_faction_cdf_ground
		{
			name = "Chernarus (Ground Forces)";

			#include "groups\cdf_reg_arty_bm21.hpp"
			#include "groups\cdf_reg_infantry.hpp"
			#include "groups\cdf_reg_infantry_bmp1.hpp"
			#include "groups\cdf_reg_infantry_bmp2.hpp"
			#include "groups\cdf_reg_infantry_btr70.hpp"
			#include "groups\cdf_reg_infantry_btr60.hpp"
			#include "groups\cdf_reg_infantry_ural.hpp"
			#include "groups\cdf_reg_infantry_gaz66.hpp"
			#include "groups\cdf_reg_infantry_uaz.hpp"
			#include "groups\cdf_para_infantry.hpp"
			#include "groups\cdf_para_infantry_bmd1.hpp"
			#include "groups\cdf_para_infantry_bmd2.hpp"
			#include "groups\cdf_para_infantry_gaz66.hpp"
			#include "groups\cdf_tanks_t72.hpp"
			#include "groups\cdf_tanks_t80.hpp"
		};

		class rhsgref_faction_cdf_ng
		{
			name = "Chernarus (National Guard)";
			#include "groups\cdf_ngd_infantry.hpp"
		};

		class rhsgref_faction_nationalist
		{
			name = "Nationalist Militia";

			#include "groups\nat_infantry.hpp"
			#include "groups\nat_infantry_ural.hpp"
			#include "groups\nat_infantry_uaz.hpp"
			#include "groups\nat_infantry_btr70.hpp"
		};
		class rhsgref_faction_chdkz_g
		{
			name = "ChDKZ Insurgents";

			#include "groups\chdkz_g_infantry.hpp"
			#include "groups\chdkz_g_arty_bm21.hpp"
			#include "groups\chdkz_g_infantry_bmd1.hpp"
			#include "groups\chdkz_g_infantry_bmd2.hpp"
			#include "groups\chdkz_g_infantry_bmp1.hpp"
			#include "groups\chdkz_g_infantry_bmp2.hpp"
			#include "groups\chdkz_g_infantry_btr70.hpp"
			#include "groups\chdkz_g_infantry_btr60.hpp"
			#include "groups\chdkz_g_infantry_ural.hpp"
			#include "groups\chdkz_g_infantry_gaz66.hpp"
			#include "groups\chdkz_g_infantry_uaz.hpp"
			#include "groups\chdkz_g_tanks_t72.hpp"
		};
		class rhsgref_faction_tla_g
		{
			name = "Tanoan Liberation Army";
			
			#include "groups\tla_g_infantry.hpp"
		};
	};

	class East
	{
		class rhsgref_faction_chdkz
		{
			name = "ChDKZ Insurgents";

			#include "groups\chdkz_infantry.hpp"
			#include "groups\chdkz_arty_bm21.hpp"
			#include "groups\chdkz_infantry_bmd1.hpp"
			#include "groups\chdkz_infantry_bmd2.hpp"
			#include "groups\chdkz_infantry_bmp1.hpp"
			#include "groups\chdkz_infantry_bmp2.hpp"
			#include "groups\chdkz_infantry_btr70.hpp"
			#include "groups\chdkz_infantry_btr60.hpp"
			#include "groups\chdkz_infantry_ural.hpp"
			#include "groups\chdkz_infantry_gaz66.hpp"
			#include "groups\chdkz_infantry_uaz.hpp"
			#include "groups\chdkz_tanks_t72.hpp"
		};

		class rhsgref_faction_tla
		{
			name = "Tanoan Liberation Army";
			
			#include "groups\tla_infantry.hpp"
		};

	};
};