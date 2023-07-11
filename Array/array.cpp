//IO Library for C++
#include <iostream>
// C Library
#include<stdio.h>

//Function that is used in here from the standard library
using std::cout;
using std::endl;

int main()
{
    int A[5];
    A[0] = 12;
    A[1] = 5;
    A[2] = 90;

    cout<<sizeof(A) << endl;
    cout<<A[1]<<endl;

    //In C language way
    printf("%d\n",A[2]);

    return 0;
}