#include <iostream>
#include "Func.h"
using namespace std;

void reset(int &i)
{
    i = 0;
}

void swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
