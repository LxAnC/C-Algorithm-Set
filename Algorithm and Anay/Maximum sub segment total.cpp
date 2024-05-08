/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-05-08
 */
#include <bits/stdc++.h>
//最大公共子区间的长度
using namespace std;  
int n;
const int maxn = 1000;
vector<vector<int>> dp(maxn + 1,vector<int>(maxn+1));
int a[maxn],ret=INT_MIN;


// int solve()
// {
//   int sum=0;
//   //状态转移方程
//   //最终输出dp[n][n];
// //ret记录当前最大的子区间和 
//   for(int i=0;i<=n;i++)
//   {
//       dp[i][i]=a[i];
//       for(int j=i+1;j<=n;j++)
//       {
//         dp[i][j]=dp[i][j-1]+a[j];
//         ret=max(dp[i][j],ret);
//       }
//   }
//   return ret;

// }
// int main()
// {

//   cin >> n;
//   for(int i=1;i<=n;i++)
//   {
//     cin>>a[i];
//   }
//   cout<<solve();
//   return 0;
// }
