#include <iostream>
using namespace std;

int main()
{
    const size_t srow = 3,scol = 4;
    int marr[srow][scol]={0,1,2,3,4,5,6,7,8,9,10,11};

    //Method 1:Use a range for to manage the iteration
    cout << "Method 1:" << endl;
    for (int (&r)[scol]:marr)
        for (int &c:r)
            cout << c << " ";
    cout << endl;

    //Method 2:Use an ordinary loop using subscripts.
    cout << "Method 2:" << endl;
    for (size_t r=0;r!=srow;++r)
        for (size_t c=0;c!=scol;++c)
            cout << marr[r][c] << " ";
    cout << endl;

    //Method 3:
    cout << "Method 3:" << endl;
    for (int (*p)[scol]=marr;p!=marr+srow;++p)
        for (int *q=*p;q!=*p+scol;++q)
            cout << *q << " ";
    cout << endl;
    
    return 0;
}
