/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-26 
 */
//还是比较简单,因为题目只限定了长度为2
//可以直接模拟
//时间复杂度:on
//ranges可以省略begin,end(),还是比较方便的
// class Solution {
// public:
//     bool isSubstringPresent(string s) {
//         int n=s.length();
//         unordered_map<string,int>d;
//         for(int i=0;i<n-1;i++)
//         {
//             d[s.substr(i,2)]++;
//         }
//         ranges::reverse(s);
//         for(int i=0;i<n-1;i++)
//         if(d.count(s.substr(i,2)))
//         return true;
//         return false;

//     }
// };