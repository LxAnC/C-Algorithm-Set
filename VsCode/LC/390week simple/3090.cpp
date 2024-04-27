/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-27 
 */
#include <bits/stdc++.h>

using namespace std;
//链接如下
//https://leetcode.cn/contest/weekly-contest-390/
class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.length();
        int ret=0;
        for(int i=0;i<n;i++)
        {
            int hash[26]={0};
            hash[s[i]-97]++;
            int j=i+1;
            while(j<n)
            {
                hash[s[j]-97]++;
                if(hash[s[j]-97]>2)
{          
                break;}
                j++;
            } 
            ret=max(ret,j-1-i+1);
        }
        return ret;
    }
};