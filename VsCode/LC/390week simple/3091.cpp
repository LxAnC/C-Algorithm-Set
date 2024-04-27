/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-27 
 */
#include <bits/stdc++.h>

using namespace std;
//链接如下
// https://leetcode.cn/problems/apply-operations-to-make-sum-of-array-greater-than-or-equal-to-k/description/
class Solution {
public:
    int minOperations(int k) {
        int ans = INT_MAX;
        for (int m = 1; m <= k; m++) {
            ans = min(ans, m - 1 + (k - 1) / m);
        }
        return ans;
    }
};