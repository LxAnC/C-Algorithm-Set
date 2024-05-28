#include <bits/stdc++.h>>
#define int long long
const int m = 998244353;
const int N = (int)2e5 + 10;
using namespace std;
int n, m, a[N], b[N], c[N];
signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        string s;
        s = to_string(a[i]);
        b[s.size()]++;
        c[b[i]] = s.size();
    }
}
