/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-18 
 */
#include <bits/stdc++.h>

using namespace std;  
int k;
bool  ak[100000001];
vector<vector<bool>>bk(k+1,vector<bool>(k+1,false));
void printarry(vector<vector<int>> &n,long long k)
{
    for(int m=1;m<=k;m++)
{       cout<<m<<' ';
    for(int i=1;i<=k;i++)     
      cout<<n[i][m]<<' '; 
       cout<<endl;}

}
void solve()
{ 
  int flag;
  cin>>k;
  k=pow(2,k);    
  vector<vector<bool>>ak(k+1,vector<bool>(k+1,false));
  vector<vector<int>>n(k+1,vector<int>(k+1,0));
  for(int i=1;i<=k;i++)
 { 

    for(int j=1;j<=k;j++)
    for(int m=1;m<=k;m++)
    {
      if(m!=j&&ak[m][j]==false&&ak[j][m]==false&&n[j][i]==0)
      {
      ak[m][j]=ak[j][m]=true;
      n[j][i]=m;
      n[m][i]=j;
      flag=1;
      }
      if(flag==1)
      {flag=0;
      break;}
    }
  
      
}
  
  printarry(n,k);
}

int main()
{
   int t,k;
t=1;
   while(t--)
   {
    solve();
   }
   return 0;
}
