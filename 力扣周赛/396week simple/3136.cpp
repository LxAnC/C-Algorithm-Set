/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-05-10 
 */
#include <bits/stdc++.h>

using namespace std;
// 有效单词 需要满足以下几个条件：

// 至少 包含 3 个字符。
// 由数字 0-9 和英文大小写字母组成。（不必包含所有这类字符。）
// 至少 包含一个 元音字母 。
// 至少 包含一个 辅音字母 。
// 给你一个字符串 word 。如果 word 是一个有效单词，则返回 true ，否则返回 false 。

// 注意：

// 'a'、'e'、'i'、'o'、'u' 及其大写形式都属于 元音字母 。
// class Solution {
// public:
//     bool isValid(string word) {
//         bool ret=false;
//         int f1=0,f2=0;
//         if(word.size()<3)
//         return ret;
//         for(int i=0;i<word.size();i++)
//         word[i]=tolower(word[i]);
//         for(auto x:word){
//             if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
//             f1=1;
//             else if(x>='a'&&x<='z')
//             f2=1;
//             else if(x>='0'&&x<='9');
//             else return false;
//         }
//         return f1==1&&f2==1?true:false;
//     }
// };