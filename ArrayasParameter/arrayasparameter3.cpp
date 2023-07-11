#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using std::cout;
using std::endl;

void fun(int *A, int n)
{
    A[0] = 25;
}

int main()
{
    int A[]={2,4,6,8,10};
    int n = 5;
    fun(A, n);
    for(int x:A)
    {
        cout << x << endl;
    }
    return 0;
}