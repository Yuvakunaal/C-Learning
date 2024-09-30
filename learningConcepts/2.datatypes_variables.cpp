#include <iostream>
using namespace std;

// Primitive Data types :-
// int : Takes 4 bytes of data internally
// char : Takes 1 byte of data internally
// float : Takes 4 bytes of data internally (if 'f' is not kept, it considers as double datatype)
// bool : Takes 1 byte of data internally (0 = false, 1 = true)
// double : Takes 8 bytes of data internally

int main()
{
    int variable;
    cout << variable << "\n"; // prints a random value known as garbage value.

    int age = 19; // store 19 in age variable with int datatype
    cout << "Age : " << age << ", Size of int : " << sizeof(age) << "\n";

    char grade = 'A';
    cout << "Grade : " << grade << ", Size of char : " << sizeof(grade) << "\n";

    float PI = 3.14f;
    cout << "PI : " << PI << ", Size of float : " << sizeof(PI) << "\n";

    bool isPass = true;
    cout << "Passed : " << isPass << ", Size of bool : " << sizeof(isPass) << "\n";

    double gpa = 9.21;
    cout << "GPA : " << gpa << ", Size of double : " << sizeof(gpa) << "\n";

    return 0;
}