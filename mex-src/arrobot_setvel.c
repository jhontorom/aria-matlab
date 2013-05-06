

/* MEX function for Matlab */

#include "mex.h"
#include "ariac.h"


void mexFunction(int nlhs, mxArray *plhs[], int nrhs, const mxArray *prhs[])
{
    double *p;
	if(nrhs != 1) {
		mexErrMsgIdAndTxt("arrobot_setvel", "One input required.");
		return;
	}
    p = mxGetPr(prhs[0]);
    //mexPrintf("arrobot_setvel mex function: got 0x%x -> %f\n", p, *p);
    arrobot_setvel(*p);
}
	