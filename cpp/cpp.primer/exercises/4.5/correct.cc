#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {1,2,3,4};
    int ival = 2;
    int *ptr;
    ptr = &ival;

    cout << *ptr << endl;
    if (ptr!=0 && *ptr++)
        cout << *ptr << endl;

    if (ival++ && ival)
        cout << ival << endl;

    //It is error!(Order of evaluation)
    //if (vec[ival++]<=vec[ival])
    if (vec[ival+1] <= vec[ival])
        cout << vec[ival++] << endl;


    return 0;
}
