#include <iostream>
using namespace std;

int main()
{

    // Arithmetic : + - * / %
    int a = 5, b = 2;
    int sum = a + b;
    cout << sum << "\n";

    int sub = a - b;
    cout << sub << "\n";

    int prod = a * b;
    cout << prod << "\n";

    double div = a / b;
    cout << div << "\n";

    int div1 = a / b;
    cout << div1 << "\n";

    int rem = a % b;
    cout << rem << "\n";

    // Relational : == != <= < >= >
    cout << (a == b) << "\n"; // false -> 0
    cout << (a != b) << "\n"; // true -> 1
    cout << (a < b) << "\n";  // false -> 0
    cout << (a > b) << "\n";  // true -> 1
    cout << (a <= b) << "\n"; // false -> 0
    cout << (a >= b) << "\n"; // true -> 1

    // Logical : and (&&), or (||), not (!)
    cout << ((a == b) && (a > b)) << "\n";
    cout << ((a == b) || (a > b)) << "\n";
    cout << !(a != b) << "\n";

    // Unary operator : inc, dec
    // i++ -> Post increment operator :  first work, then update
    // ++i -> Pre increment operator : first update, then work
    int i = 0, j = 0;
    i++;
    j--;
    cout << i << "\n";
    cout << j << "\n";

    ++i;
    --j;
    cout << i << "\n";
    cout << j << "\n";

    int num1 = 10;
    num1 = num1 + 20;
    cout << num1 << "\n";

    // bitwise operators
    cout << (a & b) << "\n"; // & = bitwise and
    cout << (a | b) << "\n"; // | = bitwise or
    cout << (a ^ b) << "\n"; // ^ = bitwise xor

    cout << (4 << 1) << "\n"; // << = left shift
    cout << (4 >> 1) << "\n"; // >> = right shift
    return 0;
}