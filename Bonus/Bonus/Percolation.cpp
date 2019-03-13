//
//  Percolation.cpp
//  Bonus
//
//  Created by Anastasia Posvystak on 09.12.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

char *cell, *start, *bottom;
int m;
int n;

void grid(int x, int y, double p)
{
    int f = p * RAND_MAX;
    m = x;
    n = y;
    bottom = start = static_cast<char*>(realloc(start, (x+1) * (y+1) + 1));
    memset(start, 0, m + 1); //filling first m+1 bytes with 0 in start
    cell = bottom = start + m + 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            if (rand() < f)
                *bottom++ = '+';
            else *bottom++ = '.';
        *bottom++ = '\n';
    }
    
    bottom[-1] = 0;
    bottom -= ++m; //if we are in the first cell of bottom row, it means the end
}

int filling(char *p)
{
    if (*p != '+') return 0;
    *p = '#';
    return p >= bottom || filling(p+m) || filling(p+1) || filling(p-1) || filling(p-m);
}

int percolate()
{
    int i;
    for (i = 0; i < m && !filling(cell + i); i++);
    return i < m;
}

void init(int n, int m, double per)
{
    grid(n, m, per);
    percolate();
    cout << "---------------"<< n << 'x' << m << " grid --------------\n\n";
    cout << cell << endl;
    puts("\n10,000 tests for each case:");
    double p = 0;
    for (int ip = 0; ip <= 10; ip++) {
        p = ip / 10.;
        int cnt = 0;
        int i = 0;
        for (cnt = i; i < 10000; i++) {
            grid(n, m, p);
            cnt += percolate();
        }
        cout << "p = " << p << "   times: " << cnt << endl;
    }
    
}
