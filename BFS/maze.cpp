/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-05-03
 */
#include <bits/stdc++.h>
#define M 1e7;
using namespace std;
int mp[10000][10000];   // 代表存的地图
int dist[10000][10000]; // 代表距离
queue<queue<int, int>> s;
int n;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1}; // 代表的各个方向可以走的
long long bfs(int x1, int y1)
{
  memset(dist,-1,sizeof dist);
  s.push({x1,y1});
  dist[x1][y1]=0;
  while(!s.empty())
  {
    auto q=s.front();
    s.pop();
    for(int i=0;i<4;i++)
    {
       int sx=q.first+dx[i];
       int sy=q.second+dy[i];
       if(sx<1||sx>n||sy<1||sy>n)continue;
       if(mp[sx][xy]!=0)continue;
       if(dist[sx][sy]>0)continue;
       s.push({sx,sy});
       dist[sx][sy]=dist[x1][y1]+1;
    }
   
  }
  return dist[n][n];
}
int main()
{

  cin >> n;
  for (int i = 1; i < n; i++)
    for (int j = 1; j < n; j++)
    {
      cin >> mp[i][j];
    }
  long long ret = bfs(1, 1);
  return 0;
}
