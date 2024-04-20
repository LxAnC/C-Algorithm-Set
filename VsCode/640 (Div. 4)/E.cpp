/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-20
 */
#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n,ret=0,sum;
  cin >> n;
  vector<int> s(n);
  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
  }
  for(int i=0;i<n;i++)
  {
     sum=0;
    for(int j=0;j<i;j++)
    {
        if(sum<s[i])
        {
          sum+=s[j];
        }
        else if(sum==s[i])
       { ret++;break;}
       else
       break;
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
