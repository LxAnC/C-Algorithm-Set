/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-18
 */
#include <bits/stdc++.h>

using namespace std;

// 还是有些案例过不了
void solve()
{
   int num, ret = 0;
   cin >> num;
   vector<int> c(num);
   for (int i = 0; i < num; i++)
      cin >> c[i];
   int count_candy = accumulate(c.begin(), c.end(), 0);
   int left = 0, right = num - 1, current_candy = 0, left2 = 0, right2 = 0;

   while (count_candy > current_candy && left <= right)
   {
      // 统计每一轮吃的糖果数
      int currl = 0, currr = 0;
      // 左边的糖果
      while (currl <= current_candy && left <= right) // 判断当前糖果是否满足要求
      {
         currl += c[left++];
      }
      ret++;
      count_candy -= currl; // 总数减去左边吃的糖果;
      left2 += currl;       // 统计左边吃过的糖果
      current_candy = currl;
      while (currr <= current_candy && right > left)
      {
         currr += c[right--];
      }
      count_candy -= currr;
      right2 += currr; // 统计左边吃过的糖果
      current_candy = currr;
      ret++;
   }
   cout << ret << " " << left2 << " " << right2 << endl;
}
int main()
{
   int t;
   cin >> t;
   while (t--)
   {
      solve();
   }
   return 0;
}
