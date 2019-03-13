//
//  simpson.cpp
//  ProcP11
//
//  Created by Anastasia Posvystak on 24.11.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "simpson.hpp"
#include <cmath>
double a_ell = 0;
double b_ell = 0;
double a_dir = 0;
double a_eul = 0;

void init(double a_elliptic, double b_elliptic, double a_dirichlet, double a_euler)
{
    a_ell = a_elliptic;
    b_ell = b_elliptic;
    a_dir = a_dirichlet;
    a_eul = a_euler;
}

double agm(const double a, const double b)
{
    double an = sqrt(a * b);
    double bn = (a + b) / 2;
    double a0 = a;
    double b0 = b;
    do {
        a0 = an;
        b0 = bn;
        an = sqrt(a0*b0);
        bn = (a0 + b0)/2;
    }
    //a_(n-1) < a_n < b_n < b_(n-1)
    while((a0 < an) && (an < bn) && (bn < b0));
    return an;
}
double elliptic_first(const double x)
{
    return 1/sqrt(pow(a_ell, 2)* pow(sin(x), 2) +pow(b_ell, 2) * pow(cos(x), 2));
}
double dirichlet(const double x)
{
    return sin(a_dir*x)/x;
}
double poisson(const double x)
{
    return exp(-pow(x, 2));
}
double euler(const double x)
{
    return (pow(x, a_eul-1)) / (1 + x);
}
double simpson(const double a, const double b, const double eps, double(*const f)(double))
{
    int n = 2;
    double step = (b-a)*0.5;
    double prevSum = 0;
    double s1 = step*(f(a)+f(b));
    double s2 = 0;
    double s4 = 4*step*f(a+step);
    double curSum = s1+s4;
    do {
        prevSum = curSum;
        n *= 2;
        step *= 0.5;
        s1 *= 0.5;
        s2 = 0.5*s2+0.25*s4;
        s4=0;
        for (int i = 1; i < n; i+=2)
            s4=s4+f(a+i*step);
        s4 = 4*step*s4;
        curSum = s1+s2+s4;
    }
    while(abs(curSum-prevSum) > eps);
    return curSum/3;
}

double simpsonInfinity(const double eps, double(*const f)(double))
{
    double a = 0;
    double interval = 4;
    double b = interval;
    double res = 0;
    double sum = 0;
    double simpsonRes = 0;
    
    if (f(0) == INFINITY || isnan(f(0)))
    {
        sum = simpsonToZero(interval, eps/10, f);
        a = b;
        b *= 2;
    }
    simpsonRes = simpson(a, b, eps, f);
    do
    {
        b *= interval;
        res = simpsonRes;
        simpsonRes = simpson(a, b, eps, f);
    }
    while (abs(res - simpsonRes) > eps);
    
    sum += simpsonRes;
    return sum;
}

double simpsonToZero(const double interval, const double eps, double(*const f)(double))
{
    double a = interval/2;
    double simp = 0;
    double res = 0;
    
    simp = simpson(a, interval, eps, f);
    while (abs(simp - res) > eps)
    {
        res = simp;
        a /= 2;
        simp = simpson(a, interval, eps, f);
    }
    
    return simp;
}
