//
//  quickRecPower.cpp
//  ProcP3
//
//  Created by Anastasia Posvystak on 23.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "allPowers.h"
double quickRecPow(double x, int n)
{
    if(n == 1)
        return x;
    if (n%2 == 0)
        return quickRecPow(x, n/2) * quickRecPow(x, n/2);
    else
    {
        if(n > 0)
            return x*quickRecPow(x, n/2) * quickRecPow(x, n/2);
        else
            return (quickRecPow(x, n/2) * quickRecPow(x, n/2))/x;
    }
    
}
