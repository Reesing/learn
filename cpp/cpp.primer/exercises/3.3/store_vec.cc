#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ivec;
    int i;
    while (cin >> i)
        ivec.push_back(i);
    cout << ivec[0] << endl;
    return 0;
}
