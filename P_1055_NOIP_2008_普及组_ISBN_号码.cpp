//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-06-03 20:17
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
    string s;
    getline(cin, s);
    ans = 0;
    ans += (s[0] - '0') * 1;
    ans += (s[2] - '0') * 2 + (s[3] - '0') * 3 + (s[4] - '0') * 4;
    ans += (s[6] - '0') * 5 + (s[7] - '0') * 6 + (s[8] - '0') * 7;
    ans += (s[9] - '0') * 8 + (s[10] - '0') * 9;
    if (s[12] - '0' == ans % 11 || (s[12] == 'X' && ans % 11 == 10))
        cout << "Right";
    else if (ans % 11 != 10)
        cout << s.substr(0, 12) << ans % 11;
    else
        cout << s.substr(0, 12) << "X";
    return 0;
}
