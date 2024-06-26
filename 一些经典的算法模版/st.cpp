#include <iostream>
using namespace std;
// 本程序用于学习st表的查询
// 可以最小的时间复杂度来实现某一个区间的最大值
int n, m;
int x, y;
const int maxn = 1e6 + 5;
int f[maxn][20];
int llg[maxn + 1];
void init()
{
    for (int i = 1; i <= n; i++)
    {
        cin >> f[i][0];
    }

    llg[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        llg[i] = llg[i >> 1] + 1;
    }

    // 这一段就找到了那个指数
    //  for (int i = 1; i <= maxn; i++)
    //      cout << llg[i] << " ";
}

int st(int l, int r)
{
    int k = llg[r - l + 1];
    return max(f[l][k], f[r - (1 << k)+1][k]);
}
// 定义一个函数用于返回查询的值
int main()
{
    cin >> n >> m;
    init();
    for (int i = 1; i <= llg[n]; i++)
    {
        for (int j = 1; j <= n - (1 << i) + 1; j++)
            f[j][i] = max(f[j][i - 1], f[j + (1 << (i - 1))][i - 1]);
    }
    for (int i = 1; i <= m; i++)
    {

        cin >> x >> y;
        cout << st(x, y) << endl;
    }
    return 0;
}