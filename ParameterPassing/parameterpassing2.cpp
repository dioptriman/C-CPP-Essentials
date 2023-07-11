//Parameter Passing call by address

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using std::cout;
using std::endl;

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a, b;
    a = 80;
    b = 79;
    cout << a << endl;
    cout << b << endl; 

    cout << "After swapping the value : " << endl;
    swap(&a, &b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}