// link - https://codeforces.com/problemset/problem/43/A

#include <iostream>
#include <unordered_map>
#include <string>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin>>t;
    unordered_map<string,int> mp;
    while(t--){
        string s;
        cin>>s;
        mp[s]++;
    }
    int ans=0;
    string res;
    for( auto it : mp ){
        if(it.second>ans){
            res = it.first;
            ans = it.second;
        }
    }
    cout<<res<<endl;
    return 0;
}

// inputCopy
// 1
// ABC
// outputCopy
// ABC
// inputCopy
// 5
// A
// ABA
// ABA
// A
// A
// outputCopy
// A