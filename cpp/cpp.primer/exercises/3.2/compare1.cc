#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1,str2;
    cin >> str1 >> str2;
    if (str1==str2)
        cout << "Two strings are identical!" << endl;
    else
    {
        if (str1>str2)
            cout << str1 << " is larger." << endl;
        else
            cout << str2 << " is larger." << endl;
    }
    return 0;
}
