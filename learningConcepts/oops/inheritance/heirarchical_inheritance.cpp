#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
public:
    string type;
};

class Car : public Vehicle
{
public:
    string name;
};

class Bike : public Vehicle{
public:
    string name;
};

class Cycle : public Vehicle{
public:
    string name;
};

int main()
{
    Car car;
    car.type = "Car";
    car.name = "BMW";

    Bike bike;
    bike.type = "Bike";
    bike.name = "Yamaha mt-15";

    Cycle cycle;
    cycle.type = "Cycle";
    cycle.name = "Hero";

    cout << car.type << car.name << "\n";
    cout << bike.type << bike.name << "\n";
    cout << cycle.type << cycle.name << "\n";
    return 0;
}