#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int start, int end)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            return binarySearch(arr, target, mid + 1, end);
        }
        else
        {
            return binarySearch(arr, target, start, mid - 1);
        }
    }
    return -1;
}

int main()
{
    int length;
    cout << "Enter size = ";
    cin >> length;

    cout << "Enter elements (with space seperation) :-" << "\n";
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter target = ";
    cin >> target;

    cout << binarySearch(arr, target, 0, length - 1) << "\n";
    return 0;
}