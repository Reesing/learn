#include <iostream>
using namespace std;

int main()
{
    int aCnt=0,eCnt=0,iCnt=0,oCnt=0,uCnt=0;
    char ch;
    while (cin >> ch)
    {
        switch (ch)
        {
            case 'a':case 'A':
                aCnt += 1;
                break;
            case 'e':case 'E':
                eCnt += 1;
                break;
            case 'i':case 'I':
                iCnt += 1;
                break;
            case 'o':case 'O':
                oCnt += 1;
                break;
            case 'u':case 'U':
                uCnt += 1;
                break;
        }
    }
    cout << "Num of a/A: " << aCnt << endl;
    cout << "Num of e/E: " << eCnt << endl;
    cout << "Num of i/I: " << iCnt << endl;
    cout << "Num of o/O: " << oCnt << endl;
    cout << "Num of u/U: " << uCnt << endl;

    return 0;
}
