// link - https://codeforces.com/problemset/problem/334/A

#include <cstdio>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        printf("%d", i + 1);
        for (int j = 1; j < n; ++j)
        {
            printf(" %d", n * j + (i + j) % n + 1);
        }
        printf("\n");
    }
    return 0;
}

// inputCopy
// 2
// outputCopy
// 1 4
// 2 3