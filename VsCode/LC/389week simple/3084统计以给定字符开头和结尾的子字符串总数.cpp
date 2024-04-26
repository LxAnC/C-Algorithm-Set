/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-26 
 */
//思路:
// 首先肯定先把ret初始化好,然后枚举所有以第二个参数为开头和结尾的
// 所有子字符串
class Solution {
public:
    long long countSubstrings(string s, char c) {
        int ret=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(s[i]==c)
            {
                int j=i;
                string ans="";
                while(j<n)
                {
                    ans+=s[j];
                    if(ans[0]==c&&ans[ans.length()-1]==c)
                    ret++;
                    j++;
                }
            }
        }
        return ret;
    }
};