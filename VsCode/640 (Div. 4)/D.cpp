/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-04-18
 */
#include <bits/stdc++.h>

using namespace std;

// #include<bits/stdc++.h>
// using namespace std;
// int t,n,a[1001];
// int main(){
// 	cin>>t;
// 	while(t--){
// 		cin>>n;
// 		for(int i=1;i<=n;i++)cin>>a[i];
// 		int l=2,r=n,slnow=a[1],srnow=0,sl=a[1],sr=0,step=1;
// 		bool flag=1;
// 		while(l<=r){
// 			step++;
// 			if(flag){
// 				while(l<=r&&srnow<=slnow){
// 					srnow+=a[r];
// 					sr+=a[r];
// 					r--;
// 				}
// 				flag=0,slnow=0;
// 			}
// 			else{
// 				while(l<=r&&slnow<=srnow){
// 					slnow+=a[l];
// 					sl+=a[l];
// 					l++;
// 				}
// 				flag=1,srnow=0;
// 			}
// 		}
// 		cout<<step<<" "<<sl<<" "<<sr<<endl;
// 	}
// 	return 0;
// }
// 还是有些案例过不了
void solve()
{
   int n, a, b, c = 0, suma = 0, sumb = 0, step = 0;
   cin >> n;
   vector<int> s(n);
   for (int i = 0; i < n; i++)
      cin >> s[i];
   int l = 0, r = n - 1;
   while (suma + sumb != accumulate(s.begin(), s.end(), 0))
   {
      a = 0, b = 0;
      while (a <= c && left <= right)
      {
         a += s[l++];
      }
      if (a != 0)
      {
         step++;
         c = a;
         suma += a;
      }
      while (b <= c && right >= left)
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
