#include <iostream>
using namespace std;

int main(){
    int i1=0,i2=0;
    cout << "Please input two integers: ";
    cin >> i1 >> i2;
    while (i1<=i2){
        cout << i1 << endl;
        ++i1;
    }
    return 0;
}
