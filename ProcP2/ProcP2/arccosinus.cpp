//
//  arccosinus.cpp
//  ProcP2
//
//  Created by Anastasia Posvystak on 14.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "arccosinus.hpp"
#include <iostream>
using namespace std;

double arccosinus(double x)
{
    const double pi = 3.1415926536;
    const double eps = 0.00001;
        int k = 0;
        double p = x;
        double s = x;
        while (p > eps){
            p*= (x * x * (2*k + 1)*(2*k + 1))/ (2*(k+1)*(2* k + 3));
            s+=p;
            k++;
        }
        return (pi/2) - s;
}
