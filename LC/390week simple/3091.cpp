/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-27 
 */
//链接如下
// https://leetcode.cn/problems/apply-operations-to-make-sum-of-array-greater-than-or-equal-to-k/description/
class Solution {
public:
    int minOperations(int k) {
        int i=max((int)sqrt(k-1),1);
        return min(i+(k-1)/(i+1),i+(k-1)/i-1);
    }
};