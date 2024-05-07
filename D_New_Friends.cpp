/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-05-07
 */
#include <bits/stdc++.h>

using namespace std;
const long long maxn = 2e5 + 10;
long long n, m, mp[1000][1000],ret;
void init(int x, int y) // 初始化关系表
{
   mp[x][y] = 1;
   mp[y][x] = 1;
   return;
}
int solve()
{
   for(int i=1;i<=n;i++)
   {
      for(int j=1;j<=n;j++)
      {
         if(mp[i][j]==0)
         {
            ret++;
            mp[i][j]=1;
            mp[j][i]=1;
         }
      }
   }
   return ret;
}
signed main()
{
   ios::sync_with_stdio(0);
   cin >> n >> m;
   while (m--) 
   {
      int x, y;
      cin >> x >> y;
      init(x, y);
      mp[x][x]=1;
      mp[y][y]=1;
   }
   cout << solve() << endl;
   return 0;
}
