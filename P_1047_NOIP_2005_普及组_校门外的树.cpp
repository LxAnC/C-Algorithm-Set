//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-06-03 15:33
//
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define N (int)1e4 + 10
#define f1(i) for (int i = 1; i <= n; i++)
#define f2(i) for (int i = n; i; i--)
#define f first
#define s second
#define ma max
#define mi min
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
int t[N];
int n, m, x, y, z, ans;
void remove(int a, int b)
{
    for (int i = a; i <= b; i++)
    {
        t[i] = 0;
    }
}
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    for (int i = 0; i <= n; i++)
        t[i] = 1;
    int a, b;
    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b;
        remove(a, b);
    }
    for (int i = 0; i <= n; i++)
        ans+=t[i];
    cout << ans;
    return 0;
}
