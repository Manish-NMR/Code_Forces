//link- https://codeforces.com/problemset/problem/110/A

#include<iostream>
#define ll long long 
using namespace std;

int main(){
    ll n;
    cin>>n;
    int count=0;
    while (n!=0){
        int a=0;
        a=n%10;
        n=n/10;
        if(a==4 || a==7) count++;
    }
    if(count==4 || count==7) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

// inputCopy
// 40047
// outputCopy
// NO
// inputCopy
// 7747774
// outputCopy
// YES
// inputCopy
// 1000000000000000000
// outputCopy
// NO