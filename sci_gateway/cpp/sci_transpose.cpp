// Copyright (C) 2019 - IIT Bombay - FOSSEE
//
// This file must be used under the terms of the CeCILL.
// This source file is licensed as described in the file COPYING, which
// you should have received as part of this distribution.  The terms
// are also available at
// http://www.cecill.info/licences/Licence_CeCILL_V2-en.txt
// Author: Rupak Rokade
// Organization: FOSSEE, IIT Bombay
// Email: toolbox@scilab.in

//Written by:
//Sharvani Laxmi Somayaji

extern "C"
{
#include<Scierror.h>
#include<api_scilab.h>
#include <stdio.h>
#include "localization.h"
#include "trans.h"




static const char fname[] = "transpose";
int sci_transpose(scilabEnv env, int nin, scilabVar* in, int nopt, scilabOpt* opt, int nout, scilabVar* out)

{
	int n = 0;
	int m = 0;
    int size1 = 0;
	double* transpose_matrix = NULL;
	double* matrix = NULL;
  
if (nin != 1)
    {
        Scierror(77, _("%s: Wrong number of input argument(s): %d expected.\n"), fname, 1);
        return 1;
    }

if (nout != 1)
    {
        Scierror(77, _("%s: Wrong number of output argument(s): %d expected.\n"), fname, 1);
        return 1;
    }

    size1 = scilab_getDim2d(env, in[0], &n, &m);
    scilab_getDoubleArray(env, in[0], &matrix);

    out[0] = scilab_createDoubleMatrix2d(env, m, n,0);

    scilab_getDoubleArray(env, out[0], &transpose_matrix);

    transpose(matrix, transpose_matrix, n, m);


    
    return 0;
}
}
