/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-21 
 */
#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n,m,k,flag3,flag2,flag1;//分别表示00,10/01,11的个数
  cin>>n>>m>>k;
  flag1=n;
  flag2=m;
  flag3=k;
  string ret="";
  do
  {
    ret+="1";
  } while (k--);
  if(flag3)
  {
    while(m--)
    {
       char ch=ret.back()=='1'?'0':'1';
       if(ch=='0'&&n)
       {
        ret+="0";
        n--;
       }
       ret+=ch;
    }
  }
  else{
    ret="0";
    while(m--)
    {
       char ch=ret.back()=='1'?'0':'1';
       if(ch=='0'&&n)
       {
        ret+="0";
        n--;
       }
       ret+=ch;
    }
  }
  while(n--)
  {
    ret+="0";
  }
  cout<<ret<<endl;
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
    solve();
   }
   return 0;
}
