//
//  main.cpp
//  ProcP1
//
//  Created by Anastasia Posvystak on 05.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include <iostream>
#include "math.h"
#include "summa.hpp"
#include "sinus.hpp"
#include "rest.hpp"
#include "cheb.hpp"
#include "gcdRec.hpp"
#include "gcdLoop.hpp"

using namespace std;
int main()
{
    cout<< "First task: " << endl << "n = 10, x = 10" << endl;
    summa(10, 10);
    cout << endl << "n = 6.7, x = 5" << endl;
    summa(6.7, 5);
    cout << endl << "n = 0, x = 15" << endl;
    summa(0, 15);
    cout << endl << "n = 2, x = 34" << endl;
    summa(2, 34);

    cout << endl << endl << "Second task: " << endl << "eps = 0.0001, x = 1000" << endl;
    sinus(0.0001, 0.524);
    cout << endl << "eps = 0.001, x = -360" << endl;
    sinus(0.001, -360);
    cout << endl << "eps = 0.0001, x = 20" << endl;
    sinus(0.0001, 20);
    cout << endl << "eps = 0.001, x = 1111" << endl;
    sinus(0.001, 1111);
    cout << endl;

    cout << endl << endl << "Third task: " << endl << "x1 = 6, x2 = 7" << endl;
    rest(6, 7);
    cout << endl << "x1 = 17, x2 = 2"<< endl;
    rest(17, 2);
    cout << endl << "x1 = 25, x2 = 5"<< endl;
    rest(25, 5);
    cout << endl << "x1 = 100, x2 = 7"<< endl;
    rest(100, 7);

    cout << endl << endl << "Fourth task: " << endl << "LOOP"<< endl << "x1 = 5, x2 = 5" << endl;
    gcdLoop(5, 5);
    cout << endl << "Fourth task: ";
    cout << endl << "x1 = 10, x2 = 6" << endl;
    gcdLoop(10, 6);
    cout << endl << "x1 = 20, x2 = 12" << endl;
    gcdLoop(20, 12);
    cout << endl << "x1 = 100, x2 = 25" << endl;
    gcdLoop(100, 25);
    
    cout << endl << "REC" << endl << "x1 = 5, x2 = 5" << endl;
    cout << gcdRec(5, 5);
    cout << endl << "x1 = 8, x2 = 5" << endl;
    cout << gcdRec(8, 5);
    cout << endl << "x1 = 100, x2 = 35" << endl;
    cout << gcdRec(100, 35);
    cout << endl << "x1 = 1000, x2 = 78" << endl;
    cout << gcdRec(1000, 78) << endl;
    
    cout << endl << "Fifth task: " << endl << "amount = 3, x = 5" << endl;
    cheb(3, 5);
    cout << endl << "amount = 9, x = -0.5" << endl;
    cheb(9, -0.5);
    cout << endl << "amount = 19, x = 34" << endl;
    cheb(19, 34);
    cout << endl << "amount = 2, x = 17" << endl;
    cheb(2, 17);
    
    return 0;
}

