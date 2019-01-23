#include <iostream>
using namespace std;

int main()
{
    constexpr int size = 5;
    int ia[size] = {1,2,3,4,5};
    for (int *ptr=ia,ix=0;ix!=size && ptr!=ia+size;++ix,++ptr)
    {
        cout << "--------------------" << endl;
        cout << "ix = " << ix << endl;
        cout << "*ia = " << *ia << endl;
        cout << "ia = " << ia << endl;
        cout << "*ptr = " << *ptr << endl;
        cout << "ptr = " << ptr << endl;
        cout << "ptr+1 = " << ptr+1 << endl;
        cout << "ptr+2 = " << ptr+2 << endl;
        cout << "*(ia+size) = " << *(ia+size) << endl;
        cout << "ia+size = " << ia+size << endl;
    }
    return 0;
}
