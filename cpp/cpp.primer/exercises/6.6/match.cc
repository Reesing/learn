#include <iostream>
using namespace std;

void f()
{
    cout << "f()" << endl;
}

void f(int i)
{
    cout << "f(int)" << endl;
}

void f(int i,int j)
{
    cout << "f(int int)" << endl;
}

void f(double i,double j=3.14)
{
    cout << "f(double,double)" << endl;
}

int main()
{
    //f(2.56,42);     //ambiguous
    f(42);
    f(42,0);
    f(2.56,3.14);

    return 0;

}
