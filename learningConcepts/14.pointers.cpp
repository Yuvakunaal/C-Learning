#include <iostream>
using namespace std;

// using pointer - we can use variables and modify it too.

void increment1(int c)
{
    c++;
}

void increment2(int *c)
{
    *c = *c + 1;
}

void increment3(int *c)
{
    *c = *c + 1;
}

int main()
{
    int a = 10;
    int *aptr = &a; // aptr takes address of 'a' (not a copy)
    cout << "Address of a = " << aptr << "\n";
    // aptr++; // since int bytes are - 4, address will be '+4'
    // cout << "Address of a = " << aptr << "\n";

    cout << "a = " << a << ", *aptr = " << *aptr << "\n";
    *aptr = 20; // here if we modify *aptr, then 'a' also changes
    cout << "a = " << a << ", *aptr = " << *aptr << "\n";

    // for arrays :-
    int arr[] = {10, 20, 30, 40};
    cout << *arr << "\n"; // points first with 0th index

    int *ptr = arr;
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << *ptr << " ";
        ptr++; // pointer moves position to position... right side in array
    }
    cout << "\n";
    // or
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        cout << *(arr + i) << " "; // points based of incrementing of i
    }
    cout << "\n";

    // pointer to pointer : one pointer pointing to another pointer

    int b = 11;
    int *p;
    p = &b;
    cout << *p << "n";

    int **q = &p;
    cout << *q << "\n";  // address of q
    cout << **q << "\n"; // value of q

    // Passing pointers to function :-
    int c = 2;
    increment1(c);
    cout << c << "\n"; // c will not changes even after incrementing in function (since it incremented locally in function)
    // To avoid this :-
    int *cptr = &c;
    increment2(cptr);
    cout << c << "\n"; // now c is incremented

    // or

    increment3(&c);
    cout << c << "\n";
    return 0;
}