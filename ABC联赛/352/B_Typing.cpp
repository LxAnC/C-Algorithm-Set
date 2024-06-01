/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-05-07 
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s1,s2;
   cin>>s1;
   cin>>s2;
   int i=0,j=0;
   for(int i=0;s2[i];i++)
   {
    if(s2[i]==s1[j])
    {
      j++;
      cout<<i+1<<" ";
    }
   }
   return 0;
}
