/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-20
 */
#include <bits/stdc++.h>
#define  MM 8e3+1;
using namespace std;
// void solve()
// {
//   int n, ret = 0, sum;
//   cin >> n;
//   vector<int> s(n);
//   for (int i = 0; i < n; i++)
//   {
//     cin >> s[i];
//   }
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n; j++)
//     {
//       sum = 0;
//       int b=j;
//       while (sum < s[i]&&b<n)
//       {
//         if(i==b||s[i]==s[b])
//        { b++;break;}
//         sum+=s[b++];
//       }
//       if(sum>s[i])
//       {
//         continue;
//       }
//       if(sum==s[i])
//       {
//         ret++;
//         break;
//       }
//     }
//   }
//   cout << ret << endl;
// }
void solve(){
  int n,ret=0;
  int a[8001]={0};
  cin>>n;
  vector<int>s(n);
  for (int i = 0; i < n; i++)
  {
    cin>>s[i];
  }
  
  for(int i=0;i<n;i++)
  {
    int sum=0;
  for(int j=0;j<n;j++)
  {
      sum+=s[j];
      if(sum<=n)
      {
        a[sum]++;
      }
        
  }}
  for(int i=0;i<n;i++)
    if(a[i])
    ret++;
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