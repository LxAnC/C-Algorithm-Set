#include<bits/stdc++.h>
using namespace std;
const long long int maxn=1e10+10;
int main()
{
    int n;
    int ret=INT_MAX;
    cin >> n;
    for(int i=1;i*i<=n*n;i++)
    {
        if(n>=i*i)
        if((n-i*i)%2==0)
        ret=min((n-i*i)/2,ret);
        else
        if((i*i-n)%2==0)
        ret=min((i*i-n)/2,ret);
    }
    cout<<ret;
}
