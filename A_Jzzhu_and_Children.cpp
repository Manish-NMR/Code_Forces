// link - https://codeforces.com/problemset/problem/450/A

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int t,n;
    cin>>t>>n;
    float mx=0;
    int cur=0;
    for(int i=0;i<t;i++){
        float a;
        cin>>a;
        if(mx <= ceil(a/n) ){
            cur = i;
            mx = ceil(a/n);
        }
    }
    cout<<cur+1<<endl;

    return 0;
}

// inputCopy
// 5 2
// 1 3 1 4 2
// outputCopy
// 4
// inputCopy
// 6 4
// 1 1 2 2 3 3
// outputCopy
// 6