#include <iostream>
using namespace std;

void commonVals(int arr1[], int length1, int arr2[], int length2)
{
    for (int i = 0; i < length1; i++)
    {
        for (int j = 0; j < length2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr2[j] << " ";
                break;
            }
        }
    }
    cout << "\n";
}

int main()
{
    int arr1[] = {3, 1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 3, 1, 3};
    int length1 = sizeof(arr1) / sizeof(int);
    int length2 = sizeof(arr2) / sizeof(int);

    commonVals(arr1, length1, arr2, length2);

    return 0;
}