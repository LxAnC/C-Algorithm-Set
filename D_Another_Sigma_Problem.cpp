//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-05-28 16:07
//
//
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define maxn (int)2e6 + 5
#define f1(i) for (int i = 1; i <= n; i++)
#define f2(i) for (int i = n; i; i--)
#define first f
#define second s
#define max ma
#define min mi
const int P=998244353;
int n, m, x, y, z, ans,su;
int a[maxn], cnt[11];//存数据和长度的数组
//通过分析式子
signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    int ret=0;
    for (int i = 1; i <= n; i++)
    {
        int sz=pow(10,(int)to_string(a[i]).size());
        ans=(ans+(su%P)*(sz%P)+(a[i]*(i-1)%P)%P)%P;
        su=(su+a[i])%P;
    }
    cout<<ans;
    return 0;
}
