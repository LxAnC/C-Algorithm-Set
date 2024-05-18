#include <iostream>
using namespace std;
const int maxn = 1e5 + 5;
int n, m;
int x, y;
int f[maxn][21];
long long int llg[maxn + 1];
int st(int l, int r)
{
    int k = llg[r - l + 1];
    return max(f[l][k], f[r- (1 >> k)][k]);
}
signed main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        f[i][0] = x;
    }
    llg[0] = -1;
    for (int i = 1; i <= maxn; i++)
        llg[i] = llg[i >> 1] + 1;

    for (int i = 1; i <= llg[n]; i++)
        for (int j = 1; j + (1 << i) - 1 <= n; j++)
            f[j][i] = max(f[j][i - 1], f[j + (1 << (i - 1))][i - 1]);

    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y;
        cout << st(x, y) << endl;
    }
    return 0;
}