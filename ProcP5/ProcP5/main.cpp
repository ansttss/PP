//
//  main.cpp
//  ProcP5
//
//  Created by Anastasia Posvystak on 01.10.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "arithGeomMean.h"
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    cout.precision(12);
    cout << "Arithmetic–geometric mean \n";
    cout << "a = 34.5, b = 97.1 -> M(a,b) = " << arGeoMean(34.5, 97.1) << endl;
    cout << "a = 1, b = 11 -> M(a,b) =  " << arGeoMean(1, 11) << endl;
    cout << "a = 17, b = 1234 -> M(a,b) = " << arGeoMean(17, 1234) << endl;
    cout << "a = 2, b = 8 -> M(a,b) = " << arGeoMean(2, 8) << endl;
    return 0;
}
