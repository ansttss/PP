//
//  power.cpp
//  ProcP3
//
//  Created by Anastasia Posvystak on 12.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "allPowers.h"
double power(double a, int x)
{
    int temp = a;
    for (int i = 1; i < x; i++) {
        a = a*temp;
    }
    return a;
}
