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
  auto s = [](int a, int b)
  { return a > b; };
  auto x=s(1,2);
  return 0;
}
