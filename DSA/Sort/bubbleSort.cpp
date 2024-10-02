#include <iostream>
using namespace std;

void bubbleSort(int arr[], int length)
{
    int count = 1;
    while (count < length)
    {
        for (int i = 0; i < length - count; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
        count++;
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

    bubbleSort(arr, length);

    cout << "Sorted elements : ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}