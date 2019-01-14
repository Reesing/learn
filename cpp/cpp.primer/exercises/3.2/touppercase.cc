#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s;
    cin >> s; 
    //string s("Hello world!");  
    for (auto &r: s)
        r = toupper(r);
    cout << s << endl;
    return 0;
}
