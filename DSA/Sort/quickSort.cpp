#include <iostream>
using namespace std;

int main()
{
    int n = 10;
    int arr[] = {60, 50, 40, 30, 20, 10, 80, 70, 100, 90};
    quickSort();

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}