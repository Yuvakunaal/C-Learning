#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;

    Student(string name, double cgpa)
    {
        cout << "I am constructor..." << "\n";
        this->name = name;
        cgpaPtr = new double; // dynamically allocation
        *cgpaPtr = cgpa;
    }

    ~Student(){
        cout << "Everything is deleted..." << "\n";
        delete cgpaPtr;    // extra step for de-allocating pointer/dynamically allocation in memory
    }

    void getInfo()
    {
        cout << "Name = " << this->name << "\n";
        cout << "GPA = " << *cgpaPtr << "\n";
    }
};

int main()
{
    Student s1("Kunaal", 9.20);
    s1.getInfo();
    return 0;
}