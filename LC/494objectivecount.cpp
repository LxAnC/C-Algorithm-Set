/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-05-09
 */
// 目标和的对应代码,未改
// 首先正数找到加到p
// 那么负数就等于s-p
// p-(s-p)=t;
// p=(s+t)/2
// 递归做法
//  class Solution {
//  public:
//      int target;

//     int findTargetSumWays(vector<int>& nums, int target1) {
//         int n = nums.size();
//         target = target1;
//         int dfs=[&](int i, int c) {
//             if (i < 0)
//                 return 1;
//             if (c > target)
//                 return 0;
//             return dfs(i - 1, c - nums[i]) + dfs(i - 1, c + nums[i]);
//         }
//         return dfs(n - 1, target1);
//     }
// };
//表示的是连续的子序列的和的板子
// 240509留
class Solution {
public:
    int findTargetSumWays(vector<int> &nums, int target) {
        target += accumulate(nums.begin(), nums.end(), 0);
        if (target < 0 || target % 2) return 0;
        target /= 2;//这里没搞懂

        int f[target + 1];
        memset(f, 0, sizeof(f));//初始化为0,说明用没用到
        +
        f[0] = 1;
        for (int x : nums)
            for (int c = target; c >= x; --c)
                f[c] += f[c - x];
        return f[target];
    }
};

作者：灵茶山艾府
链接：https://leetcode.cn/problems/target-sum/solutions/2119041/jiao-ni-yi-bu-bu-si-kao-dong-tai-gui-hua-s1cx/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。