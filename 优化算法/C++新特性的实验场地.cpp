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
  vector<int> s{1, 3, 2, 5, 3, 42, 4, 0, 6, 3, 2}, m;
  // sort(s.begin(), s.end(), [](int a, int b)
  //      { return a > b; }); // 最标准的C++20及以下的sort
  // for(auto &x:s)
  // {
  //   if(x%3==0)
  //   m.push_back(x*x);
  // }
  // back_inserter生成一个push_back
  // 扫描s 通过if来实现判断生成的函数
  // 由于左闭右开所以+5为[0,5)
  // copy_if(s.begin(), s.end(), back_inserter(m), [&](int a)
  //         { return a % 3 == 0; });
  // transform(m.begin(),m.end(),back_inserter(output),[&](const int n){
  //   return n*n;
  // });
  // 这样需要一个中间变量,这里直接套入views还有管道运算符
  // auto output=s
  // |views::filter([](const int a){return a%3==0;})
  // |views::transform([](const int a){return a*a;});//完全可以代替前面的代码
  // auto x=views::iota(s.begin(),s.end(),0);//不能这么写
  // vector<int>a;
  // iota()//这么写
  for (auto x : views::iota(1, 11))
    cout << x << " ";
  cout << __cplusplus << endl;
  return 0;
}
