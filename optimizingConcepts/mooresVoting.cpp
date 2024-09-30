// leetcode - 169 : https://leetcode.com/problems/majority-element/
// Description : The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
// Make this optimize : Using moore's voting algorithm
// Learn from : https://youtu.be/_xqIp2rj8bo?si=fmkid6Ldy9Q3L7vd&t=1740

#include <iostream>
using namespace std;

int findMajority(vector<int> nums)
{
    int freq = 0;
    int ans = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (freq == 0)
        {
            ans = nums[i];
        }
        if (ans == nums[i])
        {
            freq++;
        }
        else
        {
            freq--;
        }
    }
    return ans;
}

int main()
{
    vector<int> a = {2, 2, 1, 1, 1, 2, 2};
    int res = findMajority(a);
    cout << "Majority Element = " << res << "\n";
    return 0;
}