#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // (-inf,60):F, [60,70):D, [70,80):C, [80,90):B, [90,100):A, 100:A++
    const vector<string> grades = {"F","D","C","B","A","A++"};    
    int score;
    cin >> score;

    string grade;
    if (score < 60)
    {
       grade = grades[0]; 
    }
    else
    {
        if (score==100)
            grade = "A++";
        else
        {
            grade = grades[(score-60)/10+1];
            if (score %10 > 7)
                grade += "+";
            else if (score % 10 < 3)
                grade += "-";
        }
    }

    cout << grade << endl;

    return 0;
}
