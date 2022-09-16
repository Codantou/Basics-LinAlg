//
//  main.cpp
//  AlgebraLinear
//
//  Created by Castekc U on 2022-08-23.
//

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include "LinAlg.hpp"
#include "Matrix.hpp"
#include <complex>
using namespace std;

template <typename T> T get_min(T a, T b){
    if (a > b){
        return b;
    }
    return a;
}
int main(){
    MATRIX<double> M1(4, 4), M2(2, 2);
    M1 = M1.eye();
    M1.display_mat();
    M2.id();
    M2.display_mat();
    M1*= 2.0;
    M1.display_mat();
}
