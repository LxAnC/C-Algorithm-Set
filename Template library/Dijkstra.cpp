#include <iostream>
#define int long long
using namespace std;
const int maxn = 1e3 + 10;
int n = 4;
int dist[maxn];
int g[maxn][maxn];
int st[maxn];

void dijkstra()
{
    dist[1]=0;
    int t=1;
    while(dist[t])
}
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    memset(g,0x3f,sizeof,g);
    for(int i=1;i<=n;i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        g[x][y]=min(g[x][y],z);
    }
    dijkstra();
    for (int i = 0; i < n; i++)
    {
        cout << dist[i];
        cout << endl;
    }
}