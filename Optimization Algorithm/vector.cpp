/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-19
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
  vector<int> n;
  int s;
  cin >> s;
  n.push_back(s);
  n.push_back(s);
  n.push_back(s);
  n.push_back(s);
  n.push_back(s);
  n.insert(n.begin() + 3, 2);        // 插入操作
  n.erase(n.begin(), n.begin() + 3); // 删除指定位置上的值,还可以删除区间上的值
  cout << n[0];
  // for (int i = 0; i < n.size(); i++)
  //   cout << n[i] << endl;
  return 0;
}
