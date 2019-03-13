//
//  expon.cpp
//  ProcP4
//
//  Created by Anastasia Posvystak on 26.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "expon.h"
#include "exponenta.h"
#include "cmath"

#include <iostream>
using namespace std;
double exponent(double x)
{
    const double eps = 1e-10;
    double res = 0;
    if (x>=0)
    {
        int k = static_cast<int>(x);
        res = exponenta(k,eps) * exponenta((x-k), eps);
    }
    else
    {
        res = 1/(exponent(-x));
    }
    return res;
}
