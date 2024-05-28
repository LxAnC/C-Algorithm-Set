#include <bits/stdc++.h>
#define int long long
const int m = 998244353;
const int N = (int)2e5 + 10;
using namespace std;
int n, m, a[N], b[N], c[N];
signed main()
{
    cin >> n;
    int ret=0; 
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        string s;
        s = to_string(a[i]);
        c[s.size()]++;//长度加一
        b[i]=s.size();//a的长度给到B，算A的贡献
    }
    for(int i=1;i<=n;i++)
    {
        c[b[i]]--;//放串
        for(int j=1;j<=9;j++)
        {
            
        }
    }
}
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 998244353;
// int a[200010],b[200010],c[10];
// signed main()
// {
//     int n;
//     cin>>n;
//     for(int i = 1;i <= n;i++)
//     {
//         cin>>a[i];
//         string s1 = to_string(a[i]);
//         c[s1.size()]++;
//         b[i] = a[i].size();//存下来 a[i] 的长度
//     }
//     long long ans = 0;
//     for(int i = 1;i <= n;i++)
//     {
//         c[b[i]]--;//减去a[i]的长度，避免重复计算
//         for(int z = 1;z <= 9;z++)//a[i] 作为第一个操作数的贡献
//         {
            ans += (((a[i]*((long long)pow(10,z)%mod))%mod)*zhi)%mod;//注意步步取模，不然就挂了
//             ans%=mod;
//         }
//         ans += (a[i]*(i-1))%mod;//第二种情况的贡献
//         ans%=mod;
//     }
//     cout<<ans<<"\n";
//     return 0;
// }
