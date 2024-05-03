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
  int sum = n;
  int a[10000] = {0};
  for (int i = 0; i < q; i++)
  {
    int x;
    cin>>x;
    if(a[x]==0)
    a[x]=1;
    else if(a[x]==1)
    a[x]=0;
  }
  for(int i=0;i<10000;i++)
  {
    if(a[i]==1)
    sum--;
  }
  cout<<sum<<endl;
}