//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-06-02 11:13
//
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define N 2010
#define f1(i) for (int i = 1; i <= n; i++)
#define f2(i) for (int i = n; i; i--)
#define f first
#define s second
#define da max
#define xi min
#define en '\n'
int pow(int a, int n)
{
    int q = 1;
    while (n)
    {
        if (n & 1)
            q = q * a;
        a *= a;
        n = n >> 1;
    }
    return q;
}

int n, m, x, y, z, ans;
int g[N][N];
vector<bool> num(N);
int check(int n)
{
    // 判断一行是否标记
    int i;
    int flag = 0;
    for (int j = 0; j < n; j++)
    {
        for (i = 1 + n * j; i <= n + n * j; i++)
            if (num[i] == 0)
                flag = 1;
        if (flag == 0)
            return 1;
    }
    for (int j = 1; j <= n; j++)
    {
        for (i = 1 * j; i <= 2 * n + j; i += n)
        {
            if (num[i] == 0)
                flag = 1;
        }
        if (flag == 0)
            return 1;
    }
    for (i = 1; i <= n * n; i += n + 1)
    {
        if (num[i] == 0)
            flag = 1;
    }
    if (flag == 0)
        return 1;
    return -1;
}
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            g[i][j] = n * (i - 1) + j;
            num[g[i][j]] = 0;
        }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << g[i][j] << " ";
    //     }
    //     cout << en;
    // }
    int t;
    ans = -1;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> x;
        num[x] = 1;
        int st = check(n);
        if (st != -1)
        {
            ans = i;
            cout << ans;
            return 0;
        }
    }
    cout << ans << en;
    return 0;
}
