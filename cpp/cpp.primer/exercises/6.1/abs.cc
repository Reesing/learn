#include <iostream>
using namespace std;

int abs(int val)
{
    if (val<0)
        val = -1*val;
    return val;
}

int main()
{
    int ii;
    
    cout << "Please input an integer: ";
    cin >> ii;
    cout << "The absolute value of " << ii << " is " << abs(ii) << endl;

    return 0;
}
