/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-18
 */
#include <bits/stdc++.h>

using namespace std;
void solve()
{
   int n, c = 0, suma = 0, sumb = 0, step = 0;
   cin >> n;
   vector<int> s(n);
   for (int i = 0; i < n; i++)
      cin >> s[i];
   int l = 0, r = n - 1;
   while (suma + sumb != accumulate(s.begin(), s.end(), 0))
   {
      int a = 0, b = 0;
      while (a <= c && l <= r)
      {
         a += s[l++];
      }
      if (a != 0)
      {
         step++;
         c = a;
         suma += a;
      }
      while (b <= c && r >= l)
      {
         b += s[r--];
      }
      if (b)
      {
         step++;
         c = b;
         sumb += b;
      }
   }
   cout << step << ' ' << suma << ' ' << sumb << endl;
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
