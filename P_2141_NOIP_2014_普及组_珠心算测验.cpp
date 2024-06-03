//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-06-03 15:43
//
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define N 1e6 + 10
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

int n, m, x, y, z, ans;

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    unordered_map<int, int> hash1;
    int a[101];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        a[i] = x;
        hash1[x]++;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = i+1; j <= n; j++)
            if (a[i]!=a[j]&&hash1[(a[i] + a[j])]!= 0)
               {hash1[(a[i]+a[j])]=0; ans++;}
    }
    cout << ans;
    return 0;
}
