/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-05-09
 */
// capacity表示剩余的容量
// v表示每件物品的价值
// w表示每件物品的体积
// 求在不超过capacity的条件下,所能取到的物品最大值
#include <bits/stdc++.h>

using namespace std;
int n;
const int maxn = 1e5 + 10;
#define ll long long;
int c;
vector<int> n{1, 3, -2, 4, -3, 5, 2};
vector<int> w{1, 3, -2, 4, -3, 5, 2};
vector<int> v{1, 3, -2, 4, -3, 5, 2};
int len = n.size();
int sum = 0;
// 0-1背包问题(动态规划)

int dfs(int i, int c)
{
  if (i < 0)
    return 0;
  if (w[i] > c)
    return (i - 1, c);
  return max(dfs(i - 1, c - w[i]) + v[i], dfs(i - 1, c));
}
int main()
{
  dfs(len, c);
  return 0;
}