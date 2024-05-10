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
int n=3;
const int maxn = 1e5 + 10;
#define ll long long;
int c;
vector<int> w{4, 2, 3};
vector<int> v{4, 2, 3};

int len = w.size();vector<int>dp(len+1);
int sum = 0;
// 0-1背包问题(动态规划)
//这只是递归
// int dfs(int i, int c)
// {
//   if (i < 0)
//     return 0;
//   if (w[i] > c)
//     return (i - 1, c);
//   return max(dfs(i - 1, c - w[i]) + v[i], dfs(i - 1, c));
// }
int main()
{
  cin >> c;
  dp[0]=0;
  // cout << dfs(len - 1, c);
  for(int i=1;i<=n;i++)
  {
    for(int j=c;j>=0;j--)
    dp[j]=max(dp[j],dp[j-w[i-1]]+v[i-1]);
  }
  return 0;
}