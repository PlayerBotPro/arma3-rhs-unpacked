
#define GROUNDHOLDER_MACRO(nameN,dispName,classN,EdClassN,EdSubClassN) \
	class Item_##nameN## : Item_Base_F {\
			scope = 1;\
			scopeCurator = 0;\
			displayName = ##dispName##;\
			AUTHOR_MACRO \
			vehicleClass = ##classN##;\
			editorCategory = ##EdClassN##;\
			editorSubcategory = ##EdSubClassN##;\
			model = \A3\Weapons_f\dummyweapon.p3d;\
			class TransportItems {\
				class ##nameN## {\
				name = ##nameN##;\
				count = 1;\
			};\
		};\
	};


GROUNDHOLDER_MACRO(rhs_uniform_msv_emr,"$STR_RHS_EMRSUMMERMSV_NAME",ItemsHeadgear,EdCat_Equipment,EdSubcat_Uniforms)