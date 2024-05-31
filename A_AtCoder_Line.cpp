/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-05-07
 */
#include <bits/stdc++.h>

using namespace std;
//A题
int main()
{

  int n, x, y, z;
  cin >> n >> x >> y >> z;
  for (int i = min(x, y); i <= max(x, y); i++)
    if (i == z)
    {
      cout << "Yes";
      return 0;
    }
  cout << "No";
  return 0;
}
