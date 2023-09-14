//link- https://codeforces.com/problemset/problem/263/A

#include<iostream>
using namespace std;

int main(){
    int n=4;
    int x,y;
    for(int i=0;i<=n;i++)
        for(int j=0;j<=n;j++){
            int a;
            cin>>a;
            if(a==1){
                x=i+1;
                y=j+1;
                goto label;
            }
        }
    label:
    if(x>3) x=x-3;
    else if(x<3) x=3-x;
    else x=0;
    if(y>3) y=y-3;
    else if(y<3) y=3-y;
    else y=0;
    cout<<x+y<<endl;
            
    return 0;
}