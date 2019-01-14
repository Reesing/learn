#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vscore;
    vector<int> vnum(10,0);
    int score;

    while(cin >> score)
        vscore.push_back(score);

    auto b=vnum.begin(),e=vnum.end();
    decltype(b) idx;
    for (auto s=vscore.begin();s!=vscore.end();++s)
    {
        idx = b+(*s/10);
        ++(*idx);
    }
    
    for (auto num=vnum.begin();num!=vnum.end();++num)
        cout << *num << " ";
    cout << endl;

    return 0;

}
