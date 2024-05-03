/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-05-03
 */
#include <iostream>
#include <unordered_map>

using namespace std;

void solve()
{
  unordered_map<string, int> p;
  int i;
  string t, w;
  cin >> w;
  cin >> t;
  for (int i = 0; i < t.size(); i++)
  {
    for (int j = 1; j + i < t.size(); j++)
    {
      string x = t.substr(i, j + 1);
      if (p.count(x))
        p[x]++;

      else
        p[x] = 1;
    }
  }
  cout << p[w] << endl;
}
int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    solve();
  }
  return 0;
}
