// link - https://codeforces.com/contest/1862/problem/A

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t, n, a;
    cin >> t;
    while (t--) {
        cin >> n >> a;
        vector<string> s(n); 
        string ans = "vika";
        for (int i = 0; i < n; i++)
            cin >> s[i];
        int j = 0;
        for (int i = 0; i < a; i++) {
            int col = 0;
            while (col < n) {
                if (ans[j] == s[col][i]) {
                    j++;
                    break;
                }
                col++;
            }
        }
        if (j == 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

// inputCopy
// 5
// 1 4
// vika
// 3 3
// bad
// car
// pet
// 4 4
// vvvv
// iiii
// kkkk
// aaaa
// 4 4
// vkak
// iiai
// avvk
// viaa
// 4 7
// vbickda
// vbickda
// vbickda
// vbickda
// outputCopy
// YES
// NO
// YES
// NO
// YES