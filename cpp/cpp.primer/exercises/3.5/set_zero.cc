#include <iostream>
using namespace std;

int main()
{
    int arr[]={1,2,3,4,5};

    int *pb=begin(arr),*pe=end(arr);

    while(pb!=pe)
    {
        *pb = 0;
        ++pb;
    }

    for (int i=0;i<5;++i)
        cout << arr[i] << endl;
    
    return 0;
}

