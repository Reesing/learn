#include <stdio.h>
#define sqr(x)((x)*(x)) // print 5*5
//#define sqr(x)(x*x) // print 3*3+2
int main(void)
{
    int b = 3;
    #ifdef sqr
    printf("a = %d\n",sqr(b+2));
    #endif
    return 0;
}
