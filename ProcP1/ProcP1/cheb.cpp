//
//  cheb.cpp
//  ProcP1
//
//  Created by Anastasia Posvystak on 09.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "cheb.hpp"
#include <iostream>
#include "math.h"
using namespace std;
//fifth task
void cheb(int amount, int x)
{
    if (amount == 0) cout << 1;
    if (amount == 1) cout << x;
    int res = 1;
    int a = 1;
    int b = x;
    for (int i = 2; i <= amount; i++)
    {
        res = 2 * x * b - a;
        a = b;
        b = res;
    }
    cout << res;
}
