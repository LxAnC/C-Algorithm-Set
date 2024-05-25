#include<bits/stdc++.h>
using namespace std;


#define N 1000
struct node{
    int to,w,next;
}edge[N];
int head[N],cnt=1;
void add(int f,int t,int w)
{
    edge[cnt].to=t;
    edge[cnt].w=w;
    edge[cnt].next=head[f];
    head[f]=cnt++;
}
void query(int x)
{
    for(int i=head[x];i;i=edge[i].next)
    cout<<edge[i].to<<endl;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int f,t,w;
    for(int i=1;i<=m;i++)
    {
        cin>>f>>t>>w;
        add(f,t,w);
    }
    for(int i=1;i<=n;i++)
    {
        {cout<<i<<"的分支顶点有"<<endl;
        query(i);}
     

    }
    return 0;
}