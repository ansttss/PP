//
//  quickPower.cpp
//  ProcP3
//
//  Created by Anastasia Posvystak on 12.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "allPowers.h"
double quickPow(double a, int x)
{
    double y = 1;
    while(x>0)
        if(x % 2 == 0)
        {
            x/=2;
            a*=a;
        }
        else
        {
            x--;
            y*=a;
        }
    return y;
    
}
int counter(double a, int x)
{
    int count = 0;
    double y = 1;
    while (x > 0)
    {
        if (x % 2 == 0)
        {
            x /= 2;
            a *= a;
        }
        else
        {
            x--;
            y *= a;
        }
        count++;
    }
    return count;
    
}
