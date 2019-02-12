#include "Chapter6.h"

long int fact(int ii)
{
    long int factorial = 1;
    if (ii>1)
        factorial = ii*fact(ii-1);
    return factorial;
}
