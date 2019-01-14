#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> svec = {"a","b","c","d","e"};

    auto iter = svec.begin();

    cout << "*iter++:" << *iter++ << endl;
    //error:cout << "(*iter)++:" << (*iter)++ << endl;
    //error:cout << "*iter.empty():" << *iter.empty() << endl;
    cout << "(*iter).empty():" << (*iter).empty() << endl;
    cout << "iter->empty():" << iter->empty() << endl;
    //error:cout << "++*iter:" << ++*iter << endl;
    cout << "(++iter)->empty():" << (++iter)->empty() << endl;

    
    return 0;
}
