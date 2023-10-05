// link - https://codeforces.com/problemset/problem/129/A

#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int odd=0,even=0;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        if(a%2==0) even++;
        else odd++;
    }
    cout<<(odd%2==0 ? even : odd)<<endl;
}

// inputCopy
// 1
// 1
// outputCopy
// 1
// inputCopy
// 10
// 1 2 2 3 4 4 4 2 2 2
// outputCopy
// 8
// inputCopy
// 11
// 2 2 2 2 2 2 2 2 2 2 99
// outputCopy
// 1