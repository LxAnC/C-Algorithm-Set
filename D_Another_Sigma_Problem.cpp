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

int n, m, x, y, z, ans;
int a[maxn], cnt[11];
signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        cnt[to_string(a[i]).size()]++;
    }

    int ret=0;
    for (int i = 1; i <= n; i++)
    {
        ret+=a[i]*(i-1);
        for(int i=1;i<=10;i++)
         ret+=a[i]*pow(10,i)+cnt[i];//计算
         //这里有点儿不懂
         //四题结束
    }
    cout<<ret;
    return 0;
}
