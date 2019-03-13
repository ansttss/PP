//
//  gcdLoop.cpp
//  ProcP1
//
//  Created by Anastasia Posvystak on 09.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "gcdLoop.hpp"
#include <iostream>
#include "math.h"
using namespace std;
//fourth task(loop)
void gcdLoop(int a, int b)
{
    while (a!=b)
    {
        if (a>b)
            a = a - b;
        else b = b - a;
    }
   cout <<  a;
}
