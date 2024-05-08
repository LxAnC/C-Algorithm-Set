/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-05-08 
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int x[2],y[2];
   cin>>x[0]>>y[0];
   cin>>x[1]>>y[1];
   cout<<(sqrt((x[0]-x[1])*(x[0]-x[1])+(y[0]-y[1])*(y[0]-y[1])));
   return 0;
}
