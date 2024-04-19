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
  stack<int> s;
  int n;
  cin >> n;
  s.push(n);
  s.push(n);
  s.push(n);
  s.push(n);
  s.push(n);
  s.push(n);
  s.push(n);
  s.pop();
  cout << s.top();
  return 0;
}
