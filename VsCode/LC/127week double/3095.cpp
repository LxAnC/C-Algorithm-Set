/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-28 
 */
#include <bits/stdc++.h>

using namespace std;

//链接如下
//https://leetcode.cn/contest/biweekly-contest-127/
int main()
{
   int n=20;
   int k=2;
   int sum=0;
   while(n)
   {
    sum+=n|0;
    n>>1;
   }
   cout<<sum<<endl;
   return 0;
}
