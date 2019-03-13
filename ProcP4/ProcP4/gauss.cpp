//
//  gauss.cpp
//  ProcP4
//
//  Created by Anastasia Posvystak on 26.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "gauss.h"
#include <cmath>
#include <iostream>
double intGauss(double x, double eps)
{
    int n = 2;
    double res = x;
    double x1 = x;
    while (fabs(x1)>eps)
    {
        x1 *= (-x*x*(2*n - 3))/((2*n-1)*(n-1));
        res+=x1;
        n++;
    }
    return res;
}
