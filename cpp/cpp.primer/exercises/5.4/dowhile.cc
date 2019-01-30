#include <iostream>
#include <string>
using namespace std;

int main()
{
    string yon;
    string s1,s2;

    do
    {
        cout << "Please input two strings:" << endl;
        cin >> s1 >> s2;
        if (s1>s2)
            cout << s1 << " is greater than " << s2 << endl;
        else if (s1<s2)
            cout << s1 << " is less than " << s2 << endl;
        else
            cout << s1 << " is equal to " << s2 << endl;

        cout << "Do you want to try again? [y/n]" ;
        cin >> yon;
    }
    while (yon[0]=='y' || yon[0]=='Y');

    return 0;

}

