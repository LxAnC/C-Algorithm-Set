#include<iostream>
#include<climits>
using namespace std;
int ret=0;
int n,m;
const int maxn=1e5+10;
int graph[maxn][maxn];//图论的数组
void floyd()
{
    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=n;i++)
        {
            if(graph[i][j]!=INT_MAX)
              for(int k=1;k<=n;k++)
                if(graph[i][j]+graph[j][k]<graph[i][k])
                   graph[i][k]=graph[i][j]+graph[j][k];
        }
    }
    return;
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
        graph[i][j]=INT_MAX;
    
    for(int i=1;i<=m;i++)
    {
        int a,b,w;
        cin>>a>>b;
        cin>>w;
        graph[a][b]=graph[b][a]=w;
    }
    floyd();
    for(int i=1;i<=n;i++)
     { for(int j=1;j<=n;j++)
        cout<<graph[i][j]<<" ";
        cout<<endl;
     }
     return 0;
}