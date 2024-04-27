/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-27
 */
#include <bits/stdc++.h>

using namespace std;

void solve()
{
  int n, ret = 0, left, right;
  int l=0, r=0;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++)
  {
    cin >> nums[i];
  }
  left=0,right=n-1;
  while(left<right)
  {
      l+=nums[left];
      while(right>left&&r<l)
      {
        r+=nums[right];
        right--;
      }if(r==l)
      {
        ret+=n-right-left;
      }
  }
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
  return 0;
}
