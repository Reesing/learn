#include <iostream>
#include <string>
using namespace std;

string make_plural(const string s,const string end = "s")
{
    return s+end;
}

int main()
{
    cout << make_plural("success","es") << endl;
    cout << make_plural("failure") << endl;

    return 0;

}
