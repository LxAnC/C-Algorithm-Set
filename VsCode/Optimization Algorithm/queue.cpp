/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-19
 */
//需要注意的是queue与stack不同在于,是出队或者出栈的顺序
//queue是先进先出,stack是先进后出
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, x;
  cin >> n;
  queue<int> q;
  while (n--)
  {
    cin >> x;
    q.push(x);
  }
  cout << "队列中的队顶和队尾元素是" << endl;
  cout << q.front() << endl;
  cout << q.back() << endl;
  ;
  q.pop();
  cout << "删除之后的队尾元素" << endl;
  cout << q.front();
  return 0;
}
