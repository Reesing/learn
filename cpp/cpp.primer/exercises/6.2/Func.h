#include <string>
#include <initializer_list>
#ifndef FUNCS
#define FUNCS

void reset(int&);
void swap(int&,int&);
bool containCapital(std::string);
void toLower(std::string&);
int larger(int,int*);
void swapByPointer(int*,int*);
int sumInitList(std::initializer_list<int>);

#endif
