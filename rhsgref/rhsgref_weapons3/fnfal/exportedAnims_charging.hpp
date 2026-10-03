#define TOTAL_FRAMES 145
#define FRAME(fr) (fr/TOTAL_FRAMES)
#define TRANSFORM_TRANSLATION(obj_name,frame_no,length,aDirX,aDirY,aDirZ) \
class ##obj_name##_trans_##frame_no## \
{\
	type		= direct;\
	source		= reloadMagazine.0;\
	selection	= obj_name##_base;\
	axisPos[]	= {0,0,0};\
	axisDir[]	= {-aDirX,-aDirY,aDirZ};\
	angle		= 0;\
	axisOffset	= -length;\
	minValue	= (frame_no-1)/TOTAL_FRAMES;\
	maxValue	= (frame_no)/TOTAL_FRAMES;\
};
#define TRANSFORM_ROTATION(obj_name,frame_no,rotAng,aPosX,aPosY,aPosZ,aDirX,aDirY,aDirZ) \
class ##obj_name##_rot_##frame_no## \
{\
	type		= direct;\
	source		= reloadMagazine.0;\
	selection	= obj_name;\
	axisPos[]	= {aPosX,aPosY,aPosZ};\
	axisDir[]	= {-aDirX,-aDirY,aDirZ};\
	angle		= rotAng;\
	axisOffset	= 0;\
	minValue	= (frame_no-1)/TOTAL_FRAMES;\
	maxValue	= (frame_no)/TOTAL_FRAMES;\
};
 TRANSFORM_TRANSLATION(charging_handle,110,0.00117,0.01172,0,0)
 TRANSFORM_TRANSLATION(charging_handle,111,0.00352,0.03517,0,0)
 TRANSFORM_TRANSLATION(charging_handle,112,0.00586,0.05862,0,0)
 TRANSFORM_TRANSLATION(charging_handle,113,0.00821,0.08206,0,0)
 TRANSFORM_TRANSLATION(charging_handle,114,0.01055,0.10551,0,0)
 TRANSFORM_TRANSLATION(charging_handle,115,0.0129,0.12895,0,0)
 TRANSFORM_TRANSLATION(charging_handle,116,0.01524,0.1524,0,0)
 TRANSFORM_TRANSLATION(charging_handle,117,0.01758,0.17585,0,0)
 TRANSFORM_TRANSLATION(charging_handle,118,0.01993,0.1993,0,0)
 TRANSFORM_TRANSLATION(charging_handle,119,0.02227,0.22274,0,0)
 TRANSFORM_TRANSLATION(charging_handle,128,0.0301,-0.30096,0,0)
 TRANSFORM_TRANSLATION(charging_handle,129,0.05463,-0.54633,0,0)
 TRANSFORM_TRANSLATION(charging_handle,130,0.02929,-0.29294,0,0)