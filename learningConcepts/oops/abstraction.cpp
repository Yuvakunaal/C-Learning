#include <iostream>
#include <string>
using namespace std;

class Shape
{
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing circle" << "\n";
    }
};

int main()
{
    // Shape s;
    // s.draw();  // gives error : since it is an abstract class

    Circle c;
    c.draw();
    return 0;
}