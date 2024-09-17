#include <iostream>
#include <vector>
using namespace std;

// STL : std template library

int main()
{
    // vectors : array like
    // dynamic in nature
    // vector tool is inside STL, we will use from it
    vector<int> vec1 = {1, 2, 3};
    cout << vec1[0] << "\n";

    vector<int> vec2(4, 0); // creates a vector of size 4 with 0's in all indexes
    cout << vec2[1] << "\n";

    // looping using values in vector (not indexes)
    for (int i : vec2)
    {
        cout << i << " ";
    }
    cout << "\n";

    vector<char> alphabets = {'a', 'b', 'c', 'd', 'e', 'f'};
    cout << "Size = " << alphabets.size() << "\n";

    vector<int> nums;
    cout << "Size of nums = " << nums.size() << "\n"; // gives size of vector
    nums.push_back(25);                               // adds from end of vector
    nums.push_back(35);
    cout << "Size of nums = " << nums.size() << "\n";
    cout << "Front number = " << nums.front() << "\n"; // gives first element from vector
    cout << "Back number = " << nums.back() << "\n";   // gives last element from vector
    cout << "At index : 0 = " << nums.at(0) << "\n";   // gives at specific index from vector
    nums.pop_back();                                   // deletes at index specified (default = end of vector)
    cout << "Size of nums = " << nums.size() << "\n";

    
    return 0;
}