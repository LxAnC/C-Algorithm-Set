//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-06-12 14:31
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

int n, m, x, y, z, ans, tile = 1, size1;
void cb(int tr, int tc, int dr, int dc, int sise)
{
    if (s == 1)
        return;
    int t = tile++;
    s = sise / 2;
    if (dr < tr + s && dc < tc + s)
        cb(tr, tc, dr, dc, s);
    else
    {
        board[tr + s - 1][tc + s - 1] = t;
        cb(tr, tc, tr + s - 1, tc + s - 1, s);
    }
    if (dr < tr + s && dc >= tr + s)
        cb(tr, tc + s, dr, dc, s); 
    else 
    {
        board[tr+s-1][tc+s]=t;
        cb()
    }
}
signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int tr, tc, dr, dc, s;
    cin >> s;
    vector<vector<int>> board(s);
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            board[i][i] = 0;
    cb(tr, tc, dr, dc, s);
    return 0;
}
