/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-05-03
 */
#include <bits/stdc++.h>

using namespace std;
unordered_map<string, int> hash1;
int main()
{
  int n;
  int ret;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string x;
    cin >> x;
    if (!(hash1.count(x)))
    {
      ret++;
    }
    hash1[x]++;
  }
  cout << ret;
  return 0;
}
