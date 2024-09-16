#include <iostream>
using namespace std;

// Write a function to calculate sum and product of all numbers in array
void calcSumProd(int arr[], int length, int &sum, int &prod){
    for (int i=0; i<length; i++){
        sum += arr[i];
        prod *= arr[i];
    }
}

int main()
{
    int arr[] = {3,2,9,4};
    int length = sizeof(arr)/sizeof(int);
    int sum = 0;
    int prod = 1;
    calcSumProd(arr,length,sum,prod);

    cout << "Sum = " << sum << ", Product = " << prod << "\n";
    return 0;
}