/*
	Add radar to global array of radars [ RHS_Radars ]
	Used for RWR detection

	a: reyhard
*/
params["_v"];


if(isNil "RHS_Radars")then{
	RHS_Radars = [_v];
}else{
	RHS_Radars pushBack _v;
};