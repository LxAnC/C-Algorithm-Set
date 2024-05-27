//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-05-27 15:16
//
#include <bits/stdc++.h>
using namespace std;
#define N 10005
#define f1(i) for (int i = 1; i <= n; i++)
#define f2(i) for (int i = n; i; i--)
#define first f
#define second s
#define max ma
#define min mi

int n, m, x, y, z, ans;
int k1,k2;
// 简单模拟题

void check(int x)
{
    if(x<k1)
    {
        ans++;
        k1=k2;
    }
    else 
    {
        ans++;
        check(x-k1);
    }
}

int main()
{
    cin >> n >> k2;
    k1=k2;
    int a[N];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        check(a[i]);
    }
    cout<<ans<<endl;
    return 0;
}
