/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-05-03 
 */
#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin>>s;
   s=s.substr(3);
  int  x=stoi(s);
   if(x<=349&&x!=316)
   cout<<"Yes"<<endl;
   else 
   cout<<"No"<<endl;    
   return 0;
}
