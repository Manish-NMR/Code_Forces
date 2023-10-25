// link - https://codeforces.com/problemset/problem/339/A

#include <iostream>
#include <string.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    int ones=0,twos=0,threes=0;
    for(int i = 0; i<s.length(); i++){
        if(s[i]=='+') continue;
        else if(s[i]=='1') ones++;
        else if(s[i]=='2') twos++;
        else threes++;
    }
    int count=0;
    for(int i=0;i<ones;i++){
        cout<<"1";
        count++;
        if(count!=s.length()){cout<<"+"; count++;}
    }
    for(int i=0;i<twos;i++){
        cout<<"2";
        count++;
        if(count!=s.length()) {cout<<"+"; count++;}
    }
    for(int i=0;i<threes;i++){
        cout<<"3";
        count++;
        if(count!=s.length()) {cout<<"+"; count++;}
    }
}


// inputCopy
// 3+2+1
// outputCopy
// 1+2+3
// inputCopy
// 1+1+3+1+3
// outputCopy
// 1+1+1+3+3
// inputCopy
// 2
// outputCopy
// 2