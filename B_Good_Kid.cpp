// link - https://codeforces.com/contest/1873/problem/B

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        v[0]+=1;
        long long int ans=1;
        for(int i=0;i<n;i++) ans=ans*v[i];
        cout<<ans<<endl;
    }
}

// input:
// 4
// 4
// 2 2 1 2
// 3
// 0 1 2
// 5
// 4 3 2 3 4
// 9
// 9 9 9 9 9 9 9 9 9
// output:
// 16
// 2
// 432
// 430467210