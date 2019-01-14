#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int i;
    vector<int> vint;

    while(cin >> i)
        vint.push_back(i);

    for(auto b=vint.begin();b!=(vint.end()-1);++b)
        cout << *b+*(b+1) << " ";
    cout << endl;

    return 0;
}
