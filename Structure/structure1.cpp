#include <iostream>
#include <stdio.h>

using std::cout;
using std::endl;

struct rectangle
{
    int length;
    int breadth;
    char x;
};


int main()
{
    struct rectangle r={10, 5};

    cout << r.breadth << endl;
    cout << r.length << endl;

    r.length = 15;
    r.breadth = 7;

    cout << r.breadth << endl;
    cout << r.length << endl;
    return 0;
}