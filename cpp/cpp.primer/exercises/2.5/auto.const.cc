#include <iostream>
using namespace std;
int main()
{
    int i=0, &r=i;
    auto a=r;

    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;
    //auto &h = 42;

    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", e = " << e << ", g = " << g << endl;

    a=1;b=1;c=1;
    //d=1;e=1;g=1;
    cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", e = " << e << ", g = " << g << endl;

    return 0;

}
