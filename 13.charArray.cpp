#include <iostream>
using namespace std;

// Last char in an char array is always a null character ('\0')

void checkPalindrome(char arr[], int length)
{
    bool check = 1;
    for (int i = 0; i < length; i++)
    {
        if (arr[i] != arr[length - 1 - i])
        {
            check = 0;
            break;
        }
    }
    if (check == true)
    {
        cout << "Word is a palindrome" << "\n";
    }
    else
    {
        cout << "Word is not a palindrome" << "\n";
    }
}

void largeWordSeq(char arr[], int length)
{
    int currlen = 0, maxlen = 0;
    int i = 0;
    int st = 0, maxst = 0;

    while (1)
    {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
            if (currlen > maxlen)
            {
                maxlen = currlen;
                maxst = st;
            }
            currlen = 0;
            st = i + 1;
        }
        else
        {
            currlen++;
        }

        if (arr[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout << maxlen << ", ";
    for (int i = 0; i < maxlen; i++)
    {
        cout << arr[i + maxst];
    }
}

int main()
{
    char arr[] = "apple";

    // looping :-
    int i = 0;
    while (arr[i] != '\0')
    {
        cout << arr[i] << " ";
        i++;
    }
    cout << "\n";

    // size of char array
    cout << sizeof(arr) / sizeof(char) - 1 << "\n";

    // accessing array and its indices
    cout << arr << "\n";
    cout << arr[3] << "\n\n";

    // check palindrome
    int length1;
    cout << "Enter length of char array = ";
    cin >> length1;

    char arr1[length1 + 1]; // since the last char will be null  we have to increment it...
    cout << "Enter string = ";
    cin >> arr1;

    checkPalindrome(arr1, length1);
    cout << "\n";

    // Largest word in squence
    int length2;
    cout << "Enter length of char array = ";
    cin >> length2;
    cin.ignore(); // since we used getline() function

    char arr2[length2 + 1];
    cout << "Enter sentence = ";
    cin.getline(arr2, length2); // it takes the spaces also in the same string and assignes to single variable.
    cin.ignore();               // since we kept getline above to avoid it in other lines we will call ignore().

    largeWordSeq(arr2, length2);
    cout << "\n";

    return 0;
}