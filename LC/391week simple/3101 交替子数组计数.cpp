/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-28 
 */
#include <bits/stdc++.h>

using namespace std;

//先讲一下思路
//就是直接模拟首先写出暴力枚举的写法
//不过最后两个测试过不了
class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        long long ret=0;
        for(long long i=0;i<nums.size();i++)
        {
            long long j=i;
            long long flag=2;
            while(j<nums.size())
            {
                if(nums[j]!=flag)
                {flag=nums[j++];
                ret++;}
                else 
                {
                    break;
                }


            }
        }
        return ret;
    }
};
//这是灵神的简洁做法,参考并学习
class Solution {
public:
    long long countAlternatingSubarrays(vector<int> &nums) {
        long long ans = 0, cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            i && nums[i] == nums[i - 1] ? cnt = 1 : cnt++;
            ans += cnt; // 有 cnt 个以 i 为右端点的交替子数组
        }
        return ans;
    }
};