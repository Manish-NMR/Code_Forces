// link - https://codeforces.com/problemset/problem/248/A

#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    pair<int,int> a = {0, 0};
    pair<int,int> b = {0, 0};
    int sum = 0; 
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x == 0) a.first++;
        else a.second++;
        if(y == 0) b.first++;
        else b.second++;
    }
    if(a.first < a.second) sum = sum + a.first;
    else sum = sum + a.second;
    if(b.first < b.second) sum = sum + b.first;
    else sum = sum + b.second;
    cout << sum << endl;
}

// input
// 5
// 0 1
// 1 0
// 0 1
// 1 1
// 0 1
// output
// 3