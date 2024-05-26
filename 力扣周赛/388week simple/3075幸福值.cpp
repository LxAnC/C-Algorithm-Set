/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-22 
 */

// class Solution {
// public:
//     long long maximumHappinessSum(vector<int>& happiness, int k) {
//         long long n=happiness.size();
//         ranges::sort(happiness);
//         long long sum=0;
//         long long m=1;
//         for(int i=n-2;i>=0;i--)
//         {
//             if(happiness[i]-m>=0)
//             happiness[i]-=m++;
//             else
//             happiness[i]=0;
//         }
//         for(int i=n-1;i>=n-k;i--)
//         sum+=happiness[i];
//         return sum;
//     }
// };
//值得学习
// class Solution {
// public:
//     long long maximumHappinessSum(vector<int> &happiness, int k) {
//         ranges::sort(happiness, greater<>());
//         long long ans = 0;
//         for (int i = 0; i < k && happiness[i] > i; i++) {
//             ans += happiness[i] - i;
//         }
//         return ans;
//     }
// };