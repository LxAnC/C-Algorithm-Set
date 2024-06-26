//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-06-06 23:24
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
vector<int> a(N);
bool check(int sum)
{
    int i;
    for (i = 2; i * i <= sum; i++)
        if (sum % i == 0)
            return false;
    return true;
}
void dfs(int k, int sum, int startx)
{
    if (k == y)
    {
        if (check(sum))
            ans++;
        return ;
    }
    for (int i = startx; i < n; i++)
    {
        dfs(k + 1, sum + a[i], i + 1);
    }
    return ;
}
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> y;
    for (int i = 0; i <n; i++)
        cin >> a[i];
    dfs(0, 0, 0);
    cout << ans;
    return 0;
}
