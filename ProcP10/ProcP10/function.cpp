//
//  function.cpp
//  09Posvystak
//
//  Created by Anastasia Posvystak on 16.11.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include <stdio.h>
#include <cmath>
int sign(double x)
{
    if (x < 0)
        return -1;
    if (x > 0)
        return 1;
    return 0;
}
double sinus(double x)
{
    return sin(x);
}
double newSin(double x)
{
    return sin(x) - x;
}
double newLn(double x)
{
    return log(x) - 1;
}
double newExp(double x)
{
    return exp(x) - 2 + x;
}
double dichotomy(double (*f)(double), double const a, double const b, double const eps)
{
    double leftLimit = a;
    double rightLimit = b;
    double medium = 0;
    while (rightLimit - leftLimit > eps) {
        medium = (leftLimit+rightLimit)*0.5;
        if (sign(f(medium)) == 0)
            return medium;
        if (f(leftLimit) * f(medium) > 0)
            leftLimit = medium;
        else
            rightLimit = medium;
    }
    return (leftLimit + rightLimit)/2;
}
