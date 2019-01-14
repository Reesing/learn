#include <iostream>
using namespace std;

int main()
{
    const char *cp = "Hello, world!";
    if (cp && *cp)
        cout << cp << " " << *cp << endl;

    return 0;
}
