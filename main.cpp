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
//    cout << endl;

    b.rellenar();
    b.showMatrix();
//    cout << endl;

    c = a + b;

    c.showMatrix();

 //   cout << endl;

    c = a - b;

    c.showMatrix();

//    cout << endl;

    c = a * b;

    cout<<c<<"/n";



    return 0;
}

