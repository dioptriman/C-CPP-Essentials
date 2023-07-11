//Parameter Passing call by value

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using std::cout;
using std::endl;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    int x, y, z;
    x = 80;
    y = 79;
    z = add(x, y);
    cout << z << endl; 
    return 0;
}