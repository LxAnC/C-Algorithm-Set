/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-21
 */
#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n0, n1, n2;
  string ret;
  cin >> n0 >> n1 >> n2;
  if (n1 == 0)
  {
    if (n0 == 0)
      cout << string(n2 + 1, '1');
    else
      cout << string(n0 + 1, '0');
    return;
  }
  else
    for (int i = 0; i < n1 + 1; i++)
    {
      if (i & 1)
        ret += "0";
      else
        ret += "1";
    }
  ret.insert(1, string(n2, '0'));
  ret.insert(0, string(n1, '1'));
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
