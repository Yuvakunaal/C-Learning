#include <iostream>
#include <string>
using namespace std;

// For Non-Parameterized constructors
// when we create an object of derived class -> first base class constructor,then derived class constructor will run.
class Person1
{
public:
    string name;
    int age;
    Person1()
    {
        cout << "Base class constructor..." << "\n";
    }
};

class Student1 : public Person1
{
public:
    int rollno;

    Student1(){
        cout << "Derived class constructor..." << "\n";
    }

    void getInfo()
    {
        cout << "Name = " << name << "\n";
        cout << "Age = " << age << "\n";
        cout << "Rollno = " << rollno << "\n\n";
    }
};

// For Parameterized constructors
// when we create an object of derived class -> Base class constructor will be called when we do like below code
class Person2{
public:
    string name;
    int age;

    Person2(string name, int age){
        cout << "Base class constructor" << "\n";
        this->name = name;
        this->age = age;
    }
};

class Student2 : public Person2{
public:
    int rollno;
    Student2(string name, int age, int rollno) : Person2(name, age){
        cout << "Derived class constructor..." << "\n";
        this->rollno = rollno;
    }

    void getInfo(){
        cout << "Name = " << name << "\n";
        cout << "Age = " << age << "\n";
        cout << "Rollno = " << rollno << "\n";
    }
};

int main()
{
    Student1 s1;
    s1.name = "Kunaal";
    s1.age = 19;
    s1.rollno = 31;
    s1.getInfo();

    Student2 s2("Vakul",20,59);
    s2.getInfo();
    return 0;
}