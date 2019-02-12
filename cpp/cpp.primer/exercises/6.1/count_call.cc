#include <iostream>
using namespace std;

int count_calls()
{
    static int n_calls = 0;
    return n_calls++;
}

int main()
{
    for (int i=0;i!=10;++i)
        cout << count_calls() << endl;
    return 0;
}
