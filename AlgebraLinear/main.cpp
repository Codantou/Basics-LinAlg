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
using namespace std;

int main(){
    LinAlg mat1;
    vector<vector<double>> Matrix, Matrix2;
    Matrix = mat1.creat_Mat(2, 2);
    Matrix2 = mat1.creat_Mat(2, 1);
    Matrix[0][0] = 1;
    Matrix[0][1] = 2;
    Matrix[1][0] = 4;
    Matrix[1][1] = 3;
    
    Matrix2[0][0] = 5;
    Matrix2[1][0] = 6;

    
    mat1.display_mat(Matrix);
    cout<<"------------------"<<endl;
    mat1.display_mat(Matrix2);
    cout<<"------------------"<<endl;
    mat1.add(Matrix, Matrix2);
    cout<<"------------------"<<endl;
    mat1.mul(Matrix, Matrix2);
}
