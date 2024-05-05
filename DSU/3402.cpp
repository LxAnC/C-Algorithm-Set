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
int n, m,k; 
vector<vector<int, int>> Old(maxn);
void init(int n)
{
  for (int i = 1; i <= n; i++)
  {
    prex[i] = i;
  }
}
int root(int x)
{
  return prex[x] == x ? x : prex[x] = root(x);
}
void merge(int x, int y)
{
  prex[root(x)] = root(y);
  Old[k-m][x]=y;
}
bool iscon(int x, int y)
{
  return Old[k-m][x]==y;
}
void oldchange(int k)
{
    for(int i=m;i>k;i--)
    {
        for(int  j=1;j<=n;j++)
        Old[i][j]=j;
    }
}
int main()
{

  cin >> n >> m;
  k=m;
  init(n);
  for(int i=1;i<=m;i++)
  {
    int z, x, y;
    cin >> z;
    if (z == 1)
    {
      cin >> x >> y;
      merge(x, y);
    }
    else if (z == 3)
    {
      cin >> x >> y;
      cout << iscon(x, y) << endl;
      ;
    }
    else
    {
      cin >> x;
      oldchange(x);
    }
  }
  return 0;
}
