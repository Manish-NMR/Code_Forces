// link - https://codeforces.com/contest/1850/problem/A

#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b>=10 || b+c>=10 || a+c>=10) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

// inputCopy
// 5
// 8 1 2
// 4 4 5
// 9 9 9
// 0 0 0
// 8 5 3
// outputCopy
// YES
// NO
// YES
// NO
// YES