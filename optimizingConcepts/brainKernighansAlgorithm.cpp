// leetcode - 191 : https://leetcode.com/problems/number-of-1-bits/
// Description : Write a function that takes the binary representation of a positive integer and returns the number of set bits it has (also known as the Hamming weight).
// Learn from : https://youtu.be/igOP7wL1N08?si=4eG-nrpnLIPA8VNO&t=96

#include <iostream>
using namespace std;

int count1bits(int num){
    int count = 0;
    while(num){
        int rsb = num & -num;
        num = num - rsb;
        count++;
    }
    return count;

    // or

    // using build-in-function (optimized, but not as above algo)
    // int count = __builtin_popcount(num);
    // return count;
}

int main(){
    int number = 11;
    int ans = count1bits(number);
    cout << "No of 1 bits = " << ans << "\n";
    return 0;
}