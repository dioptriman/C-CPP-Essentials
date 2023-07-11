#include <iostream>
#include <stdio.h>
using std::cout;
using std::endl;

int main()
{
    int a = 10;
    int *p ;
    p = &a;
    cout << a << endl;
    printf("Using pointer %d \n", *p);
    cout << "Pointer Address : " << p << endl;
    cout << "Pointer Address with a : " << &a << endl;
    return 0;
}