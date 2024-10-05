// leetcode - 238 : https://leetcode.com/problems/product-of-array-except-self/
// Description : Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].
// The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
// You must write an algorithm that runs in O(n) time and without using the division operation.
// Make this optimize : 2 pointer approach
// Learn from : https://youtu.be/TW2m8m_FNJE?si=R5Wi1Qi9KYdjKp_u

#include <iostream>
using namespace std;

vector<int> productExceptSelf(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);
    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }
    int suffix = 1;
    for (int i = n - 2; i >= 0; i--)
    {
        suffix *= nums[i + 1];
        ans[i] *= suffix;
    }
    return ans;
}

int main()
{
    vector<int> vec = {1,2,3,4}; 
    vector<int> res = productExceptSelf(vec);
    for(int i = 0; i < res.size(); i++){
        cout << res[i] << " ";
    }
    cout << "\n";
    return 0;
}
