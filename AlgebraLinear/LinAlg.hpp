//
//  LinAlg.hpp
//  AlgebraLinear
//
//  Created by Castekc U on 2022-08-24.
//

#ifndef LinAlg_hpp
#define LinAlg_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector<vector<double>> create_mat(int i, int j);

class LinAlg{
public:
    LinAlg();
    LinAlg(int row, int col);
    vector<vector<double>> creat_Mat(unsigned row, unsigned col);
    void display_mat(vector<vector<double>> Matrice);
    void add(vector<vector<double>> Matrix1, vector<vector<double>> Matrix2);
    void mul(vector<vector<double>> Matrix1, vector<vector<double>> Matrix2);
    

};
#endif 
