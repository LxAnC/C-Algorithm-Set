#include <iostream>
using namespace std;
// 本程序用于学习st表的查询
// 可以最小的时间复杂度来实现某一个区间的最大值
// st
int n, m;
int x;
const int maxn = 1005;
int f[maxn][maxn];
long long int llg[maxn];
void init()
{
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        f[i][0] = x;
    }


    llg[0]=-1;
    for (int i = 1; i <= maxn; i++)
    {
        llg[i] = llg[i >> 1] + 1;
    }

    //这一段就找到了那个指数
    for (int i = 1; i <= maxn; i++)
        cout << llg[i] << " ";
}

// int st()
// {
//     for()
// }
// 定义一个函数用于返回查询的值
int main()
{
    cin >> n >> m;
    init();
    for (int i = 1; 1 << i <= n; i++)
    {
        for (int j = 1; j + (1 << (i - 1)) <= n; j++)
            f[j][i] = max(f[j][i - 1], f[j + (1 << (i - 1))][i - 1]);
    }
    return 0;
}