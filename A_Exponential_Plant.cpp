//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-05-30 23:23
//
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define N 10005
#define f1(i) for (int i = 1; i <= n; i++)
#define f2(i) for (int i = n; i; i--)
#define first f
#define second s
#define max ma
#define min mi

int n, m, x, y, z, ans;
inline int pow1(int a, int n)
{
    int ans = 1;
    while (n)
    {
        if (n & 1)
            ans *= a;
        a *= a;
        n = n >> 1;
    }
    return ans;
}
signed main()
{
    cin >> n;
    int a[N];
    a[0] = 0;
    for (int i = 1; i <= 50; i++)
        a[i] = a[i - 1] + pow1(2, i - 1);
    for (int i = 0; 1; i++)
    {
        if (a[i] > n)
        {
            cout << i;
            return 0;
        }
    }
    return 0;
}
