#include <iostream>
#include <string>
using namespace std;

struct Person {
    string getName() const {return name;};
    string getAddress() const {return address;};
    // Last two member functions should be const, since they won't change the object.

    string name;
    string address;
};

istream &read(istream &is,Person &person){
   is >> person.name >> person.address;
   return is;
}

ostream &print(ostream &os,const Person &person){
    os << "Name: " << person.name << ", address: " << person.address << endl;
    return os;
}

int main(){
    Person a;
    while(read(cin,a))
        print(cout,a);

    return 0;
}

