// link - https://codeforces.com/problemset/problem/236/A

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int l=s.length();
    int ans=0;
    for(int i=1; i<l; i++)
    {
        if(s[i]!=s[i-1])
            ans++;
    }
    if(ans&1)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}

// input:
// wjmzbmr
// output:
// CHAT WITH HER!

// input:
// xiaodao
// output:
// IGNORE HIM!