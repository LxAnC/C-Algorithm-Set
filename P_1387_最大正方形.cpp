//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-05-29 17:52
//
#include <bits/stdc++.h>
using namespace std;
#define N 105
#define f1(i) for (int i = 1; i <= n; i++)
#define f2(i) for (int i = n; i; i--)
#define first f
#define second s
// #define max ma
// #define min mi
int a[N][N];
int n, m, x, y, z, ans;
int g[N][N];
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin>>g[i][j];
            if(g[i][j] == 1 )
            a[i][j]=min(min(a[i - 1][j], a[i - 1][j - 1]), a[i][j - 1]) + 1 ;
            ans = max(ans, a[i][j]);
        }
    }
    cout << ans;
    return 0;
}
