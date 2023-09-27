// link - https://codeforces.com/problemset/problem/231/A

#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    int count=0;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int sum = a+b+c;
        if(sum>=2) count++;
    }
    cout<<count<<endl;
    return 0;
}

// inputCopy
// 3
// 1 1 0
// 1 1 1
// 1 0 0
// outputCopy
// 2
// inputCopy
// 2
// 1 0 0
// 0 1 1
// outputCopy
// 1