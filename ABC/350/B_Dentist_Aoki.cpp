/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-05-03
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, q;
  cin >> n>>q; 
   int sum=n;
  vector<int> nums;
  iota(nums.begin(), nums.end(), 1);
  unordered_map<int,int>bo;
  for(int i=0;i<q;i++)
  {
      int bit;
      cin>>bit;
      if(!(bo.count(bit))||bo[bit]==0)
      {
          bo[bit]=1;
          sum--;
      }
      else
     { bo[bit]=0;
     sum++;
     }
  }
  cout<<sum<<endl;
  return 0;
}