#include <iostream>
using namespace std;

int main(){
    int i1=0,i2=0;
    int min_num=0,max_num=0;
    cout << "Please input two integers: ";
    cin >> i1 >> i2;
    if (i1>=i2){
        min_num = i2;
        max_num = i1;
    }
    else{
        min_num = i1;
        max_num = i2;
    }
    while (min_num<=max_num){
        cout << min_num << endl;
        ++min_num;
    }
    return 0;
}
