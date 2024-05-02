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
   int sa=0,sb=0;
   for(int i=0;i<9;i++)
   {
    int x;
    cin>>x;
    sa+=x;
   }
   for(int i=0;i<8;i++)
   {
    int x;
    cin>>x;
    sb+=x;
   }
   cout<<sa-sb+1;
   return 0;
}
