//
//  main.cpp
//  ProcP8
//
//  Created by Anastasia Posvystak on 01.11.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include <ctime>
#include "fibonacci.h"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[])
{
    cout << "Fibonacci number with matrices - first column \n";
    cout << "Simple Fibonacci number - second column \n \nFrom 0 to 10: \n";
    
    for (size_t i = 0; i <= 10; i++) {
        cout << "n = " << i << ": " << fib(i) << ' ' << ' ' << "n = " << i << ": " << fibSimple(i) << endl;
    }
    cout << "\nFrom 30 to 50:"<< endl;
    for (size_t i = 30; i <= 50; i++) {
        cout << "n = " << i << ": " << fib(i) << ' ' << ' ' << "n = " << i << ": " << fibSimple(i) << endl;
    }
    return 0;
}
