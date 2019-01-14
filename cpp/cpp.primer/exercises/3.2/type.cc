#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;
int main()
{
    const string s = "LittleBreay";
    for (auto &r:s)
        cout << typeid(r).name() << endl;
    auto &rr = s;
    cout << typeid(rr).name() << endl;
    int a=1;
    cout << typeid(a).name() << endl;
    return 0;
}
