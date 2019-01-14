#include <iostream>
#include <ctime>
using namespace std;

int main()
{
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "Local date and time:" << dt << endl;
    
    tm *gmtm = gmtime(&now);
    dt = asctime(gmtm);
    cout << "UTC date and time:  " << dt << endl;
}
