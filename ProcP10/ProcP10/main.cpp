//
//  main.cpp
//  09Posvystak
//
//  Created by Anastasia Posvystak on 16.11.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//
#include "function.h"
#include <cmath>
#define PI 3.14159265358979323846
#include <cassert>
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    const double eps = 1e-13;
    double (*functions[4]) (double) =
    {
        newSin, sinus, newLn, newExp
    };
    double result = dichotomy(functions[0], -1, 1, eps);
    cout << "1) sin(x) = x, [-1,1] \nx = " << result << endl;
    assert(sin(result) >= result - eps && sin(result) <= result + eps);
    result = dichotomy(functions[1], PI-1, PI, eps);
    assert(sin(result) >= -eps && sin(result) <= eps);
    cout << "\n2) sin(x) = 0, [π-1, π] \nx = " << result << endl;
    result = dichotomy(functions[2], 2, 3, eps);
    assert(log(result) >= 1 - eps && log(result) <= 1 + eps);
    cout << "\n3) ln(x)= 1, [2, 3] \nx = " << result << endl;
    result = dichotomy(functions[3], 0, 2, eps);
    assert(exp(result) >= 2 - result -eps && exp(result) <= 2 - result + eps);
    cout << "\n4) exp(x)= 2 - x, [0,2] \nx = " << result << endl;
    return 0;
}
