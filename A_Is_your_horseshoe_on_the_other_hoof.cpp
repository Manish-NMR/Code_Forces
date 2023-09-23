// link - https://codeforces.com/problemset/problem/228/A

#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    const int n=4;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    sort(arr,arr+n);
    int count=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]) continue;
        else count++;
    }
    cout<<4-count<<endl;
    return 0;
}


// inputCopy
// 1 7 3 3
// outputCopy
// 1

// inputCopy
// 7 7 7 7
// outputCopy
// 3