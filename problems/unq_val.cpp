#include <iostream>
using namespace std;

void uniqueVals(int arr[], int length)
{
    int isUnique;
    for (int i = 0; i < length; i++)
    {
        isUnique = true;
        for (int j = 0; j < length; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique){
            cout << arr[i] << " ";
        }
    }
    cout << "\n";
}

int main()
{
    int arr[] = {3, 5, 6, 7, 5, 3};
    int length = sizeof(arr) / sizeof(int);
    uniqueVals(arr, length);
    return 0;
}