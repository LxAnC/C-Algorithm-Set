//
   //* @Author: LxAnC
   //* @Email : LxAnC76@gmail.com
   //* @Date  : 2024-05-29 22:27
//  
//洛谷模版题
#include <bits/stdc++.h>
using namespace std;
#define N 1005
#define f1(i)  for(int i=1;i<=n;i++)
#define f2(i)  for(int i=n;i;i--)
#define first f
#define second s
// #define max ma
// #define min mi
int startx,starty;
int n,m,x,y,z,ans;
int maxn;
int a[N][N];
int dfs(int x,int y)
{
    if(x>n||y>n)
    return 0;
    for(int i=startx;i<=x;i++)
      if(a[i][y]==0)
        return 0;
    for(int i=starty;i<=y;i++)
      if(a[x][i]==0)
       return 0;
    ans++;
    dfs(x+1,y+1);
    return ans;
}



int main()
{
   cin>>n>>m;
   for(int i=1;i<=n;i++)
     for(int j=1;j<=m;j++)
        cin>>a[i][j];
    for(int i=1;i<=n;i++)
      for(int j=1;j<=m;j++)
        if(a[i][j])
        {
            startx=i;
            starty=j;
            ans=0;
            maxn=max(maxn,dfs(i,j));
        }
        cout<<maxn;
   return 0;
}
