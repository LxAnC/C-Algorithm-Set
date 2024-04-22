/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-22 
 */
// class Solution {
// public:
//     long long maximumHappinessSum(vector<int>& happiness, int k) {
//         int n=happiness.size();
//         ranges::sort(happiness);
//         int sum=0,i=n-1;
//         //贪心
//         int b=k;
//         while(k--)
//         {
//             sum+=happiness[i];
//             i--;
//         }
//         return sum-(b-1);
//     }
// };
//值得学习
class Solution {
public:
    long long maximumHappinessSum(vector<int> &happiness, int k) {
        ranges::sort(happiness, greater<>());
        long long ans = 0;
        for (int i = 0; i < k && happiness[i] > i; i++) {
            ans += happiness[i] - i;
        }
        return ans;
    }
};