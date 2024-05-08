/**
 * Copyright © 2024 LxAnC. All rights reserved.
 *
 * @author: LxAnC
 * @date: 2024-05-07
 */
#include<bits/stdc++.h>
using namespace std;
long long a[200005],b[200005];
int main(){
	int n;
	cin>>n; 
	long long sum=0;
	long long maxx=0;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i];
		sum+=a[i];//这是所有巨人身体的高度相加 
		maxx=max(maxx,b[i]-a[i]);//这是最大的巨人头 
	}
	cout<<maxx+sum;//相加即为答案 
	return 0; 
}
// #include <bits/stdc++.h>

// using namespace std;
// const long long maxn = 2e5 + 10;
// long long a[maxn], b[maxn], cnt = 0, cnth;
// priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
// int main()
// {

//   long long n;
//   long long x, y;
//   cin >> n;
//   for (long long i = 1; i <= n; i++)
//   {
//     cin >> a[i] >> b[i];

//     q.push({i, abs(a[i] - b[i])});
//   }
//   // 第一个人
//   auto g = q.top().first;
//   cnt = a[g];
//   cnth = b[g];
//   q.pop();
//   while (!q.empty())
//   {
//     auto g = q.top().first;
//     cnth = cnt + b[g];
//     cnt += a[g];
//     q.pop();
//   }
//   cout << cnth << endl;

//   return 0;
// }
