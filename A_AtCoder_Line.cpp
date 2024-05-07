/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-05-07
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{

  int n, x, y, z;
  cin >> n >> x >> y >> z;
  if (x < y)
  {
    int t = x;
    x = y;
    y = t;
  }
  if (z >= y && z <= x && z <= n)
  {
    cout << "Yes" << endl;
  }
  else
    cout << "No" << endl;
  return 0;
}
