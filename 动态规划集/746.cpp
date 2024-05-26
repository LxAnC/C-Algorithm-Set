/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-05-11 
 */
//使用最小花费爬楼梯
// class Solution {
// public:
//     int minCostClimbingStairs(vector<int>& cost) {
//         int n=cost.size();
//         vector<int>dp(n+1);
//         for(int i=2;i<=n;i++)
//         {
//             dp[i]=min(dp[i-2]+cost[i-2],dp[i-1]+cost[i-1]);
//         }
//         return dp[n];
//     }
// };
