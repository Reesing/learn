#include <iostream>
#include <string>
#include <initializer_list>
#include "Func.h"
using namespace std;

int main()
{
    // Ex 6.11
    int a = 1;
    reset(a);
    cout << "a = " << a << endl;

    // Ex 6.12
    int p = 1, q = 2;
    swap(p,q);
    cout << "p = " << p << ", q = " << q << endl;

    // Ex 6.17
    string s;
    cout << "6.17 Please input a string:" << endl;
    cin >> s;
    cout << s << " contains capital letters:" << containCapital(s) << endl;
    toLower(s);
    cout << "Lowercase: " << s << endl;

    // Ex 6.21
    int x,y;
    int *yp = &y;
    cout << "6.21 Please input two integers:" << endl;
    cin >> x >> y;
    cout << "The larger number is " << larger(x,yp) << endl;

    // Ex 6.22
    int w,z;
    int *wp=&w, *zp=&z;
    cout << "6.22 Please input two integers:" << endl;
    cin >> w >> z;
    swapByPointer(wp,zp);
    cout << "Swap result: " << w << " " << z << endl;

    // Ex 6.27
    cout << "6.27 Sum of 1,2,3,4,5 is " << sumInitList({1,2,3,4,5}) << endl;

    return 0;
}
