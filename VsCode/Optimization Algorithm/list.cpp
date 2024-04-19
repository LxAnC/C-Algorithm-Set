/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-19 
 */

/*list是双向链表,有vector,deque的特征,而且效率高，缺点是，它不能像 array 和 vector 那样，通过位置直接访问元素。
如何需要对序列进行大量添加或删除元素的操作，而直接访问元素的需求却很少，这种情况建议使用 list 容器存储序列。
它有插入(前插，后插，中间插)，删除（前删，后删，清空等），排序等功能。
而且，可以剔除连续相同元素，保留一个。
接下来,用一个程序将它的功能串起来。 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
  list<int>l;
  int n,x;
  cin>>n;
  while(n--)
  {
    cin>>x;
    l.push_back(x);
  }
  l.push_front(1);
  auto it =l.begin();
  l.unique();
  while(it!=l.end())
  {
    cout<<*it++<<' ';
  }
   return 0;
}
