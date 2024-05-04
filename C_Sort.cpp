/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-05-04
 */
#include <bits/stdc++.h>

using namespace std;
unordered_map<int, int> mp;
vector<pair<int, int>> p;
int main()
{
  int n, ret = 0;
  cin >> n;
  vector<int> s(n + 1);
  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    mp[i] = x;
  }
  for (int i = 1; i <= n; i++)
  {
    if (mp[i] != i)
    {
      auto it = mp.find(mp.begin(), mp.end(), i);
      swap(mp[i], )
    }
  }
  // cout<<__cplusplus<<endl;
  return 0;
}
