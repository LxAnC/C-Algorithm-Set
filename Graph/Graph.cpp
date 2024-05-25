// https://zhuanlan.zhihu.com/p/94890350
#include <bits/stdc++.h>
using namespace std;
#define N 1000
// 无向图
// 邻接矩阵
int Nog[N][N]; // 不过达到10000（1e4）就不行了

// 邻接表的做法
// struct edge
// {
//     int to, w;
// };
// vector<edge> nums[N];

// 第三种
// 链式前向星
struct Edge
{
    int to, w, next;
} edge[N];int head[N];
int cnt;//表示当前边的编号
// edge是边的数组
// head是顶点的数组
void add(int from, int to, int w)
{
    edge[cnt].to=to;
    edge[cnt].w=w;
    edge[cnt].next=head[from];//这里我粘贴一个链接给过去的自己
    //这里的意思就是把当前下一条边的信息变成边的编号
    //https://www.bilibili.com/video/BV1Fk4y1D7cH/?spm_id_from=333.788.recommend_more_video.0&vd_source=a6722c3a384bc12ef108d5deb79d4cca
    //这里表示的是当前开始的节点最近存的哪一次边
    head[from]=cnt++;

}

    Edge b[N];

int main()
{
    cin >> b[0].to;
    return 0;
}

// 邻接矩阵存无向图
//  int n, m;
//  int x, y, w;
//  int main()
//  {
//      cin >> n >> m;
//      for (int i = 1; i <= n; i++)
//      {
//          cin >> x >> y >> w;
//          Nog[x][y] = Nog[y][x] = w; // 初始化无向图；
//      }

//     return 0;
// }
