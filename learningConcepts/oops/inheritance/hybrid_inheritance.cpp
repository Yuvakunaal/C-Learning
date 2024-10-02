#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
    int age;
};

// Virtual inheritance ensures that when multiple classes inherit from the same base class, only one copy of the base class is shared among all the derived classes. It prevents ambiguity and duplication of base class members.
// In this case, without virtual inheritance, both Student and Teacher would each have their own separate copy of the Person class, leading to confusion about which age to use in the TA class. Virtual inheritance avoids this by making sure there's only one Person instance.

class Student : virtual public Person // Virtual inheritance
{
public:
    string name;
    int rollno;
};

class Teacher : virtual public Person // Virtual inheritance
{
public:
    string dept;
};

class Gradstudent : public Student
{
public:
    string branch;
};

class TA : public Student, public Teacher
{
public:
    string collegename;
};

int main()
{
    Student s;
    s.name = "Kunaal";
    s.age = 19;
    s.rollno = 31;
    cout << s.name << " " << s.age << " " << s.rollno << "\n\n";

    Teacher t;
    t.age = 48;
    t.dept = "AIDS";
    cout << t.age << " " << t.dept << "\n\n";

    Gradstudent gs;
    gs.name = "Kunaal";
    gs.age = 19;
    gs.rollno = 31;
    gs.branch = "AIDS";
    cout << gs.name << " " << gs.age << " " << gs.rollno << " " << gs.branch << "\n\n";

    TA ta;
    ta.name = "Vakul";
    ta.age = 22; // No ambiguity now due to virtual inheritance
    ta.rollno = 59;
    ta.dept = "MBA";
    ta.collegename = "CBIT";
    cout << ta.name << " " << ta.age << " " << ta.rollno << " " << ta.dept << " " << ta.collegename << "\n";

    return 0;
}
