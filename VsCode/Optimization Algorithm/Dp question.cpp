/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-24 
 */
#include <bits/stdc++.h>

using namespace std;
int mem[100001]={0};
int dfs(vector<int>a,int i)
{
  if(i<0)
  return 0;
  if(mem[dfs(i)]!=0)
  return mem[dfs(i)];
  return max(dfs(a,i-1),dfs(a,i-2)+a[i]);
}
int main()
{
   vector<int>a={1,3,2,4,5,6};
   cout<<dfs(a,a.size()-1);
   return 0;
}
