#include <iostream>
#include <string>
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

bool containCapital(string s)
{
    for (auto &c:s)
    {
        if (c>='A' && c<='Z')
            return true;
    }
    return false;
}

void toLower(string &s)
{
    for (auto &c:s)
    {
        if (c>='A' && c<='Z')
        {
            c -= ('A'-'a');
        }
    }
}

int larger(int a,int *bp)
{
    return a>*bp?a:*bp;
}

void swapByPointer(int *ap,int *bp)
{
    int c;
    c = *bp;
    *bp = *ap;
    *ap = c; 
}
