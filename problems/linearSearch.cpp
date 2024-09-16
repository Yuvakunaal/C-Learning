#include <iostream>
using namespace std;

int LinearSearch(int arr[], int length, int target){
    for (int i=0; i<length; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {1,7,-2,5,3,7,4};
    int length = sizeof(arr)/sizeof(int);
    int target = 3;

    int resultIndex = LinearSearch(arr,length,target);
    cout << "Found at index = " << resultIndex << "\n";
    return 0;
}