/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-18 
 */
#include <bits/stdc++.h>

using namespace std;
void printarry(vector<vector<int>> &n,long long k)
{
  for(int i=0;i<k;i++)
  {for(int j=0;j<k;j++)
    cout<<n[i][j];
  cout<<endl;}
}
void solve()
{ 
  int k;
  cin>>k;
  k=pow(2,k);
  vector<vector<int>>n(k,vector<int>(k,0));
  for(int i=0;i<k;i++)
  for(int j=0;j<k;j++)
  n[i][j]=
  printarry(n,k);
}

int main()
{
   int t,k;
   cin>>t;
   while(t--)
   {
    solve();
   }
   return 0;
}
