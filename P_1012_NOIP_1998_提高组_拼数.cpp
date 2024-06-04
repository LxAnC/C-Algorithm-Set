//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-06-04 10:21
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
    cin >> n;
    vector<string> num(n);
    for (int i = 0; i < n; i++)
    {

        cin >> num[i];
    }
    sort(num.begin(), num.end(), [&](string s1,string s2){
        return s1+s2>s2+s1;
    });
    string ret = "";
    for (int i = 0; i < n; i++)
    {
        ret += num[i];
    }
    cout << ret;

    return 0;
}
