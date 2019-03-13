//
//  sinus.cpp
//  ProcP2
//
//  Created by Anastasia Posvystak on 12.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "sinus.hpp"
#include <iostream>
#include "math.h"
using namespace std;

void sinus(double x)
{
    const double ep = 0.00001;
    const double pi = 3.1415926536;
    while(x > 2*pi) x -= 2*pi;
    while(x < 2*pi) x += 2*pi;
    double a = x;
    double res = x;
    double temp = res;
    double k = 1;
    while(abs(a) > ep)
    {
        temp = a;
        a *= (-x)*x/((2*k)*(2*k+1));
        res += a;
        k++;
        
    }
    cout << res;
}
