//
//  main.cpp
//  ProcP3
// 
//  Created by Anastasia Posvystak on 12.09.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#include <iostream>
#include "allPowers.h"
#include <ctime>
using namespace std;

int main(int argc, const char * argv[]) {
    //double start = clock()/100000.0;

    cout<<"POWER: x = 8, n = 100"<<endl<<power(8, 100)<<endl;
    cout<<endl<<"QUICK POWER: x = 8, n = 100"<<endl<<quickPow(8,100)<<endl;
    cout<<endl<<"POWER RECURSION: x = 8, n = 100"<<endl<<powRec(8, 100)<<endl;
   cout<<endl<<"QUICK POWER RECURSION: x = 8, n = 100"<<endl<<quickRecPow(8, 100)<<endl;

    cout<<endl<<"POWER: x = 0, n = 6"<<endl<<power(0, 6)<<endl;
    cout<<endl<<"QUICK POWER: x = 4, n = 18"<<endl<<quickPow(4,18)<<endl;
    cout<<endl<<"POWER RECURSION: x = 15, n = 45"<<endl<<powRec(15, 45)<<endl;
    cout<<endl<<"QUICK POWER RECURSION: x = -8.9, n = 19"<<endl<<quickRecPow(-8.9, 19)<<endl;

    cout<<endl<<"POWER: x = -10, n = 16"<<endl<<power(-10, 16)<<endl;
    cout<<endl<<"QUICK POWER: x = -4.2, n = 5"<<endl<<quickPow(-4.2,5)<<endl;
    cout<<endl<<"POWER RECURSION: x = -6, n = 85"<<endl<<powRec(-6, 85)<<endl;
    cout<<endl<<"QUICK POWER RECURSION: x = 0, n = 100"<<endl<<quickRecPow(0, 100)<<endl;

    cout<<endl<<"POWER: x = 2, n = 100"<<endl<<power(2, 100)<<endl;
    cout<<endl<<"QUICK POWER: x = 14, n = 5"<<endl<<quickPow(14, 5)<<endl;
    cout<<endl<<"POWER RECURSION: x = 9, n = 3"<<endl<<powRec(9, 3)<<endl;
    cout<<endl<<"QUICK POWER RECURSION: x = -3, n = 11"<<endl<<quickRecPow(-3, 11)<<endl;

    cout<<endl<<"ITERATIONS n = 100 \n" << "power: 100 \n" << "quick power: \n" << counter(8, 100) << endl;
    cout<<endl<<"RUNTIME n = 100: \n" << "power: 0.00041 secs \n" << "quick power: 0.00049 secs \n";
    cout<<"power recursion: 0.00053 secs \n" << "quick power recurcion: 0.00052 secs \n";
    
//    double finish = clock()/100000.0;
//    double difference = finish - start;
//    cout<<difference;
    
  
    return 0;
}
