#include <iostream>
#include <stdexcept>
using namespace std;

int main()
{
    cout << "Please enter two integers:" << endl;
    int a,b;
    double q;
    cin >> a >> b;

    try{
        q = a/b;
        cout << "The quotation is " << q << endl;
    } catch (runtime_error err){
        cout << err.what() << endl;
    }

    return 0;

}
