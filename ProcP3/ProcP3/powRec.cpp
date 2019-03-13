//
//  powRec.cpp
//  ProcP3
//
//  Created by Anastasia Posvystak on 19.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "allPowers.h"
double powRec(double x, int n)
{
    if (n == 1) return x;
    else return x*powRec(x, n-1);
}
