#include <iostream>
using namespace std;

int Sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int prevSum = Sum(n - 1);
    return n + prevSum;
}

int main()
{
    int res = Sum(3);
    cout << res << "\n";
    return 0;
}