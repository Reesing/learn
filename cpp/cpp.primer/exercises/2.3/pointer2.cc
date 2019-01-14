#include <iostream>
using namespace std;
int main(){
    int val = 10;
    int *p = &val;
    cout << "The original value of p and val is " << p << " " << *p << endl;
    int val2 = 11;
    p = &val2;
    cout << "p's new value: " << p << endl;

    *p = 12;
    cout << "The new value of p and val is " << p << " " << *p << endl;

    return 0;

}

