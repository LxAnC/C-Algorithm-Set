/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-17 
 */
#include <bits/stdc++.h>
#define ll long long;

using namespace std;

void solve()
{
   int n,k;
   cin>>n>>k;
   cout<<(n+n/k)/k+k;

}
int main()
{
   int t=1;
   // cin>>t;
   while(t--)
   {
      solve();
   }
   return 0;
}
