/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-30
 */
#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n;
  cin >> n;
  vector<int> ans;
  int a[200005];
  for(int i=0;i<n;i++)
  {
  cin>>a[i];
  }
  int i=0;
  while (n)
  {
    ans.push_back(pow(2,a[i++]));
    while(1)
    if (ans.size() <= 1)
    {
      break;
      
    }
    else if (ans[ans.size()-1]!=ans[ans.size()-2])
    {
      break;
      
    }
    else
    {
      int x = ans[ans.size()-1]+ans[ans.size()-2];
      ans.erase(ans.begin()+ans.size()-2,ans.begin()+ans.size());
      ans.push_back(x);
      
      continue;
    }
    n--;
  }
  cout<<ans.size()<<endl;
}
int main()
{
  int t = 1;
  while (t--)
  {
    solve();
  }
  return 0;
}
