//
//  exponenta.cpp
//  ProcP4
//
//  Created by Anastasia Posvystak on 29.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "exponenta.h"
#include <cmath>
double exponenta(double x,double eps)
{
    double res=1;
    double n=1;
    double a=1;
    while (true)
    {
        a = a * x / n;
        if (fabs(a) <= eps) break;
        res += a;
        n++;
    }
    return res;
}

