/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-29 
 */
#include <bits/stdc++.h>

using namespace std;
//今天看了视频,决定自己来做带下标排序,冲
int main()
{
   vector<int>nums{1,4,2,6,3,5,4};
   vector<int>ids;

   int n=nums.size();
   for(int i=0;i<n;i++)
   ids[i]=i;
   sort(ids.begin(),ids.end(),cmp);
   for(auto x:ids)
   cout<<x<<endl;
   return 0;
}
