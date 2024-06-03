//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-06-03 11:04
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
    cin >> n;
    int l;
    if (n < 0)
         l = -1;
        n=abs(n);
    string s = to_string(n);
    reverse(s.begin(), s.end());
    if (l == -1)
        cout << "-";
    for (auto x : s)
        if (x != '0')
            cout<<x;
    return 0;
}
