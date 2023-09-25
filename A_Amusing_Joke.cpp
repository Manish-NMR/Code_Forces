// link - https://codeforces.com/problemset/problem/141/A

#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b, c, s;
    cin >> a >> b >> c;

    s = a + b;

    sort(s.begin(), s.end());
    sort(c.begin(), c.end());

    if(s == c)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

// inputCopy
// SANTACLAUS
// DEDMOROZ
// SANTAMOROZDEDCLAUS
// outputCopy
// YES
// inputCopy
// PAPAINOEL
// JOULUPUKKI
// JOULNAPAOILELUPUKKI
// outputCopy
// NO
// inputCopy
// BABBONATALE
// FATHERCHRISTMAS
// BABCHRISTMASBONATALLEFATHER
// outputCopy
// NO