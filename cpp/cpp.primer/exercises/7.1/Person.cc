#include <iostream>
#include <string>
using namespace std;

struct Person {
    string getName() const {return name;};
    string getAddress() const {return address;};
    // Last two member functions should be const, since they won't change the object.

    string name;
    string address;
}

int main(){
    return 0;
}

