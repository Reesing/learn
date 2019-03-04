#include <iostream>
#include <string>
using namespace std;

string (&func())[10];

typedef string strArray[10];
strArray& foo1();
auto foo2() -> string(&)[10];

string sa={'a','b'};
decltype(sa) &foo3();
