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
    MATRIX<double> M1(2, 3), M2;
    M1.fillin(0, 0, 1);
    M1.fillin(0, 1, 2);
    M1.fillin(0, 2, 3);
    M1.fillin(1, 0, 3);
    M1.fillin(1, 1, 6);
    M1.fillin(1, 2, 9);
    M1.display_mat();
    M2 = M1.triangular();
    M2.display_mat();
    cout << M1.rank();

}
