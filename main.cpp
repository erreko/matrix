#include "matrix.h"
#include<iostream>


using namespace std;

int main()
{
    matrix a(3,3);
    matrix b(3,3);
    matrix c(3,3);


    a.rellenar();
    a.showMatrix();
    cout << endl;

//    b.rellenar();
//    b.showMatrix();
//    cout << endl;


/*
    b.transpuesta(a);
    b.showMatrix();
*/

    a.escalar(5);
    a.showMatrix();
    cout << endl;


    return 0;
}

