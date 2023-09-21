//link - https://codeforces.com/problemset/problem/155/A

#include <iostream>
using namespace std;

int main()
{
    int n, points;
    cin >> n >> points;
    int min(points), max(points), amazing(0);
    while (--n)
    {
        cin >> points;
        if (points < min)
        {
            min = points;
            ++amazing;
        }
        if (points > max)
        {
            max = points;
            ++amazing;
        }
    }
    cout << amazing << endl;
    return 0;
}


// input:
// 5
// 100 50 200 150 200
// output:
// 2
// input:
// 10
// 4664 6496 5814 7010 5762 5736 6944 4850 3698 7242
// output:
// 4