/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-30
 */
#include <bits/stdc++.h>

using namespace std;
void solve()
{
  int n;
  cin >> n;
  char a[101][101], b[101][101];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    {
      cin >> a[i][j];
    }
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    {
      cin >> b[i][j];
    }
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
    {
      if (a[i][j] != b[i][j])
      {
        cout << i + 1 << ' ' << j + 1 << endl;
        return;
      }
    }
}
int main()
{
  int t = 1;
  while (t--)
  {
    solve();
  }
  return 0;
}
