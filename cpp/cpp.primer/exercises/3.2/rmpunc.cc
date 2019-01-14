
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
    string s,output;
    cout << "Please enter a string: " << endl;
    cin >> s;
    for (auto c:s)
    {
        if (!ispunct(c))
            output += c;
    }
    cout << "The string without punctuation is " << output << endl;
    return 0;
}
