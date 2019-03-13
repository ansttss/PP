//
//  main.cpp
//  Bonus
//
//  Created by Anastasia Posvystak on 11.12.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include "Percolation.h"
#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int m = 10;
    double per = .5;
    init(n, m, per);
    cout << endl << endl;
    per = .8;
    n = 40;
    m = 40;
    init(n, m, per);
    return 0;
}
