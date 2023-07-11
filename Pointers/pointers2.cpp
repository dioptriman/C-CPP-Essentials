#include <iostream>
#include <stdio.h>
using std::cout;
using std::endl;

int main()
{
    int A[5]={2, 6, 8, 10, 4};
    int *p;
    p = A;

    for(int i=0; i < 5; i++)
    {
        cout<< p[i] << endl;
    }


    return 0;
}