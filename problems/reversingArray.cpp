#include <iostream>
using namespace std;


// Using two pointer approach
void reverseArr(int arr[], int start, int end){
    while (start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(int);
    int start = 0;
    int end = length - 1;
    reverseArr(arr,start,end);
    for (int i=0; i < length; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}