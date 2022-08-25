//
//  LinAlg.cpp
//  AlgebraLinear
//
//  Created by Castekc U on 2022-08-24.
//

#include "LinAlg.hpp"
#include <iostream>
#include <vector>
using namespace std;

typedef std::vector< std::vector<double> > m_matrix;
m_matrix Matrice(unsigned int  nrow,unsigned int  ncol, double initial_value = 0){
    m_matrix new_matrix(nrow, std::vector<double>(ncol,initial_value));
    return new_matrix;
}

vector<vector<double>> create_mat(unsigned i, unsigned j){
    vector<vector<double>> Matrix;
    for (int k(0); k < i; k++){
        Matrix.push_back(vector<double>(j));
    }
    return Matrix;
}

LinAlg:: LinAlg(){
}

vector<vector<double>> LinAlg:: creat_Mat(unsigned row, unsigned col){
    vector<vector<double>> Matrix;
    for (int k(0); k < row; k++){
        Matrix.push_back(vector<double>(col));
    }
    return Matrix;
    
}

void LinAlg:: display_mat(vector<vector<double>> Matrice){
    double row = Matrice.size();
    double col = Matrice[0].size();
    
    for (int i(0); i < row; i++){
        for (int j(0); j < col; j++){
            cout<< Matrice[i][j] << " ";
        }
        cout << endl;
    }
    
}

void LinAlg:: add(vector<vector<double>> Matrix1, vector<vector<double>> Matrix2){
    vector<vector<double>> sum;
    double row1 = Matrix1.size(); //m
    double col1 = Matrix1[0].size(); //n
    double row2 = Matrix2.size(); //k
    double col2 = Matrix2[0].size();//p
    
    
    if (row1 == row2 && col1 == col2){
    sum = creat_Mat(Matrix1.size(), Matrix1[0].size());
    for (int i(0); i < row1; i++){
        for (int j(0); j < col1; j++){
            sum[i][j] = Matrix1[i][j] + Matrix2[i][j];
        }
    }
        display_mat(sum);
        
    }else{
        cout << "The matrix should have the same size"<<endl;
    }
}

void LinAlg:: mul(vector<vector<double>> Matrix1, vector<vector<double>> Matrix2){
    double row1 = Matrix1.size();//m
    double col1 = Matrix1[0].size();//n
    double row2 = Matrix2.size(); //n
    double col2 = Matrix2[0].size();//p
    
    if (col1 != row2){
        cout << "The number of columns of first Matrix must be the same number of Matrix2's row"<<endl;
    }else{
        vector<vector<double>> prod;
        prod = creat_Mat(Matrix1.size(), Matrix2[0].size());
        for (int i(0); i < row1; i++){
            for (int j(0); j < col2; j++){
                for(int k(0); k < row2; k++){
                    prod[i][j] += Matrix1[i][k] * Matrix2[k][j];

                }
            }
            
        }
        display_mat(prod);
    }
    
    
}
