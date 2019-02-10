#include <iostream>
using namespace std;

long int fact(int ii)
{
    long int factorial = 1;
    if (ii>1)
        factorial = ii*fact(ii-1);
    return factorial;
}

int main()
{
    int ii;
    //long int fact(int);
    cout << "Please input a positive integer: ";
    cin >> ii;
    cout << "The factorial of " << ii << " is " << fact(ii) << endl;

    return 0;
}
