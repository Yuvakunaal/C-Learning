// leetcode - 53 : https://leetcode.com/problems/maximum-subarray/
// Description : Given an integer array nums, find the subarray with the largest sum, and return its sum.
// Make this optimize : Using Kadane's algorithm
// Learn from : https://youtu.be/9IZYqostl2M?si=4EiiIMoIzkb1Toc5&t=760
#include <iostream>
using namespace std;

int maxSubarraySum(vector<int> nums)
{
    int currSum = 0;
    int maxSum = INT_MIN;
    for(int i = 0; i < nums.size(); i++){
        currSum += nums[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;

    // or

    // int currSum = 0;
    // int maxSum = INT_MIN;
    // for(int i : nums){
    //     currSum += i;
    //     maxSum = max(maxSum, currSum);
    //     if(currSum < 0){
    //         currSum = 0;
    //     }
    // }
    // return maxSum;
}

int main()
{
    vector<int> a = {-2,1,-3,4,-1,2,1,-5,4};
    int res = maxSubarraySum(a);
    cout << "Maximum sum = " << res << "\n";
    return 0;
}