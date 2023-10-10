// link - https://codeforces.com/problemset/problem/41/A

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s,ans;
    cin>>s>>ans;
    reverse(s.begin(),s.end());
    if(s == ans) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

// inputCopy
// code
// edoc
// outputCopy
// YES
// inputCopy
// abb
// aba
// outputCopy
// NO
// inputCopy
// code
// code
// outputCopy
// NO