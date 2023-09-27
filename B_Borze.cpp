// link - https://codeforces.com/problemset/problem/32/B

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]!='#')
            if(s[i]=='.'){
                cout<<'0';
                s[i]='#';
            }else{
                if(s[i+1]=='.') cout<<'1';
                else cout<<'2';
                s[i]='#';
                s[i+1]='#';
            }
    }
}

// inputCopy
// .-.--
// outputCopy
// 012
// inputCopy
// --.
// outputCopy
// 20
// inputCopy
// -..-.--
// outputCopy
// 1012