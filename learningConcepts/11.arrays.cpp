#include <iostream>
using namespace std;

void changeArr(int arr[], int len)
{
    cout << "In changeArr func" << "\n";
    for (int i = 0; i < len; i++)
    {
        arr[i] = 3 * arr[i];
    }
}

int main()
{
    // array : stores data in a single variable. (resolved multipke variables creation problem)
    // contain data of same datatype
    // contiguous in memory
    int marks[5] = {1, 2, 3, 4, 5};     // initializing array with size-5 (fixed) and int-datatype
    int ages[] = {1, 2, 3, 4, 5, 5, 7}; // size will be equal to length of array in RHS.

    cout << ages[0] << ages[1] << ages[4] << ages[6] << "\n";
    // cout << marks[-1] << "\n";   // -> invalid

    // To find size of array :-
    int len = sizeof(ages) / sizeof(int);
    cout << len << "\n";

    for (int i = 0; i < len; i++)
    {
        cout << ages[i] << " ";
    }
    cout << "\n";

    // Find smallest and largest in array :-
    int nums[] = {4, 3, -1, 0, 5, 2};
    int smallest = INT_MAX; // INT_MAX = +infinity
    int small = INT_MAX;
    int biggest = INT_MIN;
    int big = INT_MIN;
    for (int i = 0; i < sizeof(nums) / sizeof(int); i++)
    {
        if (nums[i] < smallest)
        {
            smallest = nums[i];
        }
        // or
        small = min(nums[i], small);

        if (nums[i] > biggest)
        {
            biggest = nums[i];
        }
        // or
        big = max(nums[i], big);
    }
    cout << "Smallest number = " << smallest << "\n";
    cout << "Smallest number = " << small << "\n\n";
    cout << "Biggest number = " << biggest << "\n";
    cout << "Biggest number = " << big << "\n\n";

    // update values in array
    int arr1[] = {3, 4, 5};
    int len1 = sizeof(arr1) / sizeof(int);
    changeArr(arr1, len1);
    cout << "In main" << "\n";
    for (int i = 0; i < len1; i++)
    {
        cout << arr1[i] << " ";
    }
    cout << "\n";

    return 0;
}