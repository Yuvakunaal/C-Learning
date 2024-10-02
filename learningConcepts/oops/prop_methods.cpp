#include <iostream>
#include <string>
using namespace std;

class Teacher
{
    // now salary cannot be accessed or changed from outside the class (including main()).
private:
    int salary;
    // without public we cant perform or access anything from outside this class, to print or modify from main() we have to keep public here.
public:
    // properties or attributes
    string name;
    string dept;
    string subject;

    // members functions or methods
    void changedept(string newdept)
    {
        dept = newdept;
    }

    // setter : used to modify anything (including private properties also)
    void setSalary(int newSalary)
    {
        salary = newSalary;
    }

    // getter : used to retreive anything (including private properties also)
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    // creating 't1' object
    Teacher t1;

    // accessing and assigning values to properties using its object
    t1.name = "rithwik";
    t1.subject = "python";
    t1.dept = "mech";
    // t1.salary = 2000000;   // will give error since it is private
    cout << t1.name << "\n";

    // but if you want to modify salary we can use member functions
    t1.setSalary(3000000);
    cout << t1.getSalary() << "\n";
    return 0;
}