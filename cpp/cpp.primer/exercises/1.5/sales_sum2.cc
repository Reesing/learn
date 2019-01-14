#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
    Sales_item bookSum,book ;
    cin >> bookSum;
    while (cin >> book){
        bookSum += book;
    }
    cout << bookSum << endl;
    return 0;
}
