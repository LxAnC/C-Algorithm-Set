//
//* @Author: LxAnC
//* @Email : LxAnC76@gmail.com
//* @Date  : 2024-06-07 00:20
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
int dp[25][25][25];
int n, m, x, y, z, ans;
int check1(int a, int b, int c)
{
  int ret;
  if (a <= 0 || b <= 0 || c <= 0)
    dp[a][b][c]=1;
  else if (a > 20 || b > 20 || c > 20)
    return check1(20, 20, 20);
  else if (a < b && b < c)
    return check1(a, b, c - 1) + check1(a, b - 1, c - 1) - check1(a, b - 1, c);
  else
    return check1(a - 1, b, c) + check1(a - 1, b, c - 1) + check1(a - 1, b - 1, c) - check1(a - 1, b - 1, c - 1);
  return 0;
}
signed main()
{
  ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  vector<int> a(N);
  vector<int> b(N);
  vector<int> c(N);
  int i = 0;
  while (1)
  {
    cin >> x >> y >> z;
    if (x == -1 && y == -1 && z == -1)
      break;
    a[i] = x;
    b[i] = y;
    c[i++] = z;
    
    cout << "w" << "(" << x << ", " << y << ", " << z << ')' << " = " << check1(x, y, z) << en;
  }
  return 0;
}
