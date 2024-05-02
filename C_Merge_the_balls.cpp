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
   vector<int>ball;
   for(int i=0;i<n;i++)
   {
    int x;
    cin>>x;
    while(ball.size()&&ball.back()==x)
    {
        x++;
        ball.pop_back();
    }
    ball.push_back(x);
   }
   cout<<ball.size()<<endl;
   return 0;
}
