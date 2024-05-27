//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-05-27 21:43
//
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define N 1000005
#define f1(i) for (int i = 1; i <= n; i++)
#define f2(i) for (int i = n; i; i--)
#define first f
#define second s
#define max ma
#define min mi
#define Mod (int)1e8
int n, m, x, y, z, ans;
int a[N];

int check(int l, int r, int cnt)
{
    if (cnt > a[r])
        return r + 1;
    while (l < r)
    {
        int m = l + r >> 1;
        if (a[m] >= cnt)
            r = m;
        else
            l = m + 1;
    }
    return l;
}
signed main()
{
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int go=0;
    sort(a + 1, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        sum += a[i];
        int g = n - check(i + 1, n, 100000000 - a[i]) + 1;
        go += g;
    }
    cout << sum * (n - 1) - 100000000 * go;

    return 0;
}
