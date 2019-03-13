//
//  fibonacci.cpp
//  ProcP8
//
//  Created by Anastasia Posvystak on 01.11.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.

#include "fibonacci.h"

long long int fib(size_t n)
{
    if (n == 0)  return 0;
    Matrix2x2 matrix = {1, 1, 1, 0};
    Matrix2x2 matrixRes = quickPower(matrix, n-1);
    Vector2 vectorRes = multiMatVec(matrixRes);
    return vectorRes._1;
}
Matrix2x2 operator*(const Matrix2x2 m1, const Matrix2x2 m2)
{
    Matrix2x2 res
    {
        res._11 = m1._11*m2._11 + m1._12*m2._21,
        res._12 = m1._11*m2._12 + m1._12*m2._22,
        res._21 = m1._21*m2._11 + m1._22*m2._21,
        res._22 = m1._21*m2._12 + m1._22*m2._22
    };
    return res;
}
Matrix2x2 quickPower(const Matrix2x2 m1, size_t n)
{
    Matrix2x2 mCopy = m1;
    Matrix2x2 matrix = {1, 0, 0, 1};
    while(n>0)
    {
        if(n % 2 == 0)
        {
            n/=2;
            mCopy = operator*(mCopy, mCopy);
        }
        else
        {
            n--;
            matrix = operator*(matrix, mCopy);
        }
    }
    return matrix;
}
Vector2 multiMatVec(const Matrix2x2 m)
{
    Vector2 vector = {1, 0};
    Vector2 res
    {
        res._1 = m._11*vector._1 + m._12*vector._2,
        res._2 = m._21*vector._1 + m._22*vector._2
    };
    return res;
}
long long int fibSimple(size_t n)
{
    if (n==0) return 0;
    if(n==1) return 1;
    long long int res=0;
    long long int a=0;
    long long int b=1;
    for(size_t k=2; k<=n; k++)
    {
        res=a+b;
        a=b;
        b=res;
    }
    return res;
}
