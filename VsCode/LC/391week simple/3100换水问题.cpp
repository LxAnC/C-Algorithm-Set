/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-28
 */
#include <bits/stdc++.h>

using namespace std;

// 这是一道模拟题
//  首先判断条件就是换的次数没有了,且喝完了所有的满水瓶子
//我这里依次的判断
class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int ret = 0;
        int empt = 0;
        while (numBottles != 0) {
            if (numBottles != 0) {
                ret += numBottles;
                empt == numBottles;
                numBottles = 0;
            }
            if(numExchange!=0&&empt>=numExchange)
            {
                numBottles+=1;
                empt-=numExchange;
                numExchange++;
            }
        }
        return ret;
    }
};