/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-26
 */
#include <bits/stdc++.h>

using namespace std;

void solve()
{
  long long n;
  long long ret=0;
  cin >> n;
  vector<string>s(n);
  for(int i=0;i<n;i++)
  cin>>s[i];
  for(int i=0;i<n;i++)
  {
      for(int j=i+1;j<n;j++)
      {
        if(s[i]==s[j])
        continue;
        if(s[i][0]-s[j][0]==0)
        ret++;
        else if(s[i][1]-s[j][1]==0)
        ret++;
      }
  }
    cout<<ret<<endl;
}
int main()
{
  int t=1;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
