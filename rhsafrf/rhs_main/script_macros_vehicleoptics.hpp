// vehicle optics macros

#define RHS_OPTICS_DEFAULT opticsZoomMin = 0.25; opticsZoomMax = 1.1; opticsZoomInit = 0.5
#define RHS_OPTICS_REMOVE RHS_OPTICS_DEFAULT; optics = 1; modelOptics = "-"

#define RHS_SCOPE_BLUR1 opticsPPEffects[] = {"TankGunnerOptics1","OpticsBlur1","OpticsCHAbera1"}
#define RHS_SCOPE_BLUR2 opticsPPEffects[] = {"TankGunnerOptics1","OpticsBlur2","OpticsCHAbera2"}
#define RHS_SCOPE_BLUR3 opticsPPEffects[] = {"TankGunnerOptics1","OpticsBlur3","OpticsCHAbera3"}
#define RHS_NO_SCOPE_BLUR opticsPPEffects[] = {}

#define RHS_OpticsZoom_1_5x	opticsZoomMin = 0.140000; opticsZoomMax = 0.140000; opticsZoomInit = 0.140000

#define RHS_modelOptics_bpk142 modelOptics = "\rhsafrf\addons\rhs_optics\vehicles\rhs_bpk142"
#define RHS_modelOptics_bpk142n modelOptics = "\rhsafrf\addons\rhs_optics\vehicles\rhs_bpk142n"