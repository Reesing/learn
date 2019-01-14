#include <iostream>
using namespace std;
# define N 100
int main()
{
    char X[N];
    cin.getline(X,N);
    int a=0,b=0;
    for (int i=0;i<N;i++)
    {
        if (X[i]=='#')
            break;
        if (X[i]>='0' && X[i]<='9')
            a++;
        if ((X[i]>='a' && X[i]<='z')||(X[i]>='A' && X[i]<='Z'))
            b++;
    }
    cout << a << endl << b << endl;
    return 0;
}
