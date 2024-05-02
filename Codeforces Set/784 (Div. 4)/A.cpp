/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-23
 */
#include <bits/stdc++.h>

using namespace std;
// https://codeforces.com/contest/1669
void solve()
{
  int n;
  cin >> n;
  if (n >= 1900)
    cout << "Division 1" << endl;
  else if (n >= 1600)
    cout << "Division 2" << endl;
  else if (n >= 1400)
    cout << "Division 3" << endl;
  else
  {
    cout << "Division 4" << endl;
  }
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
