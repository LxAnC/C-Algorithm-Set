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
  int n, x,ret=-1;
  cin >> n;
  int hash[200001] = {0};
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    hash[x] += 1;
    if (hash[x] == 3)
    {
      ret=x;
    }
  }cout << ret<<endl;
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
