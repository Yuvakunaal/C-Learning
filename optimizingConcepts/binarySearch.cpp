#include <iostream>
using namespace std;

int binarySearch(int arr[], int length, int target)
{
    int start = 0;
    int end = length - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int length;
    cout << "Enter size = ";
    cin >> length;

    cout << "Enter elements :-" << "\n";
    int arr[length];
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter target = ";
    cin >> target;

    cout << binarySearch(arr, length, target) << "\n";
    return 0;
}