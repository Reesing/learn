#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string svec[4] = {"12","admin","bready","Zidan10"};
    for (auto &s:svec)
        cout << sizeof(s) << " ";
    cout << sizeof(svec);
    cout << endl;

    return 0;
}
