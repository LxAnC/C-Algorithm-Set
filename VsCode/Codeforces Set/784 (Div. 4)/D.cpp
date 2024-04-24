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
  getline(cin,s);
  int r = 0, b = 0;
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] == 'W')
    {
      if(!(r&&b))
      {
        ret="NO";
      }
      r=0,b=0;
    }
    else if(s[i]=='R')
    r++;
    else 
    b++;

  }
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
