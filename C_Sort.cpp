/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-05-04
 */
#include <bits/stdc++.h>

using namespace std;
queue<pair<int, int>> p;
int main()
{
  int n, ret = 0;
  cin >> n;
  int a[200005] = {0}, b[200005] = {0};
  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    a[i] = x;
    b[x] = i;
  }
  for (int i = 1; i <= n;)
  {
    if (a[i] != i)
    {
      swap(a[i], a[b[i]]);
      
      
      p.push({a[i], a[b[i]]});
      ret++;
    }
    else
    {
      i++;
    }
  }
  cout << ret << endl;
  while (!p.empty())
  {
    cout << p.front().first << " " << p.front().second << endl;
    p.pop();
  }
  return 0;
}
