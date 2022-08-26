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

int main(){
    /*typedef vector<vector<double>> mat2d;
    LinAlg Alg1;
    mat2d matrix1(Alg1.creat_Mat(2, 2)), matrix2(Alg1.creat_Mat(2, 2));
    
    matrix1 = {
        {1, 2},
        {3, 4}
    };
    matrix2 = {{5, 6}, {7, 8}};
    Alg1.display_mat(matrix1);
    Alg1.display_mat(matrix2);
    Alg1.add(matrix1, matrix2);
    Alg1.mul(matrix1, matrix2);*/
     
    MATRIX<double> M(2, 2);
    M.fillin(0, 0, 1);
    M.display_mat();
    
}
