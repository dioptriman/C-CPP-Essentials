//IO Library for C++
#include <iostream>
// C Library
#include<stdio.h>

//Function that is used in here from the standard library
using std::cout;
using std::endl;
using std::cin;

int main()
{
    int n;
    cout << "Enter size of an array : ";
    cin >> n;
    int A[n];

     for(int x:A)
    {
        cout<<x<<endl;
    }

    return 0;
}