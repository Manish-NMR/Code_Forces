// link - https://codeforces.com/problemset/problem/237/A

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    vector<pair<int,int>> v;
    for(int i=0;i<=t;i++){
        int arr[t],ar[t];
        cin>>arr[t]>>ar[t];
        v.push_back(make_pair(arr[t],ar[t]));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<t;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    int max=0,maxi=0,current=0,currenti=0,next=0;
    for(int i=0;i<t;i++){
        if(max<current){
            current=max;
            maxi=v[i].first;
        }
        if(currenti != maxi) currenti = maxi;
        if(next!=current){
            if()
        }
    }
}