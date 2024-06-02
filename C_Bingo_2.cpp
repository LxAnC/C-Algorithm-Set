//
   //* @Author: LxAnC
   //* @Email : LxAnC76@gmail.com
   //* @Date  : 2024-06-02 13:56
//  
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define N 2010
#define f1(i)  for(int i=1;i<=n;i++)
#define f2(i)  for(int i=n;i;i--)
#define f first
#define s second
#define en '\n'
int pow(int a , int n)
{
    int q = 1;
    while(n)
    {
      if(n & 1)q = q * a;
      a *= a;
      n = n>>1;
    }
    return q;
}

int n,m,x,y,z,ans;

signed main()
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int t;
    int h[N],l[N],x1,x2;
    cin>>n>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>x;
        h[x%n]++,l[x/n]++;
    
    }
    return 0;
}
