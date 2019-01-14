#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vint;
    int num;

    while (cin >> num)
        vint.push_back(num);

    for (decltype(vint.size()) i=1;i<vint.size();++i)
        cout << vint[i-1]+vint[i] << " ";
    cout << endl;
    return 0;
}
