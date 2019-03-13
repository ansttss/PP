//
//  main.cpp
//  ProcP6
//
//  Created by Anastasia Posvystak on 02.10.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include <iostream>
#include "horner.hpp"
using namespace std;

int main()
{
    cout.precision(12);
    cout << "Horner's method" << endl;
    
    unsigned int n = 6;
    double x = 1;
    
    double *coeff = new double[n];
    
    fillArray(coeff, n);
    cout << "n = "<< n << ", x = " << x << " -> result is: " << horner(coeff, n, x)<< endl;
    n = 5;
    x = -1;
    cout << "n = "<< n << ", x = " << x << " -> result is: " << horner(coeff, n, x)<< endl;
    n = 2;
    x = 7;
    fillArray(coeff, n);
    cout << "n = "<< n << ", x = " << x << " -> result is: " << horner(coeff, n, x)<< endl;
    n = 9;
    x = -7;
    fillArray(coeff, n);
    cout << "n = "<< n << ", x = " << x << " -> result is: " << horner(coeff, n, x)<< endl;
    n = 3;
    x = -3;
    fillArray(coeff, n);
    cout << "n = "<< n << ", x = " << x << " -> result is: " << horner(coeff, n, x)<< endl;
    
    delete [] coeff;
    
    return 0;
}
