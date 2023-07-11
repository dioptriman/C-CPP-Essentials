#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using std::cout;
using std::endl;

void fun(int *A, int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}

int main()
{
    int A[]={2,4,6,8,10};
    int n = 5;
    fun(A, n);
    return 0;
}