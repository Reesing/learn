#include <iostream>
using namespace std;

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a,b;
    cout << "Please input two integers:" << endl;
    cin >> a >> b;

    swap(a,b);

    cout << "Result of swap: a = " << a << ", b = " << b << endl;

    return 0;
    
}

