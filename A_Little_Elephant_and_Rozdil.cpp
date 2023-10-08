// link - https://codeforces.com/problemset/problem/205/A

#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int min = INT_MAX;int count=0;int loc;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a<min){
            min = a;
            count = 1;
            loc = i+1;
        }else if(a==min) count++;
        else continue;
    }
    if(count>1) cout<<"Still Rozdil"<<endl;
    else cout<<loc<<endl;
}