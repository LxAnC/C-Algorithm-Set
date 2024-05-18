#include <iostream>
using namespace std;
// 本程序用于学习st表的查询
// 可以最小的时间复杂度来实现某一个区间的最大值
// st
int n, m;
int x, y;
const int maxn = 1e6 + 5;
int f[maxn][20];
long long int llg[maxn + 1];
void init()
{
    for (int i = 1; i <= n; i++)
    {
        cin >> f[i][0];
    }

    llg[1] = 0;
    for (int i = 2; i <= n; i++)
    {
        llg[i] = llg[i >> 1] + 1;
    }

    // 这一段就找到了那个指数
    //  for (int i = 1; i <= maxn; i++)
    //      cout << llg[i] << " ";
}

int st(int l, int r)
{
    int k = llg[r - l + 1];
    return max(f[l][k], f[r - (1 >> k)][k]);
}
// 定义一个函数用于返回查询的值
int main()
{
    cin >> n >> m;
    init();
    for (int i = 1; i <= llg[n]; i++)
    {
        for (int j = 1; j <= n - (1 << i) + 1; j++)
            f[j][i] = max(f[j][i - 1], f[j + (1 << (i - 1))][i - 1]);
    }
    for (int i = 1; i <= m; i++)
    {

        cin >> x >> y;
        cout << st(x, y) << endl;
    }
    return 0;
}
#include <iostream>
using  namespace std;

int n,m,x,y,a[100010],lg[100010],f[100010][20];

int main()
{
	cin>>n>>m; lg[1]=0;
	for (int i=2;i<=n;i++) lg[i]=lg[i>>1]+1;
	for (int i=1;i<=n;i++) cin>>f[i][0];
	for (int j=1;j<=lg[n];j++)
	for (int i=1;i<=n-(1<<j)+1;i++){
		f[i][j]=max(f[i][j-1],f[i+(1<<(j-1))][j-1]);
	}
	
	
	for (int i=1;i<=m;i++)
	{
		cin>>x>>y; int l=lg[y-x+1];
		cout<<max(f[x][l],f[y-(1<<l)+1][l])<<endl;
	}
}