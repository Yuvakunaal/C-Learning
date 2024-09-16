#include <iostream>
using namespace std;

int main()
{
    // Datatype modifiers = changes the meaning of the existing data types
    // i) long : >= 4 bytes
    // ii) short : = 2 bytes
    // iii) long long : >= 8
    // iv) signed : int type will be signed by default, means int can be stored both positive and negative numbers
    // v) unsigned : only positive numbers can be stored

    cout << sizeof(int) << "\n";
    cout << sizeof(long int) << "\n";
    cout << sizeof(short int) << "\n";
    cout << sizeof(long long int) << "\n";
    cout << sizeof(signed int) << "\n"; // default for int
    unsigned int a;                     // stores double compared to the actual amount of int bytes
    a = -1;
    cout << a << "\n";
    return 0;
}