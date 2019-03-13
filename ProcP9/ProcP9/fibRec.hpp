//
//  fibRec.hpp
//  ProcP9
//
//  Created by Anastasia Posvystak on 05.11.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#ifndef fibRec_hpp
#define fibRec_hpp

#include <stdio.h>
struct Matrix2x2
{
    int _11, _12, _21, _22;
};
struct Vector2
{
    int _1, _2;
};
int fibonacci(size_t n);
int fibRec(size_t n);
Matrix2x2 operator*(const Matrix2x2 m1, const Matrix2x2 m2);
Matrix2x2 quickRecPower(const Matrix2x2 m1, size_t n);
Matrix2x2 quickPower(const Matrix2x2 m1, size_t n);
Vector2 multiMatVec(const Matrix2x2);
#endif /* fibRec_hpp */
