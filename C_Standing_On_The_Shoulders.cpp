/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-05-07 
 */
#include <bits/stdc++.h>

using namespace std;
const long long maxn=2e5+10;
long long a[maxn],b[maxn],cnt=0,cnth;
long long c[maxn];
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>q;
int main()
{
   
   long long n;
   long long x,y;
   for(long long i=0;i<n;i++)
   {
      cin>>a[i+1]>>b[i+1];

      q.push({i+1,abs(a[i+1]-b[i+1])});
   }
   while(!q.empty())
   {
      auto g=q.top();
      q.pop();
      cnt+=a[q.top().first];
      cnth=cnt+b[q.top().first];
      
   }
   cout<<cnth<<endl;

   return 0;
}
