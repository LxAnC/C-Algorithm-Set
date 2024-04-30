/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-30
 */
#include <bits/stdc++.h>
using namespace std;
int n = 20;
int main()
{
  // [ capture ]( parameters ) mutable throw() -> return_type { expression }
  // 捕获与传值传引,控制
  auto e = [](int a, int b)
  { return a > b; }; // 实现判断函数
  vector<int> s{1, 3, 2, 5, 3, 42, 4, 0, 6, 3, 2},m;
  // sort(s.begin(), s.end(), [](int a, int b)
  //      { return a > b; }); // 最标准的C++20及以下的sort
  // for(auto &x:s)
  // {
  //   if(x%3==0)
  //   m.push_back(x*x);
  // }
  copy_if(s.begin(),s.begin()+4,back_inserter(m),[&](int a){
return a%3==0;
  });
  for (auto &x : m)
    cout << x << " ";
  return 0;
}
