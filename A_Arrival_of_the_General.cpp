// link - https://codeforces.com/problemset/problem/144/A

#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mn=INT_MAX,mx=INT_MIN;
    int x=0,y=0;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        int temp=mn;
        mn = min(mn,a);
        if(temp!=mn) x=i;
        else if(mn==a) x=i;
        temp = mx;
        mx = max(mx,a);
        if(temp!=mx) y=i;
    }
    if(x<y) cout<<((n-x)+(y-1))-1<<endl;
    else cout<<(n-x)+(y-1)<<endl;
}

// Testcase
// I:
// 3
// 5 5 5
// O: 0

// I:
// 5
// 1 2 3 4 5
// O: 7

// I:
// 5
// 4 5 3 1 2
// O: 2