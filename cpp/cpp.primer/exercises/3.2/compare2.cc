#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1,str2;
    cin >> str1 >> str2;
    if (str1.size()==str2.size())
        cout << "Two strings have equal length!" << endl;
    else
    {
        if (str1.size()>str2.size())
            cout << str1 << " is longer." << endl;
        else
            cout << str2 << " is longer." << endl;
    }
    return 0;
}
