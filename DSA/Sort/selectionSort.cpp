#include <iostream>
using namespace std;

void selectionSort(int arr[], int length){
    for (int i = 0; i < length - 1; i++)
    {
        for (int j = i+1; j < length; j++)
        {
            if (arr[j] < arr[i]){
                swap(arr[i],arr[j]);
            }
        }
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

    selectionSort(arr,length);

    cout << "Sorted elements : ";
    for (int i=0; i < length; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}