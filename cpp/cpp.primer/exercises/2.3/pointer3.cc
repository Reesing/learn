#include <iostream>
using namespace std;
int main(){
    int ival = 42;
    int *p = &ival;
    *p = *p * *p;
    cout << *p << endl;
    return 0;
}
