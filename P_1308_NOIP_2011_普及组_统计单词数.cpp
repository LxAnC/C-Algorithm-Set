//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-06-03 20:26
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
    string s1, s2;
    cin >> s1;
    int b=-1, tot = 0;
    unordered_map<string, int> hash1;
    char ch;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    while (ch = getchar() != '\n')
    {
        if (ch == ' ')
        {
            transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
            hash1[s2]++;
            if(s1==s2&&b==-1)
            b=
            s2 = "";
        }
        s2 += ch;
    }
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    hash1[s2]++;
    
    return 0;
}
