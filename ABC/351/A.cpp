/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-30 
 */
#include <bits/stdc++.h>

using namespace std;

void solve(){
  vector<int>a,b;
  for(int i=0;i<9;i++)
  {
    int x;
    cin>>x;
    a.push_back(x);
  }
  for(int i=0;i<8;i++)
  {
    int x;
    cin>>x;
    b.push_back(x);
  }
  int suma=accumulate(a.begin(),a.end(),0);
  int sumb=accumulate(b.begin(),b.end(),0);
  cout<<abs(sumb-suma)+1;

}
int main()
{
   int t=1;
  //  cin>>t;
   while(t--)
   {
    solve();
   }
   return 0;
}
