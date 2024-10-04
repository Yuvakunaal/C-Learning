// leetcode - 50 : https://leetcode.com/problems/powx-n/
// Description : Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).
// Make this optimize : Using binary exponentiation [ O(logn) -> Time complexity ]
// Learn from : https://youtu.be/WBzZCm46mFo?si=8LOluKxbSzeZ_StP

#include <iostream>
using namespace std;

double myPow(double x, int n)
{
    // corner conditions (we know it directly...)
    if (n == 0)
        return 1.0;
    if (x == 0)
        return 0.0;
    if (x == 1)
        return 1.0;
    if (x == -1 && n % 2 == 0)
        return 1.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;

    long binForm = n;
    // For negative powers
    if (n < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }
    double ans = 1;
    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }
    return ans;
}

int main()
{
    double x1 = 2.10000;
    int n1 = 3;
    cout << myPow(x1, n1) << "\n";

    double x2 = 2.0000;
    int n2 = -2;
    cout << myPow(x2, n2) << "\n";
    return 0;
}