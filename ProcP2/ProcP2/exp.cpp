//
//  exp.cpp
//  ProcP2
//
//  Created by Anastasia Posvystak on 16.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "exp.hpp"
#include <iostream>
#include "cmath"
using namespace std;

void expon(double x,double eps)
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
   cout << res;
}
