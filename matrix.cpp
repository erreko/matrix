#include "matrix.h"
#include<iostream>

using namespace std;

int matrix::getRows()
{
    return this->rows;
}

void matrix::setRows(int value)
{
   this->rows = value;
}

int matrix::getCols()
{
    return this->cols;
}

void matrix::setCols(int value)
{
   this->cols = value;
}
matrix::matrix()
{
  m = NULL;
  rows =0;
  cols =0;
}

matrix::matrix(int rows, int cols)
{
    this->rows = rows;
    this->cols = cols;

    m = new int*[rows];
    for (int i =0; i< rows; i++)
    {
        m[i] = new int[cols];

    }

    for (int i =0; i<rows; i++)
       {
        for (int j=0; j <cols ; j++)
            {
                 m[i][j] = 0;

            }
       }
}

void matrix::showMatrix()
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout << m[i][j] << " " ;
        }
        cout << endl;
    }

}

void matrix::suma(matrix a, matrix b)
{

    for(int i =0;i<rows; i++)
    {
        for(int j=0;j<cols;j++)
        {
            m[i][j] = a.m[i][j] + b.m[i][j];
        }
    }
}

void matrix::resta(matrix a, matrix b)
{
    for(int i =0;i<rows; i++)
    {
        for(int j=0;j<cols;j++)
        {
            m[i][j] = a.m[i][j] - b.m[i][j];
        }
    }
}

void matrix::escalar(int a)
{
    for(int i =0;i<rows; i++)
    {
        for(int j=0;j<cols;j++)
        {
            m[i][j] *= a;
        }
    }
}

void matrix::transpuesta(matrix a)
{
    for(int i =0;i<cols; i++)
    {
        for(int j=0;j<rows;j++)
        {
            m[j][i]= a.m[i][j];
        }
    }

}

void matrix::mul(matrix a, matrix b)
{
    int **d;
    d = new int*[rows];
    for(int i=0;i<rows;i++)
    {
        d[i]= new int[cols];
    }

    for(int i =0;i<rows; i++)
    {
        for(int j=0;j<cols;j++)
        {
            for(int k=0;k<cols;k++)
            {
               m[i][j]= m[i][j] + a.m[i][k]*b.m[k][j];
            }
        }
    }
}

void matrix::rellenar()
{
    for(int i =0;i<rows; i++)
    {
        for(int j=0;j<cols;j++)
        {
           // cin >> m[i][j];
            m[i][j] = i+1;
        }
    }

}

void matrix::showMatrixT()
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout << m[i][j] << " " ;
        }
        cout << endl;
    }

}

