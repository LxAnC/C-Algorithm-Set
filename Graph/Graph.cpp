// https://zhuanlan.zhihu.com/p/94890350
#include <bits/stdc++.h>
using namespace std;
#define N 1000
// 无向图
// 邻接矩阵
int Nog[N][N]; // 不过达到10000（1e4）就不行了
               // 邻接表的做法
struct edge
{
    int to, w;
};
vector<edge> nums[N];

int n, m;
int x, y, w;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y >> w;
        Nog[x][y] = Nog[y][x] = w; // 初始化无向图；
    }

    return 0;
}
