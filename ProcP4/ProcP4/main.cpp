//
//  main.cpp
//  ProcP4
//
//  Created by Anastasia Posvystak on 26.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include <cmath>
#include "gauss.h"
#include "expon.h"
#include "exponenta.h"
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    cout.precision(11);
    for (int i = 1; i<=10; i++) {
        cout <<"x = "<<i <<" -> result is : " <<intGauss(i, 1e-10)<<endl;
    }
    cout<<"\n Gauss fails when x > 6" << endl;
    cout << endl <<"Integral & fractional: \n"<< "x = -4.23 : "<< exponent(-4.23) << endl;
    cout<<"Usual exponent: \n"<< "x = -4.23 : " << exponenta(-4.23, 1e-10)<<endl;
    cout << endl <<"Integral & fractional: \n"<< "x = 3 : "<< exponent(3) << endl;
    cout<<"Usual exponent: \n"<< "x = 3 : " << exponenta(3, 1e-10)<<endl;
    cout << endl <<"Integral & fractional: \n"<< "x = 2.45 : "<< exponent(2.45) << endl;
    cout<<"Usual exponent: \n"<< "x = 2.45 : " << exponenta(2.45, 1e-10)<<endl;
    double x1 = 0;
    double x = 5.3;
    double x2 = modf(x, &x1);
    cout << x1 << ' ' << x2 << endl;
    cout << int(x) << ' ' <<  x  - int(x) << endl;
    return 0;
}

double const ACCURANCY = 0.001;

long double exponential_Gaussian_integral(double x);

long double exponential_Taylor_rule(double x);

long double exponential_function(double x);

//int main() {
//    double x[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//
//    for (double d : x) {
//        //int i = (int) d;
//        //cout << factorial(i) << endl;
//
//        cout << "Gaussian integral (integrated from 0 to " << d << "): e^(-t^2) dt = "
//        << exponential_Gaussian_integral(d)
//        << " with accuracy " << ACCURANCY << endl;
//        cout << "x = " << d << "; Taylor rule: e^x = " << exponential_Taylor_rule(d)
//        << " with accuracy " << ACCURANCY << endl;
//        cout << "x = " << d << "; Function with [x] and {x}: e^x = " << exponential_function(d)
//        << " with accuracy " << ACCURANCY << endl;
//
//    }
//    return 0;
//}
//
//long double exponential_Gaussian_integral(double x) {
//
//    long double result = x;
//    long double next = x;
//    long double delta = ACCURANCY + 1;
//
//    for (long i = 0; delta > ACCURANCY; i++) {
//
//        next *= (-1) * (pow(x, 2) * (2 * i + 1)) / ((2 * i + 3) * (i + 1));
//
//        delta = fabs(next);
//
//        result += next;
//        // cout << j << " " << i << " next:" << next << endl;
//    }
//
//    return result;
//}
//
//long double exponential_Taylor_rule(double x) {
//
//    long double result = x;
//    long double next = x;
//    long double delta = ACCURANCY + 1;
//
//    for (long i = 1; delta > ACCURANCY; i++) {
//        //cout << result;
//
//        next *= x / (i + 1);
//
//        delta = fabs(next);
//
//        result += next;
//    }
//
//    return (result + 1);
//}
//
//long double exponential_function(double x) {
//
//    if (x < 0)
//        return (1 / exponential_Taylor_rule((-x)));
//
//    double x1 = 0;
//    double x2 = modf(x, &x1);
//
//    //cout << x1 << " " << x2 << endl;
//
//    return (exponential_Taylor_rule(x1) * exponential_Taylor_rule(x2));
//}
