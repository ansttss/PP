//
//  main.cpp
//  ProcP11
//
//  Created by Anastasia Posvystak on 24.11.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//
#include "simpson.hpp"
#include <cmath>
#define PI 3.1415926535
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]){
    cout.precision(12);
    double a_elliptic = 1;
    double b_elliptic = 5;
    double a_dirichlet = 5;
    double a_euler = 0.5;
    
    init(a_elliptic, b_elliptic, a_dirichlet, a_euler);
    
    cout <<"-----------Elliptic integral of the first kind------------\na = " << a_elliptic<<", b = "<< b_elliptic << " -> result is " <<simpson(0, PI/2, 1e-15, &elliptic_first) << endl;
    cout << "Test: PI/(2*agm(" <<a_elliptic << ',' << b_elliptic << ")) = " << PI/(2*agm(a_elliptic, b_elliptic))<< endl;
    cout<<"\n-----------Dirichlet's integral------------\na = " << a_dirichlet << " -> result is "<<simpson(1e-5, 1e5, 1e-12, &dirichlet) << endl;
    cout << "Test: (PI/2) * sgn(" <<a_dirichlet<< ") = " << (PI/2) * sgn(a_dirichlet)<< endl;
    cout<<"\n-----------Poisson's integral------------\n"<<simpson(1e-5, 1e5, 1e-12, &poisson) << endl;
    cout << "Test: sqrt(PI) / 2 = " << sqrt(PI) /2 << endl;
    cout << "\nIT CAN TAKE SOME TIME TO COMPUTE EULER INTEGRAL\n";
    cout<<"\n-----------Euler's integral------------\na = "<<a_euler<<" -> result is "<<simpsonInfinity(0.01, &euler) << endl;
    cout << "Test: PI / (sin(" << a_euler << ") * PI)) " <<"= "<<PI / (sin(a_euler * PI)) << endl;
    
    a_elliptic = 10;
    b_elliptic = 12;
    a_dirichlet = -4;
    a_euler = 0.4;
    init(a_elliptic, b_elliptic, a_dirichlet, a_euler);
    cout <<"\n-----------Elliptic integral of the first kind------------\na = " << a_elliptic<<", b = "<< b_elliptic << " -> result is " <<simpson(0, PI/2, 1e-15, &elliptic_first) << endl;
    cout << "Test: PI/(2*agm(" <<a_elliptic << ',' << b_elliptic << ")) = " << PI/(2*agm(a_elliptic, b_elliptic))<< endl;
    cout<<"\n-----------Dirichlet's integral------------\na = " << a_dirichlet << " -> result is "<<simpson(1e-5, 1e5, 1e-12, &dirichlet) << endl;
    cout << "Test: (PI/2) * sgn(" <<a_dirichlet<< ") = " << (PI/2) * sgn(a_dirichlet)<< endl;
    cout<<"\n-----------Poisson's integral------------\n"<<simpson(1e-5, 1e5, 1e-12, &poisson) << endl;
    cout << "Test: sqrt(PI) / 2 = " << sqrt(PI) /2 << endl;
    cout << "\nIT CAN TAKE SOME TIME TO COMPUTE EULER INTEGRAL\n";
    cout<<"\n-----------Euler's integral------------\na = "<<a_euler<<" -> result is "<<simpsonInfinity(0.01, &euler) << endl;
    cout << "Test: PI / (sin(" << a_euler << ") * PI)) " <<"= "<<PI / (sin(a_euler * PI)) << endl;

}
