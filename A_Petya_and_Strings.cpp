// link - https://codeforces.com/problemset/problem/112/A

#include <iostream>
#include <algorithm>
#include <string>
#include <ctype.h>
using namespace std;

int main(){
    string s1,s2;
    cin>>s1>>s2;
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    bool flag = true;
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            flag = false;
            if(s1[i]>s2[i]) cout<<"1"<<endl;
            else cout<<"-1"<<endl;
            break;
        }
    }
    if(flag) cout<<"0"<<endl;
    
}


// inputCopy
// aaaa
// aaaA
// outputCopy
// 0
// inputCopy
// abs
// Abz
// outputCopy
// -1
// inputCopy
// abcdefg
// AbCdEfF
// outputCopy
// 1