#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vint;
    int i;
    while (cin >> i)
        vint.push_back(i);

    for (auto it=vint.cbegin();it!=vint.cend();++it)
        cout << *it * 2 << " ";

    cout << endl;

    return 0;

    
}
