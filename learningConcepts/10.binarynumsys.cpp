#include <iostream>
using namespace std;

// decimal number = (0 to 10) = base 10
// binary numbers = (0,1) = base 2

// Note : for negative decimal numbers :-
// steps :- (only theoritical)
// 1. Convert number to binary (exclusing negative sign)
// 2. Add prefix = 0
// 3. Do 1's compliment, means replace 1 with 0 and 0 with 1
// 4. Add 1 to 3rd step result
// 5. Final answer will be 4th step result known as 2's compliment result.

int binary(int num)
{
    int rem;
    int res = 0;
    int pow = 1;
    while (num > 0)
    {
        rem = num % 2;
        res += (rem * pow);
        num /= 2;
        pow *= 10;
    }
    return res;
}

int decimal(int bin)
{
    int rem;
    int pow = 1;
    int res = 0;
    while (bin > 0)
    {
        rem = bin % 10;
        res += (rem * pow);
        bin /= 10;
        pow *= 2;
    }
    return res;
}

int main()
{
    // decimal -> binary
    // example : 42 -> 1 0 1 0 1 0
    int num = 50;
    int bin1 = binary(num);
    cout << "Binary of " << num << " = " << bin1 << "\n";

    // binary -> decimal
    // example : 1 0 1 0 1 0 -> 42
    int bin2 = 1010;
    int deci = decimal(bin2);
    cout << "Decimal of " << bin2 << " = " << deci << "\n";
    return 0;
}