//
//  power.cpp
//  ProcP2
//
//  Created by Anastasia Posvystak on 16.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "power.hpp"
#include <iostream>
using namespace std;

void power(double a, int x)
{
    double y=1;
    for(int i = 0; i < x; i++)
        y*=a;
    cout << y;

}
