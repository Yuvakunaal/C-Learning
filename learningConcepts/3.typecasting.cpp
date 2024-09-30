#include <iostream>
using namespace std;

int main()
{

    // implicit : within the system inbuild convertion
    char grade1 = 'A';
    int val1 = grade1; // stores 65 i.e.., ASCII value of A
    cout << val1 << "\n";

    char grade2 = 'a';
    int val2 = grade2; // stores 97 i.e.., ASCII value of a
    cout << val2 << "\n";

    // explicit : user manually converts
    double price = 100.99;
    int val3 = (int)price; // stoes 100
    cout << val3 << "\n";

    int num = 24;
    double res = (double)num;
    cout << res << "\n";
    return 0;
}