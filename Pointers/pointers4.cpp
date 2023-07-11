#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using std::cout;
using std::endl;

int main()
{

    int *p;
    p = new int[5];
    p[0] = 10;
    p[1] = 9;
    p[2] = 141;
    p[3] = 494949230;
    p[4] = 9990;
    for(int i=0; i < 5; i++)
    {
        cout<< p[i] << endl;
    }

    delete [ ]p;
    return 0;
}