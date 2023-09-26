#include <iostream>
#include <string>
using namespace std;

int main(){
    // if . check for previos 0 -> . , 1 -> -. , 2 -> --
    // if - check for next
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