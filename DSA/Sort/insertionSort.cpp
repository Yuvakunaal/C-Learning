#include <iostream>
using namespace std;

void insertionSort(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
}

int main()
{
    int length;
    cout << "Size of array = ";
    cin >> length;

    cout << "Enter elements : ";
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }

    insertionSort(arr, length);

    cout << "Sorted elements : ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}