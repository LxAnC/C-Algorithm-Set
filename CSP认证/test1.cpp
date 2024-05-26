#include<bits/stdc++.h>
using namespace std;
#define maxn 100000
int cnt[101][101];
struct node {
    int times,nums,cur;
}node[maxn];
int main()
{
    int n,m,len,x,fo=-1;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        cin>>len;
        while(len--)
        {
            cin>>x;
            if(node[x].cur!=i+1||node[x].times==0)
            {
                node[x].times++;
                node[x].nums++;
                node[x].cur=i+1;
            }
            else if(node[x].times)
            node[x].nums++;
        }
    }
    for(int i=1;i<=m;i++)
    {
        cout<<node[i].times<<" "<<node[i].nums<<endl;
    }
    return 0;
}