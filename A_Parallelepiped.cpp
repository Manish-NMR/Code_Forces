// link - https://codeforces.com/problemset/problem/224/A

#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int x,y,z;
    x = sqrt((a*b)/c);
    y = sqrt((a*c)/b);
    z = sqrt((b*c)/a);
    cout<<(x+y+z)*4<<endl;

    return 0;
}

// inputCopy
// 1 1 1
// outputCopy
// 12
// inputCopy
// 4 6 6
// outputCopy
// 28