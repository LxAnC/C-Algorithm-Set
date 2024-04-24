/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-24
 */
#include <bits/stdc++.h>

using namespace std;
void solve()
{
  int n;
  string s;
  string ret = "Yes";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    char ch;
    cin >> ch;
    s += ch;
  }
  for (int i = 1; i < s.length(); i++)
  {
    if(s[i]=='w')
    {
      if(s[i-1]-s[i-2]==0)
      {
        ret="NO";
      }
    }
  }
  cout<<ret<<endl;
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
