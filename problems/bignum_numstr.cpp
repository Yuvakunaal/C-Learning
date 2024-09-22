#include <iostream>
#include <string>
using namespace std;

// Form the biggest numbers from the numeric string
// ex : "52341" -> "54321"

void formBigNum(string &s){
    sort(s.begin(),s.end(),greater<int>());
    // greater<int>() : gives in descending order
}

int main(){
    string str = "52341";
    formBigNum(str);
    cout << str << "\n";
    return 0;
}