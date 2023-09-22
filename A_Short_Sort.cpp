// link - https://codeforces.com/contest/1873/problem/A

#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string a="abc";
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]!=a[i]) count++;
        }
        if(count==3) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}

// input:
// 6
// abc
// acb
// bac
// bca
// cab
// cba
// output:
// YES
// YES
// YES
// NO
// NO
// YES