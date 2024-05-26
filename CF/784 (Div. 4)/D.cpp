/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-24
 */
#include <iostream>
using namespace std;

int n, t;
string s;

int main()
{
  cin >> t;

  while (t--)
  {
    cin >> n >> s;
    bool flag = true;
    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] != 'W')
      {
        int j = i; // 记录当前坐标
        while (s[j] == s[i] && j < s.size())//特判是不是有一模一样的全字符
          j++;
        if ((j == s.size() || s[j] == 'W') && (i == 0 || s[i - 1] == 'W'))//前一段判断表示
        {
          flag = false;
          break;
        }
        i = max(i, j - 1);//优化algorithm
      }
    }
    if (flag)
      puts("YES");
    else
      puts("NO");
  }
}
