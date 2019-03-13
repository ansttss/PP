//
//  arithGeomMean.cpp
//  ProcP5
//
//  Created by Anastasia Posvystak on 01.10.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "arithGeomMean.h"
#include <cmath>
#include <iostream>
using namespace std;

double arGeoMean(double a, double b)
{
        double an = sqrt(a * b);
        double bn = (a + b) / 2;
        double a0 = a;
        double b0 = b;
        do {
            a0 = an;
            b0 = bn;
            an = sqrt(a0*b0);
            bn = (a0 + b0)/2;
        }
        //a_(n-1) < a_n < b_n < b_(n-1)
        while((a0 < an) && (an < bn) && (bn < b0));
        return an;
};

