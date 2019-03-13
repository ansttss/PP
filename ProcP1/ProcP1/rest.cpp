//
//  rest.cpp
//  ProcP1
//
//  Created by Anastasia Posvystak on 09.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "rest.hpp"
#include <iostream>
#include "math.h"
using namespace std;
//third task
void rest(int first, int second)
{
    double r = 0;
    double ostacha = 0;
    if (first == 0)
        cout << 0;
    while (second == 0)
    {
        cout << "incorrect";
        cin >>second;
    }
    if (first<0)
        first = abs(first);
    else if (second < 0)
        second = abs(second);
    while (first >= second)
    {
        first = first - second;
        r++;
    }
    ostacha = first;
    cout << r << " - the integer part, " << ostacha << " - the remainder" ;
}


