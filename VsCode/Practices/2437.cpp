/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-30
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
  string s;
  s="21:09";
  int ret = 0;
  // 小时
  if (s[0] == '?' || s[1] == '?')
  {
    if (s[0] == '?' && s[1] != '?')
      if (s[1] >= '4')
        ret += 2;
      else
        ret += 3;
    else if (s[1] == '?' && s[0] != '?')
      if (s[0] > '1')
        ret += 4;
      else
        ret += 10;
    else
      ret = 24;
  }
  // 分钟
  if (s[3] == '?' || s[4] == '?')
  {
    if (s[3] == '?' && s[4] != '?')
      if (ret != 0)
        ret *= 6;
      else
        ret += 6;
    else if (s[3] != '?' && s[4] == '?')
    {
      if (ret != 0)
        ret *= 10;
      else
        ret += 10;
    }
    else
    {
      if (ret != 0)
        ret *= 60;
      else
        ret += 60;
    }
  }
  int b=ret==0?1:ret;
  cout<<b;
}
