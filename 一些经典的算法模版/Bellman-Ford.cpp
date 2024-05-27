//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-05-27 10:36
//
#include <bits/stdc++.h>
using namespace std;
#define N 10005
#define f1(i) for (int i = 1; i <= n; i++)
#define f2(i) for (int i = n; i; i--)
#define first f
#define second s
#define max ma
// #define min mi
// 贝尔曼福特算法
int n, m, x, y, z, ans;
int dist[N];
// 前向星存图
struct node
{
    int from, to, w, next;
} edge[N];
int head[N], cnt = 1;
void add(int f, int t, int w)
{
    edge[cnt].from = f;
    edge[cnt].to = t;
    edge[cnt].w = w;
    edge[cnt].next = head[f];
    head[f] = cnt++;
}
void bellmanford(int x, int y)
{
    for (int i = 1; i <= x; i++)
        for (int j = 1; j <= y; j++)
            dist[edge[i].to] = min(dist[edge[i].to], dist[edge[i].from] + edge[i].w);
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> x >> y >> z;
        add(x, y, z);
    }

    return 0;
}
