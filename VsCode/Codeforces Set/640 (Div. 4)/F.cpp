/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-21
 */
#include <bits/stdc++.h>

using namespace std;
// 分别考虑情况 $n_1 = 0$ 并打印出相应的 $n_0 + 1$ 个 0 或 $n_2 + 1$ 个 1。

// 现在，我们的字符串至少有一对 "10 "或 "01"。让我们组成 "101010 ...10"，
// 长度为 $n_1 + 1$ 。
// 这样，所有总和为 $1$ 的子串都得到了满足
// 。现在，让我们在第一个 0 之前插入 $n_0$ 个 0，
// 这样就能满足总和为 $0$ 的子串。
// 然后在第一个 1 之前插入 $n_2$ 个 1，这样就满足了子串的和 $2$ 。
void solve()
{
  int n0, n1, n2;
  string ret;
  cin >> n0 >> n1 >> n2;
  if (n1 == 0)
  {
    if (n0 == 0)
      cout << string(n2 + 1, '1')<<endl;
    else
      cout << string(n0 + 1, '0')<<endl;
    return;
  }
    for (int i = 0; i < n1 + 1; i++)
    {
      if (i & 1)
        ret += "0";
      else
        ret += "1";
    }
  ret.insert(1, string(n0, '0'));
  ret.insert(0, string(n2, '1'));
  cout << ret << endl;
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
