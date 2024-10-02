#include <iostream>
#include <string>
using namespace std;

class Person1
{
public:
    string name;
    int age;
};

class Person2
{
public:
    string branch;
};

class Student : public Person1, public Person2
{
public:
    int rollno;
};

int main()
{
    Student s;
    s.name = "Kunaal";
    s.age = 19;
    s.branch = "CSD";
    s.rollno = 31;
    cout << s.name << s.age << s.rollno << s.branch << "\n";
    return 0;
}