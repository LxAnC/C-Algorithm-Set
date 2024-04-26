/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-26
 */
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
  sort(s.begin(),s.end());
  for(int i=0;i<n;i++)
  {
     int j=i;
     cout<<s[j]<<endl;
     while(j<n&&s[j][0]==s[i][0]&&s[j]!=s[i])
     {
        ret++;
        j++;
     }
     i=j;
     
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

