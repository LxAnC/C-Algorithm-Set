/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-17 
 */
#include <bits/stdc++.h>
#include <vector>
using namespace std;
void solve()
{
    int b,nums,flag=0;
    cin>>b>>nums;
    if(b>nums-1)
      if((b-(nums-1))%2==1)
        flag=1;
    if(b>2*(nums-1))
      if((b-2*(nums-1))%2==0)
      flag=2;
    if(flag==1)
    {
      cout<<"YES"<<endl;
      for(int i=1;i<nums;i++)
        cout<<1<<" ";
      cout<<b-(nums-1)<<endl;
 
    }
     else if(flag==2)
    {
      cout<<"YES"<<endl;
      for(int i=1;i<nums;i++)
        cout<<2<<" ";
      cout<<b-2*(nums-1)<<endl;
      
    }
    else
    cout<<"NO"<<endl;
 
 
}
int main()
{
    int t;
    t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
    
}
