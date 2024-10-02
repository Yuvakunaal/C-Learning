#include <iostream>
#include <string>
using namespace std;

class Person2
{
public:
    string name;
    int age;
};

class Student2 : public Person2
{
public:
    int rollno;
};

class GradStudent : public Student2
{
public:
    string branch;
};

int main()
{
    Student2 s2;
    s2.name = "Vakul";
    s2.age = 20;
    s2.rollno = 59;
    // s2.branch = "AIDS"; // Gives error since GradStudent is not inherited to Student2
    cout << s2.name << s2.age << s2.rollno << "\n\n";
    
    GradStudent gs;
    gs.name = "kunaal";
    gs.age = 19;
    gs.rollno = 31;
    gs.branch = "AIDS";

    cout << gs.name << gs.age << gs.rollno << gs.branch << "\n";
    return 0;
}