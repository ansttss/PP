//
//  sortingArray.cpp
//  ProcP7
//
//  Created by Anastasia Posvystak on 27.10.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include <stdio.h>
#include "sortingArray.h"
#include <iostream>
using namespace std;

void test()
{
    cout << "SELECTION SORT \n \nInteger Sorting: \n \n";
    cout << "Unsorted array: \n";
    int arrayInteger[5] = {3, 6, -4, 10, -1};
    printArray(arrayInteger);
    selectionSort(arrayInteger);
    cout << "\nSorted array: " << endl;
    printArray(arrayInteger);
    
    cout << "\nUnsorted array: \n";
    int arrayInteger1[9] = {3, 6, -4, 10, -1, 89, -9, 23, 7};
    printArray(arrayInteger1);
    selectionSort(arrayInteger1);
    cout << "\nSorted array: " << endl;
    printArray(arrayInteger1);
    
    cout << endl << "\nDouble Sorting: \n \n";
    double arrayDouble[8]={-4.5, 10.6, -4.57, 6.777, 5.001, -5.3, 1.78, 2.4};
    cout << "Unsorted array: \n";
    printArray(arrayDouble);
    selectionSort(arrayDouble);
    cout << "\nSorted array: " << endl;
    printArray(arrayDouble);
    
    cout << endl << "\nDouble Sorting: \n \n";
    double arrayDouble1[6]={-6.8, 9.0, -7.001, 4.5, -7.002, 5.7};
    cout << "Unsorted array: \n";
    printArray(arrayDouble1);
    selectionSort(arrayDouble1);
    cout << "\nSorted array: " << endl;
    printArray(arrayDouble1);
    
    cout << endl;
}
