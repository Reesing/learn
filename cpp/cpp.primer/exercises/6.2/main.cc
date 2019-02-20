#include <iostream>
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

    return 0;
}
