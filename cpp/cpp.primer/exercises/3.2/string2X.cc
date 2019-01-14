#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s;
    cout << "Please enter a string: " << endl;
    cin >> s;
    for (char &c:s)
        c = 'X';
    cout << "Your string has been changed into " << s << endl;
    return 0;
}
