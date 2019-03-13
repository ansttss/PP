//
//  sortingArray.h
//  ProcP7
//
//  Created by Anastasia Posvystak on 14.10.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#ifndef sortingArray_h
#define sortingArray_h
#include <cassert>
#include <iostream>
using namespace std;

//run the program
void test();

//void that prints array
template <typename X, unsigned int length>
void printArray(X (&array)[length])
{
    cout << "[ ";
    for (int i = 0; i < length; i++) {
        cout << array[i] << ' ';
    }
    cout << ']';
}

//void that copies two arrays
template <typename X, unsigned int lengthFirst, unsigned int lengthSecond>
void copyArray(X (&arrayFirst)[lengthFirst], X (&arraySecond)[lengthSecond])
{
    if (lengthFirst != lengthSecond)
    {
        throw "Arrays are not equal!";
    }
    for (int i = 0; i < lengthFirst; i++)
    {
        arraySecond[i] = arrayFirst[i];
    }
}

//check if array is sorted
template <typename X, unsigned int length>
bool isSorted(X (&array)[length])
{
    bool check = true;
    for (int i = 1; i < length; i++)
    {
        if (array[i] < array[i-1])
            check = false;
    }
    return check;
}

//check if two arrays: unsorted&sorted are similar (same elements)
template <typename X, unsigned int length>
bool sameArray(X (&array)[length], X (&arraySorted)[length])
{
    X arrayCheckSorted[length];
    X arrayCheckUnsorted[length];
    copyArray(arraySorted, arrayCheckSorted);
    copyArray(array, arrayCheckUnsorted);
    
    for (int i = 0; i < length; i++){
        bool check = false;
        for(int j = 0; j < length; j++){
            if(arrayCheckUnsorted[j] == arrayCheckSorted[i])
            {
                arrayCheckUnsorted[j] = NULL;
                arrayCheckSorted[i] = NULL;
                check = true;
                break;
            }
        }
        if(!check)
            return false;
    }
    return true;
}

/*
 array sorting - selection sort
 this sorting finds the minimum element from unsorted part
 and puts it at the beginning
 */
template <typename X, unsigned int length>
void selectionSort(X (&array)[length])
{
    int pos;
    X min;
    X arrayCopy[length];
    for (int i = 0; i<length; i++)
    {
        arrayCopy[i] = array[i];
    }
    
    for(int i=0; i<length; i++)
    {
        min=array[i];
        pos=i;
        for(int j=i+1; j<length; j++)
        {
            if(array[j]<min)
            {
                min=array[j];
                pos=j;
            }
        }
        if(pos!=i)
        {
            array[pos]=array[i];
            array[i]=min;
        }
    }
    assert(isSorted(array));
    assert(sameArray(array, arrayCopy));
}
#endif /* sortingArray_h */
