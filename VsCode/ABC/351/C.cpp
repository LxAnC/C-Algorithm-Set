/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-30 
 */
#include <bits/stdc++.h>

using namespace std;
int a[100001];
int main()
{
   int n;
   vector<int>nums;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    while(nums.size()&&nums.back()==x)
    {
      x++;
      nums.pop_back();
      
    }
    nums.push_back(x);
   }
   cout<<nums.size();
   return 0;
}
