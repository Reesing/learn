#include <iostream>
#include <vector>
#include <string>
using namespace std;

void prstringVec(vector<string>::iterator beg,vector<string>::iterator end)
{
    if (beg==end)
    {
        cout << endl;
        return;
    }
    cout << *beg << " ";
    prstringVec(beg+1,end);
}


int main()
{
    vector<string> vec;
    string s;
    while (cin >> s)
    {
        vec.push_back(s);
    }
    prstringVec(vec.begin(),vec.end());

    return 0;
}
