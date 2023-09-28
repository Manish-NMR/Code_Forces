// link - https://codeforces.com/problemset/problem/282/A

#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin>>t;
    int count=0;
    while(t--){
        string s;
        cin>>s;
        if(s == "--X") --count;
        else if(s == "X--") count--;
        else if(s == "++X") ++count;
        else count++;
    }
    cout<<count<<endl;
    return 0;
}

// inputCopy
// 1
// ++X
// outputCopy
// 1
// inputCopy
// 2
// X++
// --X
// outputCopy
// 0