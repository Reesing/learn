#include <stdio.h>
#define STR(s) #s
#define CONS(a,b) (int)(a##e##b)
int main(void)
{
#ifdef STR
    printf(STR(VKDDSD));
#endif
#ifdef CONS
    printf("\n%d\n",CONS(2,3));
#endif
    return 0;
}
