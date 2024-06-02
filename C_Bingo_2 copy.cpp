/*
author:xh_forever
time:2024.5.25
*/
#include <bits/stdc++.h>
using namespace std;

const int N = 2010;

int n, m, a[N], b[N];

inline int read()
{
    int s = 0, w = 1;
    char ch = getchar();
    for (; ch < '0' || ch > '9'; w *= ch == '-' ? -1 : 1, ch = getchar())
        ;
    for (; ch >= '0' && ch <= '9'; s = s * 10 + ch - '0', ch = getchar())
        ;
    return s * w;
}

signed main()
{
    n = read(), m = read();
    for (int i = 1, x, cnt = 0, tot = 0; i <= m; ++i)
    {
        x = read(), ++a[x % n], ++b[(x - 1) / n];
        if ((!(x % n) ? n : x % n) == (x - 1) / n + 1)
            ++cnt;
        if ((!(x % n) ? n : x % n) + (x - 1) / n + 1 == n + 1)
            ++tot;
        if (cnt == n || tot == n)
            printf("%d\n", i), exit(0);
        for (int j = 0; j < n; ++j)
            if (a[j] == n || b[j] == n)
                printf("%d\n", i), exit(0);
    }
    puts("-1");
    return 0;
}
