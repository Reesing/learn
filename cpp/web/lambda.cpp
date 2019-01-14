#include <iostream>
using namespace std;

int main()
{
    int i = 1024;
    auto func = [=]{ cout << i; };
    func();
}
