// leetcode - 540 : https://leetcode.com/problems/single-element-in-a-sorted-array/
// Description : You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.
// Return the single element that appears only once.
// Your solution must run in O(log n) time and O(1) space.
// Learn from : https://youtu.be/qsbCBduIs40?si=o4SK6rKSfSwEQKaS

#include <iostream>
using namespace std;

int singleNonDuplicate(vector<int> nums)
{
    int n = nums.size();
    if (n == 1)
    {
        return nums[0];
    }
    if (nums[0] != nums[1])
    {
        return nums[0];
    }
    if (nums[n - 1] != nums[n - 2])
    {
        return nums[n - 1];
    }

    int start = 1;
    int end = n - 2;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (nums[mid] != nums[mid - 1] && nums[mid] != nums[mid + 1])
        {
            return nums[mid];
        }
        if (mid % 2 == 0)
        { // even
            if (nums[mid - 1] == nums[mid])
            { // left
                end = mid - 1;
            }
            else
            { // right
                start = mid + 1;
            }
        }
        else
        { // odd
            if (nums[mid - 1] == nums[mid])
            { // right
                start = mid + 1;
            }
            else
            { // left
                end = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    vector<int> vec = {1, 1, 3, 3, 4, 4, 7, 8, 8};
    int solo = singleNonDuplicate(vec);
    cout << "Single element = " << solo << "\n";
    return 0;
}