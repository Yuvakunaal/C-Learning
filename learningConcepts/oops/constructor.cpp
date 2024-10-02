#include <iostream>
#include <string>
using namespace std;

class Teacher1
{
public:
    Teacher1()
    { // Non parameterized constructor
        dept = "CSE";
    }
    string dept;
};

class Teacher2
{
public:
    string name, dept, subject;
    int salary;
    Teacher2(string n, string d, string s, int sal)
    { // parameterized constructor
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    void getInfo()
    {
        cout << "Name = " << name << "\n";
        cout << "Department = " << dept << "\n";
        cout << "Subject = " << subject << "\n";
        cout << "Salary = " << salary << "\n\n";
    }
};

// using this : which points to its particular object (if parameter and variable both have same name this can be used)
class Teacher3
{
public:
    string name, dept, subject;
    int salary;
    Teacher3(string name, string dept, string subject, int salary)
    { // parameterized constructor
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }

    void getInfo()
    {
        cout << "Name = " << this->name << "\n";
        cout << "Department = " << this->dept << "\n";
        cout << "Subject = " << this->subject << "\n";
        cout << "Salary = " << this->salary << "\n";
    }
};

int main()
{
    Teacher1 t1; // non-parameterized constructor
    cout << t1.dept << "\n\n";

    Teacher2 t2("shiva", "IT", "R", 3000000); // parameterized contructor
    t2.getInfo();

    Teacher2 t21(t2); // default copy constructor
    t21.getInfo();

    Teacher3 t3("kunaal", "CSD", "C++", 3000000);
    t3.getInfo();
    return 0;
}