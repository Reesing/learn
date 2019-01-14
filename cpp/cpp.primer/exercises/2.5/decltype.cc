#include <iostream>
using namespace std;
int main()
{
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    cout << "c = " << c << ", d = " << d << endl;
    ++c;
    ++d;
    cout << "c = " << c << ", d = " << d << endl;

    return 0;

}
