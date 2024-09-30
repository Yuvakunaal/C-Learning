#include <iostream>
using namespace std;

int main()
{
    int age = 19, num = 5, integer = -4, marks = 44;
    // if-else
    // Voting right
    if (age >= 18)
    {
        cout << "Eligeble to vote" << "\n";
    }
    else
    {
        cout << "Not Eligeble to vote" << "\n";
    }

    if (num % 2 == 0)
    {
        cout << "Even" << "\n";
    }
    else
    {
        cout << "Odd" << "\n";
    }

    // if-else if-else
    // Positive or negative
    if (integer > 0)
    {
        cout << "Positive" << "\n";
    }
    else if (integer < 0)
    {
        cout << "Negative" << "\n";
    }
    else
    {
        cout << "Neither positive nor negative" << "\n";
    }

    // Grading system
    if (marks <= 100 && marks >= 90)
    {
        cout << "Grade : A+" << "\n";
    }
    else if (marks < 90 && marks >= 80)
    {
        cout << "Grade : A" << "\n";
    }
    else if (marks < 80 && marks >= 70)
    {
        cout << "Grade : B" << "\n";
    }
    else if (marks < 70 && marks >= 60)
    {
        cout << "Grade : C" << "\n";
    }
    else if (marks < 50 && marks >= 50)
    {
        cout << "Grade : D" << "\n";
    }
    else if (marks < 50 && marks >= 35)
    {
        cout << "Grade : E" << "\n";
    }
    else if (marks < 35 && marks >= 0)
    {
        cout << "Grade : F" << "\n";
    }
    else
    {
        cout << "Invalid marks entered" << "\n";
    }

    // Practice questions :-
    // Find characters lowercase or uppercase ?
    char ch = 'z';
    if (ch >= 'a' && ch <= 'z')
    {
        cout << "LowerCase" << "\n";
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "UpperCase" << "\n";
    }
    else
    {
        cout << "Invalid alphabet entered" << "\n";
    }

    // or

    int val = ch;
    if (val >= 65 && val <= 90) // ASCII val from (A - Z) = (65 - 90)
    {
        cout << "UpperCase" << "\n";
    }
    else if (val > 90 && val <= 122) // ASCII val from (a - z) = (90 - 122)
    {
        cout << "LowerCase" << "\n";
    }
    else
    {
        cout << "Invalid alphabet entered" << "\n";
    }

    // Ternary statements :-
    int n = 44;
    cout << (n >= 0 ? "Positive" : "Negative") << "\n";
    return 0;
}