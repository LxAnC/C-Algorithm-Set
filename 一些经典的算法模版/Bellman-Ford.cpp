// ACwing板子题853有限制的边权图
#include <bits/stdc++.h>
#define N 10005
using namespace std;
struct node
{
    int a, b, w;
} edge[N];
int n, m, k;
int dist[N];
int last[N];
void bell_man_ford()
{
    memset(dist, 0x3f, sizeof(dist));
    dist[1] = 0;
    for (int i = 0; i < k; i++)
    {
        memcpy(last, dist, sizeof(dist));
        for (int j = 1; j <= m; j++)
        {
            auto e = edge[j];
            dist[e.b] = min(dist[e.b], last[e.a] + e.w);
        }
    }
}
int main()
{
    // int n, m, k;
    // memset(dist, 0x3f, sizeof(dist));
    cin >> n >> m >> k;
    for (int i = 1; i <= m; i++)
    {
        cin >> edge[i].a >> edge[i].b >> edge[i].w;
    }
    bell_man_ford();
    if (dist[n] > 0x3f3f3f3f / 2)
        cout << "impossible" << endl;
    else
        cout << dist[n];
    return 0;
}

// //
// //* @Author: LxAnC
// //* @Email : LxAnC76@gmail.com
// //* @Date  : 2024-05-27 10:36
// //
// #include <bits/stdc++.h>
// using namespace std;
// #define N 10005
// #define f1(i) for (int i = 1; i <= n; i++)
// #define f2(i) for (int i = n; i; i--)
// #define first f
// #define second s
// #define max ma
// // #define min mi
// // 贝尔曼福特算法
// int n, m, x, y, z, ans;
// int dist[N];
// // 前向星存图
// struct node
// {
//     int from, to, w, next;
// } edge[N];
// int head[N], cnt = 1;
// void add(int f, int t, int w)
// {
//     edge[cnt].from = f;
//     edge[cnt].to = t;
//     edge[cnt].w = w;
//     edge[cnt].next = head[f];
//     head[f] = cnt++;
// }
// void bellmanford(int x, int y)
// {
//     for (int i = 1; i <= x; i++)
//         for (int j = 1; j <= y; j++)
//             dist[edge[i].to] = min(dist[edge[i].to], dist[edge[i].from] + edge[i].w);
// }
// int main()
// {
//     cin >> n >> m;
//     for (int i = 1; i <= m; i++)
//     {
//         cin >> x >> y >> z;
//         add(x, y, z);
//     }

//     return 0;
// }
