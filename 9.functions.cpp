#include <iostream>
using namespace std;

// void : doesn't have anything to return inside function;
void printHello() // function definition
{
    cout << "Hello World !" << "\n";
}

int sum_of_first_10_nums()
{
    int sum = 0;
    for (int i = 1; i <= 10; i++)
    {
        sum += i;
    }
    return sum;
}

// with parameters
bool isOdd(int num)
{
    if (num % 2 != 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int sumOfThree(int a, int b, int c)
{ // parameters
    return a + b + c;
}

int min(int a, int b)
{
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

// Problems :-
// Calculate N factorial
int factorial(int num)
{
    int fact = 1;
    for (int i = 2; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

// Calculate sum of digits of a number
int sumOfDigits(int number)
{
    int res = 0;
    int rem;
    while (number > 0)
    {
        rem = number % 10;
        res += rem;
        number /= 10;
    }
    return res;
}

// Calculate nCr binomial coefficient for n & r
// hint : nCr = n!/(n-r)! r!
double nCr(int n, int r)
{
    double res;
    int numerator = factorial(n);
    int denominator = factorial(n - r) * factorial(r);
    res = numerator / denominator;
    return res;
}

// Write a function to check if a number is prime or not
bool isPrime(int num){
    for(int i = 2; i<num; i++){
        if (num%i == 0){
            return false;
        }
    }
    return true;
}

// Write a function to print all prime numbers from 2 to n
int showPrimes(int n){
    if (n < 2){
        cout << "Pass argument greater than 2 !!!" << "\n";
        return -1;
    }
    for (int i=2; i<=n; i++){
        bool is_prime = true;
        for (int j=2; j*j <= i; j++){
            if (i%j == 0){
                is_prime = false;
                break;
            }
        }
        if (is_prime){
            cout << i << " ";
        }
    }
    cout << "\n";
    return 1;
}

int nthFibonacci(int n){
    int a = 0;
    int b = 1;
    int c;
    if (n == 1){
        return a;
    }
    else if (n == 2){
        return b;
    }
    for(int i=0;i < n-2;i++){
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    printHello(); // function call
    int sum = sum_of_first_10_nums();
    cout << "Sum of first 10 nums = " << sum << "\n";

    bool odd = isOdd(6);
    cout << odd << "\n"; // 0 = false, 1 = true

    int sum_of_three_nums = sumOfThree(1, 2, 3); // Arguments passing
    cout << "Sum of three nums = " << sum_of_three_nums << "\n";

    int min_val = min(4, 10);
    cout << "Min = " << min_val << "\n";

    cout << "-----------------------------" << "\n";

    // Problems :-
    // Calculate N factorial
    int fact = factorial(5);
    cout << "Factorial = " << fact << "\n";

    // Calculate sum of digits of a number
    int sum_of_digits = sumOfDigits(123);
    cout << "Sum of digits = " << sum_of_digits << "\n";

    // Calculate nCr binomial coefficient for n & r
    // hint : nCr = n!/(n-r)! r!
    double ncr_binom = nCr(8, 2);
    cout << "nCr Binomial coeff of n=8,r=2 : " << ncr_binom << "\n";

    // Write a function to check if a number is prime or not
    bool is_prime = isPrime(29);
    cout << (is_prime ? "It is Prime" : "It is not Prime") << "\n";

    // Write a function to print all prime numbers from 2 to n
    showPrimes(50);

    // Write a funcion to print nth fibonacci number
    int fibonacci = nthFibonacci(7);     // 0 1 1 2 3 5 8 -> 7th fibonacci is '8'
    cout << "7th fibonacci number = " << fibonacci << "\n";
    return 0;
}
