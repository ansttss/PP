//
//  simpson.hpp
//  ProcP11
//
//  Created by Anastasia Posvystak on 24.11.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#ifndef simpson_hpp
#define simpson_hpp

#include <stdio.h>
double simpson(const double a, const double b, const double eps, double(*const f)(double));
double elliptic_first(const double x);
double dirichlet(const double x);
double poisson(const double x);
double euler(const double x);
double agm(const double a, const double b);
template <typename T> int sgn(T val)
{
    return (T(0) < val) - (val < T(0));
}
void init(double a_elliptic, double b_elliptic, double a_dirichlet, double a_euler);
double simpsonInfinity(const double eps, double(*const f)(double));
double simpsonToZero(const double interval, const double eps, double(*const f)(double));

#endif /* simpson_hpp */
