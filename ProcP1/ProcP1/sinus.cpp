//
//  sinus.cpp
//  ProcP1
//
//  Created by Anastasia Posvystak on 09.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include <iostream>
#include "sinus.hpp"
#include "math.h"
using namespace std;
//second task
void sinus(double eps, double x)
{
    const double pi = 3.1415926536;
    while(x > 2*pi) x -= 2*pi;
    while(x < 2*pi) x += 2*pi;
    double a = x;
    double res = x;
    double temp = res;
    double k = 1;
    while(abs(a) > eps)
    {
        temp = a;
        a *= (-x)*x/((2*k)*(2*k+1));
        res += a;
        k++;
        
    }
    cout << res;
}
