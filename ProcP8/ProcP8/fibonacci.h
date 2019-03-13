//
//  fibonacci.h
//  ProcP8
//
//  Created by Anastasia Posvystak on 01.11.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#ifndef fibonacci_h
#define fibonacci_h
#include <stdio.h>

struct Matrix2x2
{
    long long int _11, _12, _21, _22;
};
struct Vector2
{
    long long int _1, _2;
};
long long int fib(size_t n);
Matrix2x2 operator*(const Matrix2x2 m1, const Matrix2x2 m2);
Matrix2x2 quickPower(const Matrix2x2 m1, size_t n);
Vector2 multiMatVec(const Matrix2x2);
long long int fibSimple(size_t n);
#endif /* fibonacci_h */
