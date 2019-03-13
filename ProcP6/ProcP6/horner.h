//
//  horner.hpp
//  ProcP6
//
//  Created by Anastasia Posvystak on 12.10.18.
//  Copyright © 2018 Anastasia Posvystak. All rights reserved.
//

#ifndef horner_hpp
#define horner_hpp

#include <stdio.h>

void fillArray(double * coeff, size_t size);
double horner(double * coeff, size_t size, double x);
double sum(double * coeff, size_t size, int sign = 1);

#endif /* horner_hpp */
