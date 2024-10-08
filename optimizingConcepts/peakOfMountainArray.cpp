// leetcode - 852 : https://leetcode.com/problems/peak-index-in-a-mountain-array/
// // Description : You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.
// Return the index of the peak element.
// Your task is to solve it in O(log(n)) time complexity.
// Learn from : https://youtu.be/RjxD6UXGlhc?si=2GbW0OvPXhyD9wAG

#include <iostream>
using namespace std;

int peakIndexInMountainArray(vector<int> arr)
{
    int start = 1;
    int end = arr.size() - 2;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid - 1] < arr[mid] && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (arr[mid - 1] < arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {0, 10, 5, 2};
    int ans = peakIndexInMountainArray(vec);
    cout << "Peak Index = " << ans << "\n";
    return 0;
}