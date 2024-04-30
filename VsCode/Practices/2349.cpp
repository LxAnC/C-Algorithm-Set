/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-30 
 */
#include <bits/stdc++.h>

using namespace std;
//设计数字容器系统,比较困难,利用了平衡树算法
class NumberContainers {
public:
        unordered_map<int, int> nums;    // 找下标,和对应的数;
        unordered_map<int, set<int>> mm; // 找数,对应多个下标

    void change(int index, int number) {
        auto it = nums.find(index);
        if (it != nums.end()) {
            mm[it->second].erase(index);
            nums[index]=number;
        } else
            nums[index] = number;
            mm[number].insert(index);
    }

    int find(int number) {
        auto it =mm.find(number);
        if(it==mm.end()||it->second.empty())
        {
            return -1;
        }
        else 
        return *it->second.begin();
    }
};
class NumberContainers {
public:
        unordered_map<int,int>s;
        unordered_map<int,priority_queue<int,vector<int>,greater<>>>num;
    
    void change(int index, int number) {
        s[index]=number;
        num[number].push(index);
    }
    
    int find(int number) {
        auto it=num.find(number);
        if(it==num.end())
        return -1;
        while(!(it->second.empty())&&s[it->second.top()]!=number)it->second.pop();
        return it->second.empty()?-1:it->second.top();
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */