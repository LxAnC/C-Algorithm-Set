/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-26 
 */
//思路:
// 首先肯定先把ret初始化好,然后枚举所有以第二个参数为开头和结尾的
// 所有子字符串
//第二种思路
//就是直接找,观察哪种有规律,我这里发现,当两个开头结尾都算就是加2
//中间有字母就+3,如果后面没有字母就+1
//第二种思路也正确,不过很难找规律

//还是灵神牛逼,两行代码解决
class Solution {
public:
    long long countSubstrings(string s, char c) {
        long long k = ranges::count(s, c);
        return k * (k + 1) / 2;
    }
};

作者：灵茶山艾府
链接：https://leetcode.cn/problems/count-substrings-starting-and-ending-with-given-character/solutions/2692043/jian-ji-xie-fa-pythonjavacgo-by-endlessc-ecl8/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
//第一种超时暴力算法::
// class Solution {// public://     long long countSubstrings(string s, char c) {//         int ret=0;//         int n=s.length();//         for(int i=0;i<n;i++)
//         
//             if(s[i]==c)
//             {
//                 int j=i;
//                 string ans="";
//                 while(j<n)
//                 {
//                     ans+=s[j];
//                     if(ans[0]==c&&ans[ans.length()-1]==c)
//                     ret++;
//                     j++;
//                 }
//             }
//         }
//         return ret;
//     }
// };