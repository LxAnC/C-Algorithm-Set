//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-05-27 22:14
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
int a[N];
int n, m, x, y, z, ans;
int binarysearch(int l, int r,int c1)
{
    if (a[r] < c1)
        return r + 1;
    while (l < r)
    {
        int m = l + r >> 1;
        if (a[m] >= c1)
            r = m;
        else
            l = m + 1;
    }
    return l;
}
signed main()
{
    int ret = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    int gs = 0;
    for (int i = 1; i <= n; i++)
    {
        ret += a[i];
        int b=100000000-a[i];
        int a = n  - binarysearch(i + 1, n, b)+1;
        gs += a;
    }
    cout << ret * (n - 1) - 100000000 * gs;
    return 0;
}
