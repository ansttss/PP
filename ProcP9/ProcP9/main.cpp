//
//  main.cpp
//  ProcP9
//
//  Created by Anastasia Posvystak on 05.11.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//
#include "recPower.hpp"
#include "fibRec.hpp"
#include <cassert>
#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    cout.precision(10);
    double x = 2.2;
    unsigned int n = 10;
    unsigned int nFib = 8;
    cout << "Data for power: \nx = " << x << ", n = " << n << endl;
    cout << "Data for Fibonaci: \nn = " << nFib << endl;
    cout << power(x, n);
    cout << Fibonaci(nFib) << endl;
    x = 7.1;
    n = 6;
    nFib = 50;
    cout << "Data for power: \nx = " << x << ", n = " << n << endl;
    cout << "Data for Fibonaci: \nn = " << nFib << endl;
    cout << power(x, n);
    cout << Fibonaci(nFib) << endl;
    cout << endl << "Fibonaci with quick recursion: " << endl;
    for (size_t i = 0; i <= 10; i++) {
        cout << "n = " << i << ": " << fibRec(i) << ' ' << ' ' << endl;
        assert(fibRec(i)==fibonacci(i));
    }
  return 0;
}



