#include <iostream>
#include <string>
using namespace std;

void func()
{
    static int x = 0; // this is initialised statement ->  will run only 1 time (even function is called n times)
    cout << "x = " << x << "\n";
    x++;
}

class A
{
public:
    int x;
    void inc()
    {
        x++;
    }
};

class ABC
{
public:
    ABC()
    {
        cout << "abc Constructor..." << "\n";
    }
    ~ABC()
    {
        cout << "abc Destructor..." << "\n";
    }
};

int main()
{
    func();
    func();
    func();

    A obj;
    obj.x = 10;
    cout << "x -> " << obj.x << "\n";
    obj.inc();
    cout << "x -> " << obj.x << "\n";

    if (true)
    {
        static ABC obj2;
    }
    cout << "End of main func" << "\n";
    return 0;
}