#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<string> svec;
    string s;
    // Read in vector of strings
    while (cin >> s)
        svec.push_back(s);

    int i=0;
    while (i<(svec.size()-1))
    {
        if (svec[i]==svec[i+1])
        {
            cout << "The word " << svec[i] << " occurs twice in succession!" << endl;
            break;
        }
        i++;
    }
    //If there is no repeated words, then print a message
    if (i==(svec.size()-1))
        cout << "There is no repeated words." << endl;

    return 0;

}
