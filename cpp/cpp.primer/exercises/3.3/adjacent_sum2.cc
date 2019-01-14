#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vint;
    int num;

    while (cin >> num)
        vint.push_back(num);
    
    decltype(vint.size()) vsize = vint.size();

    for (decltype(vsize) i=0;i<int((vsize+1)/2);++i)
    {
        cout << vint[i]+vint[vsize-1-i] << " ";
    }
    cout << endl;
    return 0;
}
