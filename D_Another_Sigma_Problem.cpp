//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-05-29 11:27
//
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define N 200010
#define f1(i) for (int i = 1; i <= n; i++)
#define f2(i) for (int i = n; i; i--)
#define first f
#define second s
#define max ma
#define min mi
#define P 998244353
int n, m, x, y, z, ans;
int a[N], b[N], c[N];

int ksm(int a, int b)
{
    int z = 1;
    while (b)
    {
        if (b & 1)
            z = z * a % P;
        a = a * a % P;
        b=b>>1;
    }
    return z;
}
signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = (int)to_string(a[i]).size();
        c[b[i]]++;
    }
    for (int i = 1; i <= n; i++)
    {
        ans = (ans + a[i] * (i - 1) % P) % P;
        c[b[i]]--;
        for (int j = 1; j <= 10; j++)
            ans = (ans + a[i] * c[j] % P * ksm(10, j) % P) % P;
    }
    cout << ans;
    return 0;
}
