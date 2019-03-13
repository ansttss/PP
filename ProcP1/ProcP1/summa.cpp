//
//  summa.cpp
//  ProcP1
//
//  Created by Anastasia Posvystak on 09.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "summa.hpp"
using namespace std;
#include <iostream>
//first task
void summa(double x, int n)
{
    double s = 1, a = 1;
    for(int k = 1; k <= n; k++)
    {
        a *= (-x)/k;
        s += a;
    }
    cout << s;
}
