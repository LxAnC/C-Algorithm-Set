#include <iostream>
#define int long long
using namespace std;
const int maxn = 1e3 + 10;
int n,m;
int dist[maxn];
int g[maxn][maxn];
bool st[maxn];

void dijkstra()
{
    memset(dist,0x3f,sizeof dist);
    dist[1]=0;
    int elem=n;
    while(elem--)
    {
        int t=-1;
        for(int i=1;i<=n;i++)
        {
            if(st[i]==0&&(t==-1||dist[t]>dist[i]))
            t=i;
        }
        st[t]=true;
        for(int i=1;i<=n;i++)
        {
            if(st[i]==0)
            dist[i]=min(dist[t]+g[t][i],dist[i]);
        }
    }
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    memset(g,0x3f,sizeof g);
    for(int i=1;i<=m;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        g[x][y]=min(g[x][y],z);
    }
    dijkstra();
    for (int i = 1; i <= n; i++)
    {
        cout << dist[i];
        cout << endl;
    }
}