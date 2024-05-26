/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-22
 */
// class Solution
// {
// public:
//    vector<string> shortestSubstrings(vector<string> &arr)
//    {
//       int n = arr.size();
//       vector<string> ans(n);
//       // 枚举字符串，以及子串的长度
//       for (int i = 0; i < n; i++)
//          for (int len = 1; len <= arr[i].size(); len++)
//          {
//             // 枚举子串的开头
//             for (int l = 0; l + len <= arr[i].size(); l++)
//             {
//                string t = arr[i].substr(l, len);
//                bool ok = true;
//                // 检查子串是否出现过
//                for (int ii = 0; ii < n; ii++)
//                   if (i != ii && arr[ii].find(t) != string::npos)
//                   {
//                      ok = false;
//                      break;
//                   }
//                // 更新答案
//                if (ok)
//                   if (ans[i].empty() || t < ans[i])
//                      ans[i] = t;
//             }
//             if (ans[i].size() > 0)
//                break;
//          }
//       return ans;
//    }
// };
