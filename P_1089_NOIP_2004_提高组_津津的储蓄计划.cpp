//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-06-02 23:15
//
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define N 1e6 + 10
#define f1(i) for (int i = 1; i <= n; i++)
#define f2(i) for (int i = n; i; i--)
#define f first
#define s second
#define ma max
#define mi min
#define en '\n'
int pow(int a, int n)
{
    int q = 1;
    while (n)
    {
        if (n & 1)
            q = q * a;
        a *= a;
        n = n >> 1;
    }
    return q;
}

int n, m, x, y, z, ans;

signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    vector<int> a(13);
    for (int i = 1; i <= 12; i++)
        cin >> a[i];
    int p=0 ;
    for (int i = 1; i <= 12; i++)
    {
        p+=300;
        int k=p-a[i];
        if (k<0)
        {
            cout << -i;
            return 0;
        }
        else if(k>=100)
        ans+=k/100*100,k-=k/100*100;
        p=k;
    }
    ans = p + ans * 1.2;
    cout<<ans;
    return 0;
}
