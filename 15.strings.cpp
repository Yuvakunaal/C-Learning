#include <iostream>
#include <string> // important while working with strings
using namespace std;

// 1) No need to know thesize beforehand
// 2) Performing operations like concatenation & append it easier
// 3) Terminated with a special character '\0'

// Declaring string :-
void way1()
{
    // way - 1 to declare string
    string str1;
    cout << "Enter string = "; // here we cant give words or letters with 'space'
    cin >> str1;
    cout << str1 << "\n";
}

void way2()
{
    // way - 2 to declare string
    string str2(5, 'K');
    cout << str2 << "\n";
}

void way3()
{
    // way - 3 to declare string
    string str3 = "I am kunaal";
    cout << str3 << "\n";
}

void way4()
{
    // way - 4 to declare string
    string str4;
    cout << "Enter string = ";
    getline(cin, str4); // We can give spaces in input
    cout << str4 << "\n";
}

void compareString(string s1, string s2)
{
    int val = s1.compare(s2);
    if (val > 0)
    {
        cout << s1 << " is larger" << "\n";
    }
    else if (val < 0)
    {
        cout << s2 << " is larger" << "\n";
    }
    else
    {
        cout << s1 << " " << s2 << " are equal" << "\n";
    }
}

int main()
{

    // way1();
    // way2();
    // way3();
    // way4();

    // Concatenation :-
    // type-1 : appending and updating existing variable
    string s1 = "fam";
    string s2 = "ily";
    s1.append(s2);
    cout << s1 << "\n";

    // or
    s1 = s1 + " man";
    cout << s1 << "\n";

    // type-2 : appending and storing in another variable
    string s3 = s1.append(" boy");
    cout << s3 << "\n";

    // clearing the whole string
    string bigstr = "djfkshe cuhxgdf svhfxjgdbsucn";
    bigstr.clear();
    cout << bigstr << "\n";

    // comparing strings (based on their lexicography values (not length of string))
    string str1 = "bcde";
    string str2 = "abcd";
    compareString(str1, str2);

    // empty :-
    string str3 = "";
    if (str3.empty())
    {
        cout << "String is empty" << "\n";
    }
    else
    {
        cout << "String is not empty" << "\n";
    }
    // note : even 'space' is also a character

    // erase :- (deletes the subpart of string)
    string bstr = "hakunamatata";
    bstr.erase(4, 4); // string.erase(a,b), where  a = start index, b = no.of characters from a index
    cout << bstr << "\n";

    // find :- gives the index position of finding substring / string.
    string astr = "pattern";
    int ind = astr.find("ter");
    cout << "Position of 'ter' = " << ind << "\n";

    // insert :- (inserts string a specified index)
    string cstr = "kual";
    cstr.insert(2, "na"); // string.insert(a,b), where a = index, b = inserting string
    cout << cstr << "\n";

    // size :-
    cout << cstr.size() << "\n";
    // or
    cout << cstr.length() << "\n";

    // iterating through string :-
    for (int i = 0; i < cstr.length(); i++)
    {
        cout << cstr[i] << " ";
    }
    cout << "\n";

    // substring :-
    string ans = cstr.substr(2, 3); // string.substr(a,b),  where a = start index, b = no.of characters from a index
    cout << ans << "\n";

    // string to int :- (very usefull)
    string valstr = "24";
    int value = stoi(valstr);
    cout << value * 100 << "\n";

    // int to string :- (very usefull)
    string strval = to_string(value);
    cout << strval + "abc" << "\n";

    // sort :- (keepins sorted as per char ascii values)
    string sstr = "bca231";
    sort(sstr.begin(), sstr.end());
    cout << sstr << "\n";

    // convert to upper case :-
    string lower = "abcdefg";
    for (int i = 0; i < lower.length(); i++)
    {
        if (lower[i] >= 'a' && lower[i] <= 'z')
        {
            lower[i] = lower[i] - 32; // ascii of a = 97, ascii of A = 65, so difference is '32' - this is the logic
        }
    }
    cout << lower << "\n";

    string upper = "HIJKLM";
    for (int i = 0; i < upper.length(); i++)
    {
        if (upper[i] >= 'A' && upper[i] <= 'Z')
        {
            upper[i] = upper[i] + 32; // ascii of a = 97, ascii of A = 65, so difference is '32' - this is the logic
        }
    }
    cout << upper << "\n";

    // or (using inbuilt function)
    string str_low = "abcde";
    transform(str_low.begin(), str_low.end(), str_low.begin(), ::toupper);
    // transform(a,b,c,d), a=start pointer, b=end pointer, c=from where to start doing transforming,
    // d = ::<what to transform>
    cout << str_low << "\n";
    transform(str_low.begin(), str_low.end(), str_low.begin(), ::tolower);
    cout << str_low << "\n";
    return 0;
}