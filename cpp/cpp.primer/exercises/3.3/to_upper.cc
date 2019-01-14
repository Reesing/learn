#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main()
{
    vector<string> vstr;
    string s;
    while (cin >> s)
    {
        vstr.push_back(s);
    }
    for (string str:vstr)
    {
        //cout << str << " ";
        for (auto &s:str)
            s = toupper(s);
        cout << str << " " ;
    }
        cout << endl;
    return 0;

}
