//
//  gcdRec.cpp
//  ProcP1
//
//  Created by Anastasia Posvystak on 09.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "gcdRec.hpp"
#include <iostream>
#include "math.h"
using namespace std;
//fourth task(rec)
int gcdRec(int a, int b)
{
    if (b==0) return abs(a);
    else if (a==0) return abs(b);
    if(a>b)
        return gcdRec(b, a%b);
    else
        return gcdRec(a, b%a);
}
