/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-05-09 
 */
//目标和的对应代码,未改
//首先正数找到加到p
//那么负数就等于s-p
//p-(s-p)=t;
//p=(s+t)/2
class Solution {
public:
    int target;

    int findTargetSumWays(vector<int>& nums, int target1) {
        int n = nums.size();
        target = target1;
        int dfs=[&](int i, int c) {
            if (i < 0)
                return 1;
            if (c > target)
                return 0;
            return dfs(i - 1, c - nums[i]) + dfs(i - 1, c + nums[i]);
        }
        return dfs(n - 1, target1);
    }
};