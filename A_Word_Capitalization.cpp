// link - https://codeforces.com/problemset/problem/281/A

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
    string s;
    cin>>s;
    s[0]=toupper(s[0]);
    cout<<s<<endl;
}

// testcase
// i
// loVe
// You
// sOmuCh

//output
// I
// LoVe
// You
// SOmuCh