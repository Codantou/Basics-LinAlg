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

template <typename T> class MATRIX{
    
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
        cout<< endl;
    }
    MATRIX add(const MATRIX& m){
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
        result = (*this).add(right);
        return result;
    }
    MATRIX mul(const MATRIX& m){
        if (m_col == m.m_row){
            MATRIX new_mat(m_row, m.m_col);
            for(int i(0); i < m_row;  i++){
                T val(0);
                    for(int j(0); j < m.m_col; j++){
                        for (int k(0); k < m_col; k++){
                            val += M[i][k] * m.M[k][j];
                        }
                        new_mat.fillin(i, j, val);

                    }
                }
            return new_mat;
            }else{
                cout << "Can't compute the product of this two matrix;"<<endl;
                MATRIX mat_null;
                return mat_null;
            }
            
        }
    
    MATRIX operator* (MATRIX &right){
        MATRIX result;
        result = (*this).mul(right);
        return result;
    }
    
    MATRIX substract(const MATRIX& m){
        if (m_row == m.m_row && m_col == m.m_col){
            MATRIX new_mat(m_row,  m_col);
        for (int i(0); i < m.m_row; i++){
            for (int j(0); j< m.m_col; j++){
                new_mat.fillin(i, j, M[i][j] - m.M[i][j]);
            }
        }
            return new_mat;
            
        }else{
            cout << "The matrix should have the same size" << endl;
            MATRIX mat_null;
            return mat_null;
        }
    }
    
    MATRIX operator- (MATRIX &right){
        MATRIX result;
        result = (*this).substract(right);
        return result;
    }
    
    T det(){
        T det_ = 0;
        int p, j, i;
        if (m_row == m_col){
            if (m_row == 2){
                return M[0][0]*M[1][1] - M[0][1]*M[1][0];
            }/*else{
                int h(0), k(0);
                for (p=0; p < m_row; p++){
                    MATRIX new_mat(m_row-1, m_col-1);
                    for(i=0; i < m_row; i++){
                        for (j=0; j < m_row; j++){
                            if (j == p){
                                continue;
                            }
                            new_mat.fillin(h, k, M[i][j]);
                            k++;
                            if (k == m_row-1){
                                h++;
                                k=0;
                            }
                            
                        }
                    }
                    det_ = det_ +M[0][p] * pow(-1, p) * new_mat.det();
                }
                
                return det_;
            }*/
        }
        return det_;
    }
    
    MATRIX transpose(){
        MATRIX new_mat(m_col, m_row);
        for (int j(0); j < m_col; j++){
            for (int i(0); i < m_row; i++){
                new_mat.fillin(j, i, M[i][j]);
            }
        }
        return new_mat;
    }
private:
    T** M;
    int m_row;
    int m_col;
};

#endif /* Matrix_hpp */
