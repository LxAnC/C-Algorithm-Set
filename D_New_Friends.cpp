#include<bits/stdc++.h>
using namespace std;
struct node{
	int u,v,nxt;
}e[400005];
int head[200005],cnt,vis[200005];
void add(int u,int v){
	e[++cnt].u=u;
	e[cnt].v=v;
	e[cnt].nxt=head[u];
	head[u]=cnt;
}
int n,m;
long long ans=0,du[200005];
queue<int>q;
long long bfs(int _){
	q.push(_);
	long long sum=0;
	long long summ=0;
	while(!q.empty()){
		int now=q.front();
		q.pop();
		if(vis[now])continue;
//		cout<<now<<endl;
		vis[now]=1;
		sum++;
		summ+=du[now];
		for(int i=head[now];i;i=e[i].nxt){
			if(!vis[e[i].v])q.push(e[i].v); 
		}
	}
	return sum*(sum-1)/2-summ/2;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=m;i++){
		int u,v;
		cin>>u>>v;
		add(u,v);
		add(v,u);
		du[u]++;
		du[v]++;
	}
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			ans+=bfs(i);
		} 
	}
	cout<<ans;
	return 0;
}
