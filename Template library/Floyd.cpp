#include<iostream>
using namespace std;
int ret=0;
int n,m;
const int maxn=1e5+10;
int graph[maxn][maxn];
//第一，创建一个距离数组
int distince[][];
void floyd()
{
    for(int j=1;j<=n;j++)
    {
        for(int i=1;i<=n;i++)
        {
            if(graph[i][j]!=INFINITY)
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
      for(int j=1;j<=n;j++)
        graph[i][j]=INT_MAX;

    floyd();
    cout<<ret<<endl;
}