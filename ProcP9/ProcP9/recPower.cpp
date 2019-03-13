//
//  recPower.cpp
//  ProcP9
//
//  Created by Anastasia Posvystak on 05.11.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "recPower.hpp"
#include <iostream>
using namespace std;
//it calls tail recursion when recursive function call is at the end
//optimized power function
//
void zet(double &y, double &x, unsigned int &k, unsigned int &count)
{
    count ++;
    if (k>0)
    {
        // The degree is odd: we reduce it to one,
        // then multiply y on the base(x)
        if (k%2==1)
        {
            y*=x;
            k--;
        }
        //if the degree is even, we divide it by two
        //and then multiply base(x) on the base(x)
        else
        {
            x*=x;
            k/=2;
        };
        //call recursive function
        zet(y,x,k, count);
    }
}
double power(double x, unsigned int n)
{
    double y = 1;
    unsigned int counter = 0;
    zet(y, x, n, counter);
    cout <<"Number of function zet() calls is "<< counter << endl;
    cout << "Result is: ";
    return y;
}

//considering that elements are stored, we have less function calls
//it is executed at linear time and this recursion is more effective than a primitive one
//for example, simple Fibonaci will show us 33 calls when n=8
//whereas this fib - 8 calls

//If the first parameter f1 is a certain Fibonacci number,
//then the second parameter f2 is the number following it
//and n is the distance from the desired Fibonacci number to f1.
//when n = 1, it is a sign of the completion
void fib(double &f1, double &f2, unsigned int n, unsigned int &count)
{
    count++;
    if (n>=2)
    {
        double f =f2; f2+=f1; f1=f;
        fib(f1, f2, n-1, count);
    }
};
double Fibonaci(unsigned int n)
{
    double f0=0, f1=1;
    switch (n)
    {
        case 0:
            return f0;
            break;
        case 1:
            return f1;
            break;
        default:
            unsigned int count = 0;
            fib(f0, f1, n, count);
            cout << endl<<"Number of function fib() calls is "<< count << endl;
            cout << "Result is: ";
            return f1;
    }
};

