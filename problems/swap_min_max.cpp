#include <iostream>
using namespace std;

void swapMinMax(int arr[], int length){
    int small = INT_MAX;
    int big = INT_MIN;
    int small_index,big_index;
    for (int i=0; i<length; i++){
        if (arr[i] < small){
            small = arr[i];
            small_index = i;
        }
        
        if (arr[i] > big){
            big = arr[i];
            big_index = i;
        }
    }
    swap(arr[small_index],arr[big_index]);
}

int main(){
    int arr[] = {6,7,3,1};
    int length = sizeof(arr)/sizeof(int);

    swapMinMax(arr,length);

    for (int i=0; i<length; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
    return 0;
}