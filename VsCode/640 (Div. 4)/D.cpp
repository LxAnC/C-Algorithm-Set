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
   int num, ret = 0;
   cin >> num;
   vector<int> c(num);
   for (int i = 0; i < num; i++)
      cin >> c[i];
   int count_candy = accumulate(c.begin(), c.end(), 0);
   int left = 0, right = num - 1, current_candy = 0, left2 = 0, right2 = 0;

   while (count_candy > current_candy && left <= right)
   {
      // 统计每一轮吃的糖果数
      int currl = 0, currr = 0;
      // 左边的糖果
      while (currl <= current_candy && left <= right) // 判断当前糖果是否满足要求
      {
         currl += c[left++];
      }
      ret++;
      count_candy -= currl; // 总数减去左边吃的糖果;
      left2 += currl;       // 统计左边吃过的糖果
      current_candy = currl;
      while (currr <= current_candy && right > left)
      {
         currr += c[right--];
      }
      count_candy -= currr;
      right2 += currr; // 统计左边吃过的糖果
      current_candy = currr;
      ret++;
   }
   cout << ret << " " << left2 << " " << right2 << endl;
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
