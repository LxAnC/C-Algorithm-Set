/**
 * Copyright © 2024 LxAnC. All rights reserved.
 * 
 * @author: LxAnC
 * @date: 2024-04-17 
 */
#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,k=1,ret=0;
    cin>>n;
    int b=n;
    while(b!=0)
    {
        if(b%10!=0)
        ret++;
        b/=10;
    }
    cout<<ret<<endl;
    while(n)
    {
        int s=n%10*k;
        if(s)
        cout<<s<<' ';
        k*=10;
        n/=10;
    }
    cout<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
 
    }
    return 0;
}