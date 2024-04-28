/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-28 
 */
#include <bits/stdc++.h>

using namespace std;

// 链接如下https://leetcode.cn/contest/weekly-contest-391/
class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int b) {
        int s=0;
        int x=b;
        while(x)
        {
            s+=x%10;
            x/=10;
        }
        return b%s==0?s:-1;
    }
};