//
//  Matrix.hpp
//  AlgebraLinear
//
//  Created by Castekc U on 2022-08-26.
//

#ifndef Matrix_hpp
#define Matrix_hpp
#include <iostream>
#include <stdio.h>
using namespace std;
template <typename T>
class MATRIX{
public:
    MATRIX(){
        m_row = 0;
        m_col = 0;
        M = nullptr;
    }
    MATRIX(int n_row, int n_col){ //Constuctor
        m_row = n_row;
        m_col = n_col;
        
        for (int i(0); i < m_row; i++){
            M = (T**) new T[m_row];
        }
        
        for (int i(0); i<m_row; i++){
            M[i] = (T*) new T[m_col];
        }
        for (int i(0); i<m_row; i++){
            for (int j(0); j<m_col; j++){
                M[i][j] = 0;
            }
        }
    }
    MATRIX(const MATRIX& _M){
        m_row = _M.m_row;
        m_col = _M.m_col;
        
        M = (T**) new T[m_row];
        
        for (int i(0); i<m_row; i++){
            M[i] = (T*) new T[m_col];
        }
        for (int i(0); i<m_row; i++){
            M[i] = (T*) new T[m_col];
        }
        for (int i(0); i<m_row; i++){
            for (int j(0); j<m_col; i++){
                M[i][j] = _M.M[i][j];
            }
        }
    }
    void fillin(int i, int j, T value){
        M[i][j] = value;
    }
    void display_mat(){
        for (int i(0); i < m_row; i++){
            for (int j(0); j < m_col; j++){
                cout<< M[i][j]<<" ";
            }
            cout << endl;
        }
    }
    MATRIX add(const MATRIX& m){;
        if (m_row == m.m_row && m_col == m.m_col){
            MATRIX new_mat(m_row,  m_col);
        for (int i(0); i < m.m_row; i++){
            for (int j(0); j< m.m_col; j++){
                new_mat.fillin(i, j, M[i][j] + m.M[i][j]);
            }
        }
            return new_mat;
            
        }else{
            cout << "The matrix should have the same size" << endl;
            MATRIX mat_null;
            return mat_null;
        }
    }
    MATRIX operator+ (MATRIX &right){
        MATRIX result;
        result = right.add(*this);
        return result;
    }
private:
    T** M;
    int m_row;
    int m_col;
};

#endif /* Matrix_hpp */
