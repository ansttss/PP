//
//  main.cpp
//  ProcP2
//
//  Created by Anastasia Posvystak on 12.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include <iostream>
#include "power.hpp"
#include "exp.hpp"
#include "arccosinus.hpp"
#include "sinus.hpp"
using namespace std;

int main(int argc, const char * argv[]) {
//
//    cout<< "Sinus: " << endl << "x = -360" << endl;
//    sinus(-360);
//    cout << endl << "x = 0.785" << endl;
//    sinus(0.785);
//    cout << endl << "x = 1000" << endl;
//    sinus(1000);
//    cout << endl << "x = 60" << endl;
//    sinus(60);
//
//    cout<< endl << endl << "Arccosine: " << endl << "x = 0.866" << endl;
//    cout << arccosinus(0.866);
//    cout << endl << "x = 0.785" << endl;
//    cout << arccosinus(0.785);
//    cout << endl << "x = 0.35" << endl;
//    cout << arccosinus(0.35);
//    cout << endl << "x = 0.99" << endl;
//    cout << arccosinus(0.99);
//
//    cout << endl << endl << "Power (a^b): " << endl << "a = 2, b = 0" << endl;
//    power(2, 0);
//    cout << endl << "a = 5.0, b = 4"<< endl;
//    power(5.0, 4);
//    cout << endl << "a = 2.77, b = 9"<< endl;
//    power(2.77, 9);
//    cout << endl << "a = 0, b = 8"<< endl;
//    power(0, 8);
    
    cout << endl << endl << "Exponential: " << endl << "x = 5, eps = 0.0001" << endl;
    expon(0.25, 0.0001);
    cout << endl << "x = 10, eps = 0.00001" << endl;
    expon(10, 0.00001);
    cout << endl << "x = -20, eps = 0.00001" << endl;
    expon(-20, 0.00001);
    cout << endl << "x = 100, eps = 0.0001" << endl;
    expon(100, 0.0001);
    cout << endl;
    return 0;
}
