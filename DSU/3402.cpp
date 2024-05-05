/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-05-05
 */
#include <bits/stdc++.h>

using namespace std;
const int maxn = 1e5 + 10;
int prex[maxn];
void init(int n)
{
    for(int i=1;i<=n;i++)
    {
      prex[i]=i;
    }
}
int root(int x)
{
  return prex[x]==x?x:prex[x]=root(x);
}
int merge(int x,int y)
{
    prex[root(x)]=root(y);
}
bool iscon(int x,int y)
{
  return root(x)==root(y)?1:0;
}
int main()
{
  int n, m;
  cin >> n >> m;
  init(n);
  while(m--)
  {
    int z,x,y;
    cin>>z>>x>>y;
    if(z==1)
    {
      merge(x,y);
    }
    else if(z==3)
    {
      cout<<iscon(x,y)<<endl;;
    }
    else{

    }
  }
  return 0;
}
