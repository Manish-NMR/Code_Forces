// link - https://codeforces.com/problemset/problem/318/A

#include <iostream>
#define ll long long
using namespace std;

int main(){
    ll n,m;
    cin>>n>>m;
    ll k=0;
    if(n%2==0){
        k=n/2;
    }else{
        k = n/2+1;
    }
    if(m<=k){
        ll ans = m*2;
        cout<<ans-1<<endl;
    }else{
        ll ans = (m-k)*2;
        cout<<ans<<endl;
    }
}

// inputCopy
// 10 3
// outputCopy
// 5
// inputCopy
// 7 7
// outputCopy
// 6