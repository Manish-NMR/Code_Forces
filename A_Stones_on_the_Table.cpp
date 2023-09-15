// link - 

#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s;
    cin>>s;
    char c=s[0];
    int count=0;
    for(int i=1;i<s.length();i++){
        if(c==s[i]) count++;
        else{
            c=s[i];
        }
    }
    cout<<count<<endl;
}

// I:
// 3
// RRG

// O:1

// I:
// 5
// RRRRR

// O:4