#include <iostream>
using namespace std;

int main()
{
    // while loop
    // Printing numbers from 1 to 5
    int count = 1;
    while (count <= 5)
    {
        cout << count << " ";
        count++;
        // must becuase, if we didnt increment count it stays with same count number and runs infinite loop.
    }
    cout << "\n";

    // for loop
    for (int i = 1; i <= 5; i++)
    {
        cout << i << " ";
    }
    cout << "\n";

    // do-while : executed 1 time for sure even condition is false...
    do
    {
        cout << "Hello this is do-while loop" << "\n";
    } while (3 > 5);

    // Nested-loops : Loop inside another loop
    int num3 = 5;
    for(int i = 1; i <= num3; i++){
        for (int j = 1; j <= num3; j++){
            cout << "*" << " ";
        }
        cout << "\n";
    }

    // Practice questions :-
    // Sum of numbers from 1 to n ?
    int n1 = 10;
    int sum1 = 0;
    for (int i = 1; i <= n1; i++)
    {
        sum1 += i;
    }
    cout << "Sum : " << sum1 << "\n";

    // Sum of odd numbers & even numbers from 1 to n ?
    int n2 = 10;
    int sum_of_odd = 0, sum_of_even = 0;
    for (int i = 1; i <= n2; i++)
    {
        if (i % 2 != 0)
        {
            sum_of_odd += i;
        }
        else
        {
            sum_of_even += i;
        }
    }
    cout << "Sum of odds : " << sum_of_odd << ", Sum of evens : " << sum_of_even << "\n";

    // Check if number is prime or not ?
    int number = 23;
    bool isPrime = true;
    for (int i = 2; i*i <= number; i++)
    {
        if (number % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    cout << (isPrime ? "It is Prime" : "It is Not Prime") << "\n";

    // Sum of all number from 1 to n which are divisible by 3 ?
    int n3 = 20;
    int sum_3s = 0;
    for (int i = 1; i <= n3; i++){
        if (i%3 == 0){
            sum_3s += i;
        }
    }
    cout << "Sum of nums divisible by 3 : " << sum_3s << "\n";

    // Print factorial of a number n ?
    int n4 = 5;
    int fact = 1;
    for (int i = 2; i <= n4; i++){
        fact *= i;
    }
    cout << "Factorial of " << n4 << " = " << fact << "\n";
    return 0;
}