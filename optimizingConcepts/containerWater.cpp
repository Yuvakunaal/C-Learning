// leetcode - 11 : https://leetcode.com/problems/container-with-most-water/
// Description : You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, such that the container contains the most water.
// Return the maximum amount of water a container can store.
// Notice that you may not slant the container.
// Make this optimize : 2 pointer approach
// Learn from : https://youtu.be/EbkMABpP52U?si=Cfiq7EOUIxSsCcc7

#include <iostream>
using namespace std;

int maxArea(vector<int> height){
    int maxWater = 0;
    int l = 0;
    int r = height.size()-1;
    while(l < r){
        int w = r - l;
        int h = min(height[l], height[r]);
        int currWater = w * h;
        maxWater = max(maxWater, currWater);
        if(height[l] < height[r]){
            l++;
        }
        else{
            r--;
        }
    }
    return maxWater;
}

int main(){
    vector<int> vec = {1,8,6,2,5,4,8,3,7};
    int res = maxArea(vec);
    cout << "Max Area = " << res << "\n";
    return 0;
}