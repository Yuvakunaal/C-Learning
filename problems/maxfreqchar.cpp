#include <iostream>
#include <string>
using namespace std;

int maxFreqChar(string &s, char &ans)
{
    int freq[26];
    for (int i = 0; i < 26; i++)
    { // keeping all indexes in freq as 0
        freq[i] = 0;
    }
    for (int i = 0; i < s.length(); i++)
    {
        freq[s[i] - 'a']++; // s[i] - 'a' : gets the index of char in freq[] which are iterating through
        // cout << freq[s[i]-'a'] << " ";
    }
    int maxF = 0;

    for (int i = 0; i < 26; i++)
    { // from what we take the max times char is based on their index position
        if (freq[i] > maxF)
        {
            maxF = freq[i];
            ans = i + 'a'; // getting the char like for 'b' -> 1 + 'a';
        }
    }
    return maxF;

    return 0;
}

int main()
{
    string str = "dhjsdawsdzwyuo";
    char character = 'a';
    int times = maxFreqChar(str, character);
    cout << "Max Frequency char is " << character << " = " << times << " times" << "\n";
    return 0;
}