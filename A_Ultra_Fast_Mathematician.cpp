// link - https://codeforces.com/problemset/problem/61/A

#include <iostream>
#include <string>
using namespace std;

bool check(int a,int b){
    if(a==b) return false;
    else return true;
}

int main(){
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.length();i++){
        int c,d;
        c = a[i]-'0';
        d = b[i]-'0';
        if(check(c,d)) cout<<"1";
        else cout<<"0";
    }
    cout<<endl;

}

// testcase
// I:
// 1010100
// 0100101

// O:
// 1110001