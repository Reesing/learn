#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> svec = {"12","admin","bready","Zidan10"};
    for (auto &s:svec)
        cout << sizeof(s) << " ";
    cout << sizeof(svec);
    cout << endl;

    return 0;
}
