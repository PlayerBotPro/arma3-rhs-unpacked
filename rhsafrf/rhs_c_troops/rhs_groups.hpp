class CfgGroups
{
	class East
	{
		class rhs_faction_msv
		{
			name = "$STR_RHS_FAC_MSV";
			#include "groups\msv_infantry.hpp"
			#include "groups\msv_infantry_emr.hpp"
			#include "groups\msv_infantry_ural.hpp"
			#include "groups\msv_infantry_gaz66.hpp"
			#include "groups\msv_infantry_btr70.hpp"
			#include "groups\msv_infantry_btr80.hpp"
			#include "groups\msv_infantry_btr80a.hpp"
			#include "groups\msv_infantry_bmp1.hpp"
			#include "groups\msv_infantry_bmp2.hpp"
			#include "groups\msv_infantry_bmp3.hpp"
			#include "groups\msv_infantry_bmp3m.hpp"
			#include "groups\msv_arty_bm21.hpp"		
		};

		class rhs_faction_tv
		{
			name = "$STR_RHS_FAC_TV";
			#include "groups\tv_tanks_t14.hpp"
			#include "groups\tv_tanks_t72.hpp"
			#include "groups\tv_tanks_t80.hpp"
			#include "groups\tv_tanks_t90.hpp"
			#include "groups\tv_tanks_2s1.hpp"
			#include "groups\tv_tanks_2s3.hpp"
				
		};
		class rhs_faction_vdv
		{
			name = "$STR_RHS_FAC_VDV";
			#include "groups\vdv_infantry.hpp"
			#include "groups\vdv_infantry_des.hpp"
			#include "groups\vdv_infantry_flora.hpp"
			#include "groups\vdv_infantry_mflora.hpp"
			#include "groups\vdv_infantry_recon.hpp"
			#include "groups\vdv_infantry_ural.hpp"
			#include "groups\vdv_infantry_gaz66.hpp"
			#include "groups\vdv_infantry_btr60.hpp"
			#include "groups\vdv_infantry_btr70.hpp"
			#include "groups\vdv_infantry_btr80.hpp"
			#include "groups\vdv_infantry_btr80a.hpp"
			#include "groups\vdv_infantry_bmp1.hpp"
			#include "groups\vdv_infantry_bmp2.hpp"
			#include "groups\vdv_infantry_bmd1.hpp"
			#include "groups\vdv_infantry_bmd2.hpp"
			#include "groups\vdv_infantry_bmd4.hpp"
			#include "groups\vdv_infantry_bmd4m.hpp"
			#include "groups\vdv_infantry_bmd4ma.hpp"
			#include "groups\vdv_air_infantry_mi8.hpp"
			#include "groups\vdv_air_infantry_mi24.hpp"
			#include "groups\vdv_arty_bm21.hpp"
			#include "groups\vdv_tanks_2s25.hpp"
				
		};

		class rhs_faction_vmf
		{
			name = "Russia (VMF)";
			#include "groups\vmf_infantry.hpp"
			#include "groups\vmf_infantry_recon.hpp"			
			#include "groups\vmf_infantry_bmp2.hpp"
			#include "groups\vmf_infantry_btr80.hpp"	
		};
/*
		class rhs_group_rus_VVS
		{
			name = "$STR_RHS_FAC_VVS";
			#include "groups\vvs_plane_su25.hpp"
		};*/
	};
};