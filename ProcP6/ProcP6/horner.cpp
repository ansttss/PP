//
//  horner.cpp
//  ProcP6
//
//  Created by Anastasia Posvystak on 12.10.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "horner.hpp"
#include <ctime>
#include <cstdlib>
#include <cassert>

void fillArray(double * coeff, size_t size)
{
    srand(time(NULL) + rand());
    for (int i = 1; i < size; i++)
    {
        *(coeff + i) = rand();
    }
    return;
}

double sum(double * coeff, size_t size, int sign)
{
    double result = 0;
    
    if (sign > 0)
    {
        for (int i = 0; i < size; i++)
        {
            result += *(coeff + i);
        }
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            if (i % 2 == 0)
            {
                result += *(coeff + size - i - 1);
            }
            else result -=  *(coeff + size - i - 1);
        }
    }
    
    return result;
}

double horner(double * coeff, size_t size, double x)
{   
    double result =0;
    for (int i = 0; i < size; i++)
    {
        result = result * x + *(coeff+i);
    }
    assert(((x==1)||(x==-1))?(result==sum(coeff, size, x)):true);
    return result;
}
