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
  deque<int> d;
  int n, x;
  //插入
  while (n--)
  {
    cin >> x;
    d.push_back(x);
    d.push_front(x);
    d.insert(d.begin() + 2, x);
  }
  //删除分为前删和后删,还有中间删除,以及清空

  d.pop_front();
  d.pop_back();
  d.erase(d.begin()+2);
  d.clear();
  //读取队尾和队顶,还可以读取元素的d[i];

  return 0;
}
