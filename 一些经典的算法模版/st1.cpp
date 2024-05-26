#include <bits/stdc++.h>
using namespace std;
// ST的复习板

int n, m;
const int maxn = 1e5 + 5;
int a[maxn][20];
int p[maxn];
int llg[maxn];
int st(int x, int y)
{
    int k = llg[y - x + 1];
    return max(a[x][k], a[y - (1 << k) + 1][k]);
}
signed main()
{
    cin >> n >> m;

    // for (int i = 1; i <= n; i++)
    //     a[i][0] = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i][0];
    }
    llg[1] = 0;
    for (int i = 2; i <= n; i++)
        llg[i] = llg[i >> 1] + 1;
    for (int i = 1; i <= llg[n]; i++)
    {
        for (int j = 1; j + (1 << i) - 1 <= n; j++)
        {
            a[j][i] = max(a[j][i - 1], a[j + (1 << (i - 1))][i - 1]);
        }
    }
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << st(x, y) << endl;
    }
    return 1;
}