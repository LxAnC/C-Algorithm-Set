/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-05-08
 */
#include <bits/stdc++.h>

using namespace std;
// 曼哈顿距离的解释
int main()
{
  int x[2], y[2];
  cin >> x[0] >> y[0];
  cin >> x[1] >> y[1];
  cout<<abs((x[0]-x[1]))+abs((y[0]-y[1]));
  return 0;
}
