// link - https://codeforces.com/problemset/problem/80/A

#include <iostream>
using namespace std;

int nextprime(int a){
    a++;
    while(true){
        bool flag=true;
        for(int i=2;i<a;i++){
            if(a%i==0) flag = false;
        }
        if(flag) return a;
        else a++;
    }
}

int main(){
    int a,b;
    cin>>a>>b;
    int n;
    n = nextprime(a);
    if(n==b) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

// I:
// 3 5
// O: YES
// I: 
// 7 9
// O: NO