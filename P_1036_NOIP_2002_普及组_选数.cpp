//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-06-04 15:04
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
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i <= k; i++)
    {
        vector<int> b(n);
        int m,l,p;
        for (int j = 0; j < n; j++)
        {
            if(b[j]==0)
            m=a[j],b[j]=1;
            else if(b[])
        }
    }
    return 0;
}
