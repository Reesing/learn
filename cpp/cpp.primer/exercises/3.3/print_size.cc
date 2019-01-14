#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v1;
    cout << "Size: " << v1.size() << endl;
    
    vector<int> v2(10);
    cout << "Size: " << v2.size() << endl;

    vector<int> v3{10};
    cout << "Size: " << v3.size() << endl;



    return 0;

}
