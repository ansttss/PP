//
//  function.h
//  09Posvystak
//
//  Created by Anastasia Posvystak on 16.11.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include <stdio.h>
#ifndef function_h
#define function_h
int sign(double x);
double dichotomy(double (*f)(double), double a, double b, double eps);
double sinus(double x);
double newSin(double x);
double newLn(double x);
double newExp(double x);
#endif /* function_h */
