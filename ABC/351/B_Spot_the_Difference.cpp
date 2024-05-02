/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-05-02 
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   cin>>n;
   vector<string>A(n),B(n);
   for(auto &x:A)cin>>x;
   for(auto &x:B)cin>>x;
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
    if(A[i][j]!=B[i][j])
    {cout<<i+1<<" "<<j+1<<endl;
    return 0;}
   }
  
   return 0;
}
