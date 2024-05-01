/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-30
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   vector<int> a;
   cin >> n;
   for (int i = 0; i < n; i++)
   {
      int x;
      cin >> x;
      while (a.size() && a.back() == x)
      {
         x++;
         a.pop_back();
      }
      a.push_back(x);
   }
   cout << a.size();
   return 0;
}
