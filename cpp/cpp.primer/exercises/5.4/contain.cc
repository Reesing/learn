#include <iostream>
#include <vector>
using namespace std;

int main()
{
    //Read two vectors of ints
    vector<int> vint1 = {1,2,3,4,5,6};
    vector<int> vint2 = {1,2,3};
    vector<int> lvec;
    vector<int> svec;

    //Distinguish short and long vector
    auto len1 = vint1.size();
    auto len2 = vint2.size();
    if (len1>=len2)
    {
        lvec = vint1;
        svec = vint2;
    }
    else
    {
        lvec = vint2;
        svec = vint1;
    }

    bool long_contain_short = false;
    for (decltype(svec.size()) i=0;i!=svec.size();++i)
    {
        
    }
}
