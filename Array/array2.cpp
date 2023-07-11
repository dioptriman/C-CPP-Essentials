//IO Library for C++
#include <iostream>
// C Library
#include<stdio.h>

//Function that is used in here from the standard library
using std::cout;
using std::endl;

int main()
{
    int A[10] = {2, 6, 8, 10, 9, 5, 7, 8, 4};


    //For loop
    for(int i=0; i < 10; i++)
    {
        cout<<A[i]<<endl;
    }

    //For Each loop
    for(int x:A)
    {
        cout<<"for each loop in x this is"<<endl;
        cout<<x<<endl;
    }

    return 0;
}