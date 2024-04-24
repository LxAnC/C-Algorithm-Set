/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-24
 */
#include <bits/stdc++.h>

using namespace std;
void solve()
{
  int n;
  string s;
  int flag = 0;
  cin >> n;
  cin >> s;
  int r = 0, b = 0;
  for (int i = 0; i < n; i++)
  {
    if (s[i] == 'R')
      r++;
    else if (s[i] == 'B')
      b++;
    else
    {
      if (r == 0 || b == 0)
      {
        flag = 1;
      }
      r = 0;
      b = 0;
    }
  }
  if (flag == 0 && s[n - 1] == 'W')
  {
    flag = 0;
  }
  string ret = (flag == 0) ? "Yes" : "NO" ;
  cout << ret << endl;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
