// link - https://codeforces.com/problemset/problem/59/A

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;
    int c = 0, l = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 65 && s[i] <= 90)  // Corrected the condition
            c++;
        else
            l++;
    }
    if (c <= l)
        for(int i=0;i<s.length();i++) cout << (char) tolower(s[i]);
    else
        for(int i=0;i<s.length();i++) cout << (char) toupper(s[i]);
    cout<<endl;
    return 0; // Added a return statement

}

// testcase
// HoUse
// ViP
//maTRIx

// output
//house
//VIP
//matrix