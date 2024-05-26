/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-05-10 
 */
class Solution {
public:
    int minAnagramLength(string s) {
        int n = s.size();
        // 计算整个字符串里每种字母的出现次数
        int cnt[26] = {0};
        for (char c : s) cnt[c - 'a']++;

        // 检查子串的长度是否可能为 len
        auto check = [&](int len) {
            for (int i = 0; i < n; i += len) {
                // 统计当前子串每种字母的出现次数
                int tmp[26] = {0};
                for (int j = 0; j < len; j++) tmp[s[i + j] - 'a']++;
                for (int j = 0; j < 26; j++) if (tmp[j] * (n / len) != cnt[j]) return false;
            }
            return true;
        };

        // 枚举子串的长度
        for (int i = 1; i <= n; i++) if (n % i == 0 && check(i)) return i;
        return -1;
    }
};