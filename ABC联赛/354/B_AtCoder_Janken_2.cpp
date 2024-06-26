//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-05-31 12:54
//
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define N 1e6 + 10
#define f1(i) for (int i = 1; i <= n; i++)
#define f2(i) for (int i = n; i; i--)
#define f first
#define s second
#define d max
#define x min
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
    vector<pair<string, int>> a(n);
    for (auto &i : a)
    {
        cin >> i.f >> i.s;
        ans += i.s;
    }
    vector<int> id(n);
    iota(id.begin(), id.end(), 0);
    sort(id.begin(),id.end(),[&](int i,int j){
        return a[i].f<a[j].f;
    });
    ans=id[ans%n];
    cout<<a[ans].f;
    return 0;
}
