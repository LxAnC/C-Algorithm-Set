/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-23
 */
#include <bits/stdc++.h>

using namespace std;
void solve()
{
  int n, x, k, m;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    if (i == 0)
      k = x & 1;
    if (i == 1)
      m = x & 1;
    if (i & 1)
    {
      if (x & 1 != k)
        {cout << "NO" << endl;return ;}
    }
    else
    {
      if (x & 1 != m)
        {cout << "NO" << endl;return ;}
    }
  }
  cout<<"YES"<<endl;
}
int main()
{
  int t;
  while (t--)
  {
    solve();
  }
  return 0;
}
