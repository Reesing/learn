#include <iostream>
#include "Chapter6.h"
using namespace std;

int main()
{
    int ii;
    //long int fact(int);
    cout << "Please input a positive integer: ";
    cin >> ii;
    cout << "The factorial of " << ii << " is " << fact(ii) << endl;

    return 0;
}
